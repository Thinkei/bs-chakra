open Chakra;

[@react.component]
let make = () => {
  <Stack align=`center isInline=true>
    <Spinner
      thickness="4px"
      speed="0.65s"
      emptyColor=`gray200
      color=`blue500
      size=`lg
    />
    <Spinner
      thickness="6px"
      speed="1.9s"
      emptyColor=`cyan300
      color=`blue500
      size=`xl
    />
  </Stack>;
};
