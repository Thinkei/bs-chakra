open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make: (~size: string=?, ~children: React.element) => React.element =
  "InputGroup";

let makeProps = (~size=?, ~children) =>
  makeProps(~size=?Option.map(size, sizeToJs), ~children);
