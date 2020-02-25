[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~fontSize: string=?,
    ~isTruncated: bool=?,
    ~color: string=?,
    ~as_: [@bs.string] [ | `i | `u | `abbr | `cite | `del | `em | `ins | `kbs | `mark | `s | `samp | `sub | `sup]=?,
    ~children: React.element
  ) =>
  React.element =
  "Text";
