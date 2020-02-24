open Chakra.Toast;

[@react.component]
let make = () => {
  let toast =
    useToast(
      ~isClosable=true,
      ~title="Account created",
      ~description="We've created your account for you.",
      ~duration=NeverDismiss,
      ~position=`topRight,
      (),
    );
  <button onClick={_ => {toast()}}> {"Show toast" |> React.string} </button>;
};
