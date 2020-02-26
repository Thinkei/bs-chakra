const fs = require("fs");

const NATIVE_TYPE = ["bool", "string", "int", "float"];
const CUSTOM_TYPE = [
  "color",
  "size",
  "variantColor",
  "buttonVariant",
  "icon",
  "iconRole",
  "status",
  "alertStyle",
  "flexDirection",
  "flexWrap",
  "flexAlignment",
  "justifyContent",
  "overflow",
  "shallow",
  "lineHeight",
  "inputVariant"
];

const inquirer = require("inquirer");
inquirer.registerPrompt("recursive", require("inquirer-recursive"));

const createExternalMake = (componentName, props) => {
  return `
[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
  ${props
    .map(prop => {
      const type = CUSTOM_TYPE.includes(prop.type) ? "string" : prop.type;
      return prop.optional
        ? `~${prop.name}: ${type}=?`
        : `~${prop.name}: ${type}`;
    })
    .join(",\n")}
  ) =>
  React.element =
  "${componentName}";
  `;
};

const createMakeProps = props => {
  return `
let makeProps =
    (
  ${props
    .map(prop => {
      return prop.optional ? `~${prop.name}=?` : `~${prop.name}`;
    })
    .join(",\n")}
    ) =>
  makeProps(

  ${props
    .map(prop => {
      if (CUSTOM_TYPE.includes(prop.name)) {
        if (prop.optional) {
          return `~${prop.name}=?Option.map(${prop.name}, ${prop.name}ToJs)`;
        }

        return `~${prop.name}=${prop.type}ToJs(${prop.name})`;
      }

      if (prop.optional) {
        return `~${prop.name}?`;
      }

      return `~${prop.name}`;
    })
    .join(",\n")}
  );
  `;
};

const importBeltAndCustomTypes = () => {
  return `
open Belt;
open Chakra__Types;
`;
};

const createNewBinding = (componentName, props) => {
  const hasCustomProp =
    props.find(({ type }) => CUSTOM_TYPE.includes(type)) != null;
  fs.writeFile(
    `./src/Chakra__${componentName}.re`,
    `
${hasCustomProp ? importBeltAndCustomTypes() : ""}

${createExternalMake(componentName, props)}

${hasCustomProp ? createMakeProps(props) : ""}
        `,
    function(err, file) {
      if (err) throw err;
      console.log("Created new module!");
    }
  );

  fs.appendFile(
    "./src/Chakra.re",
    `module ${componentName} = Chakra__${componentName};\n`,
    function(err) {
      if (err) throw err;
      console.log("DONE");
    }
  );
};

const promp = () =>
  inquirer
    .prompt({
      type: "input",
      name: "componentName",
      message: "Component name?"
    })
    .then(({ componentName }) => {
      inquirer
        .prompt({
          type: "recursive",
          message: "Add new prop?",
          name: "props",
          prompts: [
            {
              type: "input",
              name: "name",
              message: "Prop name?"
            },
            {
              type: "confirm",
              name: "optional",
              message: "Optional?"
            },
            {
              type: "list",
              name: "type",
              message: "type",
              choices: [
                ...NATIVE_TYPE,
                new inquirer.Separator(),
                "React.element",
                new inquirer.Separator(),
                ...CUSTOM_TYPE,
                new inquirer.Separator(),
                ...NATIVE_TYPE.map(t => `${t} => unit`),
                new inquirer.Separator(),
                "ReactEvent.Form.t => unit"
              ]
            }
          ]
        })
        .then(({ props }) => {
          createNewBinding(componentName, props);
        });
    });

promp();
