open Chakra;

[@react.component]
let make = () => {
  let (value, setValue) = React.useState(() => "1");
  <RadioGroup
    onChange={e => setValue(e->ReactEvent.Form.target##value)} value>
    <Radio value="1"> {"First" |> React.string} </Radio>
    <Radio value="2"> {"Second" |> React.string} </Radio>
    <Radio value="3"> {"Third" |> React.string} </Radio>
  </RadioGroup>;
};
