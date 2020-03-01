[@bs.deriving jsConverter]
type status = [ | `success | `danger | `warning | `info];

[@bs.deriving jsConverter]
type position = [
  | `top
  | [@bs.as "top-left"] `topLeft
  | [@bs.as "top-right"] `topRight
  | `bottom
  | [@bs.as "bottom-left"] `bottomLeft
  | [@bs.as "bottom-right"] `bottomRight
];

type renderProps = {
  onClose: unit => unit,
  id: string,
};

type duration =
  | Milliseconds(int)
  | NeverDismiss;

[@bs.deriving abstract]
type t = {
  title: string,
  [@bs.optional]
  isClosable: bool,
  [@bs.optional]
  onClose: unit => unit,
  [@bs.optional]
  description: string,
  [@bs.optional]
  status: string,
  duration: Js.Nullable.t(int),
  [@bs.optional]
  position: string,
  [@bs.optional]
  render: renderProps => React.element,
};

[@bs.module "@chakra-ui/core"]
external _useToast: (. unit) => (. t) => unit = "useToast";

let useToast = () => {
  let toast = _useToast(.);
  (
    ~title,
    ~isClosable=?,
    ~onClose=?,
    ~description=?,
    ~status=?,
    ~duration=?,
    ~position=?,
    ~render=?,
    (),
  ) => {
    let props =
      t(
        ~title,
        ~isClosable?,
        ~onClose?,
        ~description?,
        ~status=?Belt.Option.map(status, statusToJs),
        ~duration=
          switch (duration) {
          | None => Js.Nullable.undefined
          | Some(Milliseconds(ms)) => Js.Nullable.return(ms)
          | Some(NeverDismiss) => Js.Nullable.null
          },
        ~position=?Belt.Option.map(position, positionToJs),
        ~render?,
        (),
      );
    toast(. props);
  };
};
