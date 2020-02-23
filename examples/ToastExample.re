open Chakra.Toast;

[@react.component]
let make = () => {
  let toast = useToast(.);
  <button
    onClick={_ => {
      toast(.
        makeToastProps(
          ~isClosable=true,
          ~title="Account created",
          ~description="We've created your account for you.",
          (),
        ),
      )
    }}>
    {"Show toast" |> React.string}
  </button>;
};
