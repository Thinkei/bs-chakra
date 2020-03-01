open Chakra;

[@react.component]
let make = () => {
  let toast = Toast.useToast();
  <Button
    variantColor=`green
    onClick={_ => {
      toast(
        ~isClosable=true,
        ~title="Account created",
        ~description="We've created your account for you.",
        ~position=`topRight,
        ~status=`warning,
        (),
      )
    }}>
    {"Show toast" |> React.string}
  </Button>;
};
