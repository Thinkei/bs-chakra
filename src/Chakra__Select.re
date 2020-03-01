open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~size: string=?,
    ~icon: string=?,
    ~iconSize: string=?,
    ~variant: string=?,
    ~focusBorderColor: string=?,
    ~errorBorderColor: string=?,
    ~isDisabled: bool=?,
    ~isInvalid: bool=?,
    ~isRequired: bool=?,
    ~isReadOnly: bool=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~value: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Select";

let makeProps =
    (
      ~size=?,
      ~icon=?,
      ~iconSize=?,
      ~variant=?,
      ~focusBorderColor=?,
      ~errorBorderColor=?,
      ~isDisabled=?,
      ~isInvalid=?,
      ~isRequired=?,
      ~isReadOnly=?,
      ~onChange=?,
      ~value=?,
      ~children,
    ) =>
  makeProps(
    ~size=?Option.map(size, sizeToJs),
    ~icon=?Option.map(icon, iconToJs),
    ~iconSize?,
    ~variant?,
    ~focusBorderColor?,
    ~errorBorderColor?,
    ~isDisabled?,
    ~isInvalid?,
    ~isRequired?,
    ~isReadOnly?,
    ~onChange?,
    ~value?,
    ~children,
  );
