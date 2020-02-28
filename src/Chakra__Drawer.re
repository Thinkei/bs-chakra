open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~isFullHeight: bool=?,
    ~placement: string=?,
    ~isOpen: bool=?,
    ~onClose: ReactEvent.Mouse.t => unit=?,
    ~isCentered: bool=?,
    ~initialFocusRef: ReasonReact.reactRef=?,
    ~finalFocusRef: ReasonReact.reactRef=?,
    ~blockScrollOnMount: bool=?,
    ~preserveScrollBarGap: bool=?,
    ~useInert: bool=?,
    ~size: string=?,
    ~scrollBehavior: string=?,
    ~closeOnOverlayClick: bool=?,
    ~returnFocusOnClose: bool=?,
    ~closeOnEsc: bool=?,
    ~addAriaLabels: bool=?,
    ~id: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Drawer";

let makeProps =
    (
      ~isFullHeight=?,
      ~placement=?,
      ~isOpen=?,
      ~onClose=?,
      ~isCentered=?,
      ~initialFocusRef=?,
      ~finalFocusRef=?,
      ~blockScrollOnMount=?,
      ~preserveScrollBarGap=?,
      ~useInert=?,
      ~size=?,
      ~scrollBehavior=?,
      ~closeOnOverlayClick=?,
      ~returnFocusOnClose=?,
      ~closeOnEsc=?,
      ~addAriaLabels=?,
      ~id=?,
      ~children,
    ) =>
  makeProps(
    ~isFullHeight?,
    ~placement=?Option.map(placement, placementToJs),
    ~isOpen?,
    ~onClose?,
    ~isCentered?,
    ~initialFocusRef?,
    ~finalFocusRef?,
    ~blockScrollOnMount?,
    ~preserveScrollBarGap?,
    ~useInert?,
    ~size=?Option.map(size, sizeToJs),
    ~scrollBehavior?,
    ~closeOnOverlayClick?,
    ~returnFocusOnClose?,
    ~closeOnEsc?,
    ~addAriaLabels?,
    ~id?,
    ~children,
  );
