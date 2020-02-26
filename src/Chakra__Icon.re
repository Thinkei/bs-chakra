open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~size: string=?,
    ~name: string=?,
    ~color: string=?,
    ~focusable: bool=?,
    ~role: string=?
  ) =>
  React.element =
  "Icon";

let makeProps = (~size=?, ~name=?, ~color=?, ~focusable=?, ~role=?) =>
  makeProps(
    ~size=?Option.map(size, sizeToJs),
    ~name?,
    ~color=?Option.map(color, colorToJs),
    ~focusable?,
    ~role?,
  );
