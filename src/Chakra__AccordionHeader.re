open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~ariaLabel: string=?,
    ~variantColor: string=?,
    ~variant: string=?,
    ~isDisabled: bool=?,
    ~isLoading: bool=?,
    ~loadingText: string=?,
    ~size: string=?,
    ~children: React.element
  ) =>
  React.element =
  "AccordionHeader";

let makeProps =
    (
      ~ariaLabel=?,
      ~variantColor=?,
      ~variant=?,
      ~isDisabled=?,
      ~isLoading=?,
      ~loadingText=?,
      ~size=?,
      ~children,
    ) =>
  makeProps(
    ~ariaLabel?,
    ~variantColor=?Option.map(variantColor, variantColorToJs),
    ~variant?,
    ~isDisabled?,
    ~isLoading?,
    ~loadingText?,
    ~size=?Option.map(size, sizeToJs),
    ~children,
  );
