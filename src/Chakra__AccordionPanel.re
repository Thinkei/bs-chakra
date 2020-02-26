[@bs.module "@chakra-ui/core"] [@react.component]
external make:
  (
    ~isOpen: bool=?,
    ~animateOpacity: bool=?,
    ~duration: int=?,
    ~startingHeight: int=?,
    ~endingHeight: int=?,
    ~onAnimationEnd: int => unit=?,
    ~onAnimationStart: int => unit=?
  ) =>
  React.element =
  "AccordionPanel";
