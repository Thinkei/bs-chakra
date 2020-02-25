[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~id: string=?,
    ~name: string=?,
    ~value: string=?,
    ~variantColor: string=?,
    ~defaultCheck: bool=?,
    ~isChecked: bool=?,
    ~isIndeterminate: bool=?,
    ~isFullWidth: bool=?,
    ~size: [@bs.string] [ | `sm | `md | `ld]=?,
    ~isDisabled: bool=?,
    ~isInvalid: bool=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onBlur: unit => unit=?,
    ~onFocus: unit => unit=?,
    ~ariaLabel: string=?,
    ~ariaLabelBy: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Checkbox";
