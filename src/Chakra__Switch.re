open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~size: string=?,
    ~color: string=?,
    ~name: string=?,
    ~value: string=?,
    ~isChecked: bool=?,
    ~defaultIsChecked: bool=?,
    ~isDisabled: bool=?,
    ~isInvalid: bool=?,
    ~ariaLabel: string=?,
    ~ariaLabelledby: string=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Switch";

let makeProps =
    (
      ~size=?,
      ~color=?,
      ~name=?,
      ~value=?,
      ~isChecked=?,
      ~defaultIsChecked=?,
      ~isDisabled=?,
      ~isInvalid=?,
      ~ariaLabel=?,
      ~ariaLabelledby=?,
      ~onChange=?,
      ~children=?,
    ) =>
  makeProps(
    ~size=?Option.map(size, sizeToJs),
    ~color=?Option.map(color, colorToJs),
    ~name?,
    ~value?,
    ~isChecked?,
    ~defaultIsChecked?,
    ~isDisabled?,
    ~isInvalid?,
    ~ariaLabel?,
    ~ariaLabelledby?,
    ~onChange?,
    ~children?,
  );
