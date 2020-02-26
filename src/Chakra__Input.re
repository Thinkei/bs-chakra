open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~ariaLabel: string=?,
    ~ariaDescribedby: string=?,
    ~isDisabled: bool=?,
    ~isInvalid: bool=?,
    ~isRequired: bool=?,
    ~isFullWidth: bool=?,
    ~isReadOnly: bool=?,
    ~size: string=?,
    ~variant: string=?,
    ~focusBorderColor: string=?,
    ~errorBorderColor: string=?,
    ~value: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~placeholder: string=?,
    ~type_: string=?
  ) =>
  React.element =
  "Input";

let makeProps =
    (
      ~ariaLabel=?,
      ~ariaDescribedby=?,
      ~isDisabled=?,
      ~isInvalid=?,
      ~isRequired=?,
      ~isFullWidth=?,
      ~isReadOnly=?,
      ~size=?,
      ~variant=?,
      ~focusBorderColor=?,
      ~errorBorderColor=?,
      ~value=?,
      ~onChange=?,
      ~placeholder=?,
      ~type_=?,
    ) =>
  makeProps(
    ~ariaLabel?,
    ~ariaDescribedby?,
    ~isDisabled?,
    ~isInvalid?,
    ~isRequired?,
    ~isFullWidth?,
    ~isReadOnly?,
    ~size=?Option.map(size, sizeToJs),
    ~variant=?Option.map(variant, inputVariantToJs),
    ~focusBorderColor=?Option.map(focusBorderColor, colorToJs),
    ~errorBorderColor=?Option.map(errorBorderColor, colorToJs),
    ~value?,
    ~onChange?,
    ~placeholder?,
    ~type_=?Option.map(type_, inputTypeToJs),
  );
