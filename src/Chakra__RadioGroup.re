[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~value: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~children: React.element
  ) =>
  React.element =
  "RadioGroup";
