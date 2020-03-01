open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~size: string=?,
    ~thickness: string=?,
    ~speed: string=?,
    ~label: string=?,
    ~color: string=?,
    ~emptyColor: string=?
  ) =>
  React.element =
  "Spinner";

let makeProps =
    (~size=?, ~thickness=?, ~speed=?, ~label=?, ~color=?, ~emptyColor=?) =>
  makeProps(
    ~size=?Option.map(size, sizeToJs),
    ~thickness?,
    ~speed?,
    ~label?,
    ~color=?Option.map(color, colorToJs),
    ~emptyColor?,
  );
