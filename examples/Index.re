open Chakra;

module Group = {
  [@react.component]
  let make = (~title, ~children) => {
    <div
      style={ReactDOMRe.Style.make(
        ~padding="20px",
        ~border="1px gray solid",
        (),
      )}>
      <Heading fontSize="xl"> {title |> React.string} </Heading>
      <br />
      children
    </div>;
  };
};

module Example = {
  [@react.component]
  let make = () => {
    <ThemeProvider>
      <CSSReset />
      <Stack spacing=8>
        <Group title="Toast, Button"> <ToastExample /> </Group>
        <Group title="Checkbox"> <CheckboxExample /> </Group>
        <Group title="Radio"> <RadioExample /> </Group>
        <Group title="Switch"> <SwitchExample /> </Group>
        <Group title="Input"> <InputExample /> </Group>
        <Group title="Select"> <SelectExample /> </Group>
        <Group title="Spinner"> <SpinnerExample /> </Group>
      </Stack>
    </ThemeProvider>;
  };
};

ReactDOMRe.renderToElementWithId(<Example />, "root");
