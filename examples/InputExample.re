open Chakra;

[@react.component]
let make = () => {
  let (isShowingPassword, setIsShowingPassword) = React.useState(() => false);
  <Stack align=`center spacing=3>
    <Input
      focusBorderColor=`blue300
      placeholder="Here is a sample placeholder"
    />
    <Input
      isInvalid=true
      errorBorderColor=`red300
      placeholder="Here is a sample placeholder"
    />
    <Input
      isInvalid=true
      errorBorderColor=`red700
      placeholder="Here is a sample placeholder"
    />
    <InputGroup size=`lg>
      <Input
        _type={isShowingPassword ? `text : `password}
        placeholder="Enter password"
      />
      <InputRightAddon>
        <Button
          size=`sm
          onClick={_ => setIsShowingPassword(_ => !isShowingPassword)}>
          {(isShowingPassword ? "Hide" : "Show") |> React.string}
        </Button>
      </InputRightAddon>
    </InputGroup>
  </Stack>;
};
