open Chakra;

[@react.component]
let make = () => {
  let toast =
    Toast.useToast(
      ~isClosable=true,
      ~title="Account created",
      ~description="We've created your account for you.",
      ~position=`topRight,
      (),
    );
  <Button variantColor="green" onClick={_ => {toast()}}>
    {"Show toast" |> React.string}
  </Button>;
};
