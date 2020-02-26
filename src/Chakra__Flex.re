open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~flexDirection: string=?,
    ~flexWrap: string=?,
    ~alignItems: string=?,
    ~justifyContent: string=?
  ) =>
  React.element =
  "Flex";

let makeProps =
    (~flexDirection=?, ~flexWrap=?, ~alignItems=?, ~justifyContent=?) =>
  makeProps(
    ~flexDirection=?Option.map(flexDirection, flexDirectionToJs),
    ~flexWrap=?Option.map(flexWrap, flexWrapToJs),
    ~alignItems?,
    ~justifyContent=?Option.map(justifyContent, justifyContentToJs),
  );
