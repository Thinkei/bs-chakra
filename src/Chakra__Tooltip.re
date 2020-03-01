open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~isOpen: bool=?,
    ~defaultIsOpen: bool=?,
    ~label: string=?,
    ~ariaLabel: string=?,
    ~placement: string=?,
    ~hasArrow: bool=?,
    ~showDelay: int=?,
    ~hideDelay: int=?,
    ~closeOnClick: bool=?,
    ~shouldWrapChildren: bool=?,
    ~onOpen: unit => unit=?,
    ~onClose: unit => unit=?,
    ~children: React.element
  ) =>
  React.element =
  "Tooltip";

let makeProps =
    (
      ~isOpen=?,
      ~defaultIsOpen=?,
      ~label=?,
      ~ariaLabel=?,
      ~placement=?,
      ~hasArrow=?,
      ~showDelay=?,
      ~hideDelay=?,
      ~closeOnClick=?,
      ~shouldWrapChildren=?,
      ~onOpen=?,
      ~onClose=?,
      ~children,
    ) =>
  makeProps(
    ~isOpen?,
    ~defaultIsOpen?,
    ~label?,
    ~ariaLabel?,
    ~placement=?Option.map(placement, tooltipPlacementToJs),
    ~hasArrow?,
    ~showDelay?,
    ~hideDelay?,
    ~closeOnClick?,
    ~shouldWrapChildren?,
    ~onOpen?,
    ~onClose?,
    ~children,
  );
