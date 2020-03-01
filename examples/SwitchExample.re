open Chakra;

[@react.component]
let make = () => {
  <Stack align=`center isInline=true>
    <Switch
      size=`sm
      onChange={v => Js.log(v->ReactEvent.Form.target##checked)}
    />
    <Switch size=`md />
    <Switch size=`lg />
  </Stack>;
};
