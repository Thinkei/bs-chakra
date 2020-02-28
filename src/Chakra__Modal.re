open Belt;
open Chakra__Types;

[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
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
  "Modal";

let makeProps =
    (
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
