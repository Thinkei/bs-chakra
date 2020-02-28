open Chakra;

[@react.component]
let make = () => {
  <Stack align=`center spacing=3>
    <Select size=`lg>
      <option value="option1"> {"Option 1" |> React.string} </option>
      <option value="option2"> {"Option 2" |> React.string} </option>
      <option value="option3"> {"Option 3" |> React.string} </option>
    </Select>
    <Select>
      <option value="option1"> {"Option 1" |> React.string} </option>
      <option value="option2"> {"Option 2" |> React.string} </option>
      <option value="option3"> {"Option 3" |> React.string} </option>
    </Select>
  </Stack>;
};
