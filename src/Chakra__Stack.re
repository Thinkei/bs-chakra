[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~isInline: bool=?,
    ~isReversed: bool=?,
    ~direction: [@bs.string] [
                  | `row
                  | `column
                  | [@bs.as "row-reverse"] `rowReverse
                  | [@bs.as "column-reverse"] `columnReverse
                ]
                  =?,
    ~spacing: int=?,
    ~align: [@bs.string] [
              | `stretch
              | `center
              | `start
              | [@bs.as "end"] `end_
            ]
              =?,
    ~justify: [@bs.string] [
                | `start
                | `center
                | [@bs.as "space-between"] `spaceBetween
                | [@bs.as "space-around"] `spaceAround
                | [@bs.as "space-evenly"] `spaceEvenly
              ]
                =?,
    ~shouldWrapChildren: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Stack";
