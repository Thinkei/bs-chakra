open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~ariaLabel: string=?,
    ~isDisabled: bool=?,
    ~color: string=?,
    ~size: string=?
  ) =>
  React.element =
  "CloseButton";

let makeProps = (~ariaLabel=?, ~isDisabled=?, ~color=?, ~size=?) =>
  makeProps(
    ~ariaLabel?,
    ~isDisabled?,
    ~color=?Option.map(color, colorToJs),
    ~size=?Option.map(size, sizeToJs),
  );
