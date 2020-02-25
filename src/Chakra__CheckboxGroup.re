[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~id: string=?,
    ~name: string=?,
    ~value: array(string)=?,
    ~defaultValue: array(string)=?,
    ~variantColor: string=?,
    ~onChange: array(string) => unit=?,
    ~spacing: int=?,
    ~isInline: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "CheckboxGroup";
