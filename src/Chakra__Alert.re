open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~status: string=?,
    ~variant: string=?,
    ~flexDirection: string=?,
    ~flexWrap: string=?,
    ~alignItems: string=?,
    ~justifyContent: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Alert";

let makeProps =
    (
      ~status=?,
      ~variant=?,
      ~flexDirection=?,
      ~flexWrap=?,
      ~alignItems=?,
      ~justifyContent=?,
      ~children,
    ) =>
  makeProps(
    ~status=?Option.map(status, statusToJs),
    ~variant?,
    ~flexDirection=?Option.map(flexDirection, flexDirectionToJs),
    ~flexWrap=?Option.map(flexWrap, flexWrapToJs),
    ~alignItems=?Option.map(alignItems, flexAlignmentToJs),
    ~justifyContent=?Option.map(justifyContent, justifyContentToJs),
    ~children,
  );
