open Chakra;

[@react.component]
let make = () => {
  <Stack align=`center isInline=true>
    <Tooltip label="Right end" placement=`rightEnd>
      <Button variant=`outline> "Right-End"->React.string </Button>
    </Tooltip>
  </Stack>;
};
