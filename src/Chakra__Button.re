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
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~leftIcon: string=?,
    ~rightIcon: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Button";

let makeProps =
    (
      ~ariaLabel=?,
      ~variantColor=?,
      ~variant=?,
      ~isDisabled=?,
      ~isLoading=?,
      ~loadingText=?,
      ~size=?,
      ~leftIcon=?,
      ~rightIcon=?,
      ~children,
    ) =>
  makeProps(
    ~ariaLabel?,
    ~variantColor=?Option.map(variantColor, colorVariantToJs),
    ~variant=?Option.map(variant, buttonVariantToJs),
    ~isDisabled?,
    ~isLoading?,
    ~loadingText?,
    ~size=?Option.map(size, sizeToJs),
    ~leftIcon=?Option.map(leftIcon, iconToJs),
    ~rightIcon=?Option.map(rightIcon, iconToJs),
    ~children,
  );
