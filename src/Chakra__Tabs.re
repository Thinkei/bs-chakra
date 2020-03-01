open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~onChange: int => unit=?,
    ~index: int=?,
    ~defaultIndex: int=?,
    ~isManual: bool=?,
    ~variant: string=?,
    ~variantColor: string=?,
    ~size: string=?,
    ~orientation: string=?,
    ~isFitted: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Tabs";

let makeProps =
    (
      ~onChange=?,
      ~index=?,
      ~defaultIndex=?,
      ~isManual=?,
      ~variant=?,
      ~variantColor=?,
      ~size=?,
      ~orientation=?,
      ~isFitted=?,
      ~children,
    ) =>
  makeProps(
    ~onChange?,
    ~index?,
    ~defaultIndex?,
    ~isManual?,
    ~variant?,
    ~variantColor=?Option.map(variantColor, colorToJs),
    ~size=?Option.map(size, sizeToJs),
    ~orientation=?Option.map(orientation, orientationToJs),
    ~isFitted?,
    ~children,
  );
