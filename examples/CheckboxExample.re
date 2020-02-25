open Chakra;

[@react.component]
let make = () => {
  <CheckboxGroup
    isInline=true variantColor="teal" defaultValue=[|"itachi", "kisame"|]>
    <Checkbox value="itachi"> {"Itachi" |> React.string} </Checkbox>
    <Checkbox value="madara"> {"Itachi" |> React.string} </Checkbox>
    <Checkbox value="kisame"> {"Kisame" |> React.string} </Checkbox>
  </CheckboxGroup>;
};
