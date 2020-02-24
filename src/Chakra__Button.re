[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~ariaLabel: string=?,
    ~variantColor: string=?,
    ~variant: [@bs.string] [ | `outline | `ghost | `unstyled | `link | `solid]
                =?,
    ~isDisabled: bool=?,
    ~isLoading: bool=?,
    ~loadingText: string=?,
    ~size: [@bs.string] [ | `sm | `md | `ld]=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~children: React.element
  ) =>
  React.element =
  "Button";
