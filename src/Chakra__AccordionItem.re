[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~isOpen: bool=?,
    ~defaultIsOpen: bool=?,
    ~id: string=?,
    ~isDisabled: bool=?,
    ~onChange: int => unit=?,
    ~children: React.element
  ) =>
  React.element =
  "AccordionItem";
