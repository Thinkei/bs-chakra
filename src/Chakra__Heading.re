[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~as_: [@bs.string] [ | `h1 | `h2 | `h3 | `h4 | `h5 | `h6]=?,
    ~size: [@bs.string] [ | [@bs.as "2xl"] `xxl | `xl | `lg | `md | `sm | `xs]
             =?,
    ~fontSize: string=?,
    ~isTruncated: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Heading";
