[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~allowMultiple: bool=?,
    ~allowToggle: bool=?,
    ~index: int=?,
    ~defaultIndex: int=?,
    ~onChange: int => unit=?,
    ~children: React.element
  ) =>
  React.element =
  "Accordion";
