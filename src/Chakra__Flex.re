open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~flexDirection: string=?,
    ~flexWrap: string=?,
    ~alignItems: string=?,
    ~justifyContent: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Flex";

let makeProps =
    (
      ~flexDirection=?,
      ~flexWrap=?,
      ~alignItems=?,
      ~justifyContent=?,
      ~children,
    ) =>
  makeProps(
    ~flexDirection=?Option.map(flexDirection, flexDirectionToJs),
    ~flexWrap=?Option.map(flexWrap, flexWrapToJs),
    ~alignItems=?Option.map(alignItems, flexAlignmentToJs),
    ~justifyContent=?Option.map(justifyContent, justifyContentToJs),
    ~children,
  );
