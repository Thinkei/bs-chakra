type status = [ | `success | `danger | `warning | `info];

type position = [
  | `top
  | `topLeft
  | `topRight
  | `bottom
  | `bottomLeft
  | `bottomRight
];

type renderProps = {
  onClose: unit => unit,
  id: string,
};

[@bs.deriving abstract]
type t = {
  title: string,
  [@bs.optional] isClosable: bool,
  [@bs.optional] onClose: unit => unit,
  [@bs.optional] description: string,
  [@bs.optional] status,
  [@bs.optional] duration: int,
  [@bs.optional] position,
  [@bs.optional] render: renderProps => React.element,
};

[@bs.module "@chakra-ui/core"]
external useToast: (. unit) => (. t) => unit = "useToast";

let makeToastProps = t;
