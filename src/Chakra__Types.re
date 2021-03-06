[@bs.deriving jsConverter]
type color = [
  | `black
  | `white
  | `transparent
  | `current
  | [@bs.as "whiteAlpha.50"] `whiteAlpha50
  | [@bs.as "whiteAlpha.100"] `whiteAlpha100
  | [@bs.as "whiteAlpha.200"] `whiteAlpha200
  | [@bs.as "whiteAlpha.300"] `whiteAlpha300
  | [@bs.as "whiteAlpha.400"] `whiteAlpha400
  | [@bs.as "whiteAlpha.500"] `whiteAlpha500
  | [@bs.as "whiteAlpha.600"] `whiteAlpha600
  | [@bs.as "whiteAlpha.700"] `whiteAlpha700
  | [@bs.as "whiteAlpha.800"] `whiteAlpha800
  | [@bs.as "whiteAlpha.900"] `whiteAlpha900
  | [@bs.as "blackAlpha.50"] `blackAlpha50
  | [@bs.as "blackAlpha.100"] `blackAlpha100
  | [@bs.as "blackAlpha.200"] `blackAlpha200
  | [@bs.as "blackAlpha.300"] `blackAlpha300
  | [@bs.as "blackAlpha.400"] `blackAlpha400
  | [@bs.as "blackAlpha.500"] `blackAlpha500
  | [@bs.as "blackAlpha.600"] `blackAlpha600
  | [@bs.as "blackAlpha.700"] `blackAlpha700
  | [@bs.as "blackAlpha.800"] `blackAlpha800
  | [@bs.as "blackAlpha.900"] `blackAlpha900
  | [@bs.as "gray.50"] `gray50
  | [@bs.as "gray.100"] `gray100
  | [@bs.as "gray.200"] `gray200
  | [@bs.as "gray.300"] `gray300
  | [@bs.as "gray.400"] `gray400
  | [@bs.as "gray.500"] `gray500
  | [@bs.as "gray.600"] `gray600
  | [@bs.as "gray.700"] `gray700
  | [@bs.as "gray.800"] `gray800
  | [@bs.as "gray.900"] `gray900
  | [@bs.as "green.50"] `green50
  | [@bs.as "green.100"] `green100
  | [@bs.as "green.200"] `green200
  | [@bs.as "green.300"] `green300
  | [@bs.as "green.400"] `green400
  | [@bs.as "green.500"] `green500
  | [@bs.as "green.600"] `green600
  | [@bs.as "green.700"] `green700
  | [@bs.as "green.800"] `green800
  | [@bs.as "green.900"] `green900
  | [@bs.as "teal.50"] `teal50
  | [@bs.as "teal.100"] `teal100
  | [@bs.as "teal.200"] `teal200
  | [@bs.as "teal.300"] `teal300
  | [@bs.as "teal.400"] `teal400
  | [@bs.as "teal.500"] `teal500
  | [@bs.as "teal.600"] `teal600
  | [@bs.as "teal.700"] `teal700
  | [@bs.as "teal.800"] `teal800
  | [@bs.as "teal.900"] `teal900
  | [@bs.as "pink.50"] `pink50
  | [@bs.as "pink.100"] `pink100
  | [@bs.as "pink.200"] `pink200
  | [@bs.as "pink.300"] `pink300
  | [@bs.as "pink.400"] `pink400
  | [@bs.as "pink.500"] `pink500
  | [@bs.as "pink.600"] `pink600
  | [@bs.as "pink.700"] `pink700
  | [@bs.as "pink.800"] `pink800
  | [@bs.as "pink.900"] `pink900
  | [@bs.as "blue.50"] `blue50
  | [@bs.as "blue.100"] `blue100
  | [@bs.as "blue.200"] `blue200
  | [@bs.as "blue.300"] `blue300
  | [@bs.as "blue.400"] `blue400
  | [@bs.as "blue.500"] `blue500
  | [@bs.as "blue.600"] `blue600
  | [@bs.as "blue.700"] `blue700
  | [@bs.as "blue.800"] `blue800
  | [@bs.as "blue.900"] `blue900
  | [@bs.as "red.50"] `red50
  | [@bs.as "red.100"] `red100
  | [@bs.as "red.200"] `red200
  | [@bs.as "red.300"] `red300
  | [@bs.as "red.400"] `red400
  | [@bs.as "red.500"] `red500
  | [@bs.as "red.600"] `red600
  | [@bs.as "red.700"] `red700
  | [@bs.as "red.800"] `red800
  | [@bs.as "red.900"] `red900
  | [@bs.as "purple.50"] `purple50
  | [@bs.as "purple.100"] `purple100
  | [@bs.as "purple.200"] `purple200
  | [@bs.as "purple.300"] `purple300
  | [@bs.as "purple.400"] `purple400
  | [@bs.as "purple.500"] `purple500
  | [@bs.as "purple.600"] `purple600
  | [@bs.as "purple.700"] `purple700
  | [@bs.as "purple.800"] `purple800
  | [@bs.as "purple.900"] `purple900
  | [@bs.as "cyan.50"] `cyan50
  | [@bs.as "cyan.100"] `cyan100
  | [@bs.as "cyan.200"] `cyan200
  | [@bs.as "cyan.300"] `cyan300
  | [@bs.as "cyan.400"] `cyan400
  | [@bs.as "cyan.500"] `cyan500
  | [@bs.as "cyan.600"] `cyan600
  | [@bs.as "cyan.700"] `cyan700
  | [@bs.as "cyan.800"] `cyan800
  | [@bs.as "cyan.900"] `cyan900
  | [@bs.as "yellow.50"] `yellow50
  | [@bs.as "yellow.100"] `yellow100
  | [@bs.as "yellow.200"] `yellow200
  | [@bs.as "yellow.300"] `yellow300
  | [@bs.as "yellow.400"] `yellow400
  | [@bs.as "yellow.500"] `yellow500
  | [@bs.as "yellow.600"] `yellow600
  | [@bs.as "yellow.700"] `yellow700
  | [@bs.as "yellow.800"] `yellow800
  | [@bs.as "yellow.900"] `yellow900
  | [@bs.as "orange.50"] `orange50
  | [@bs.as "orange.100"] `orange100
  | [@bs.as "orange.200"] `orange200
  | [@bs.as "orange.300"] `orange300
  | [@bs.as "orange.400"] `orange400
  | [@bs.as "orange.500"] `orange500
  | [@bs.as "orange.600"] `orange600
  | [@bs.as "orange.700"] `orange700
  | [@bs.as "orange.800"] `orange800
  | [@bs.as "orange.900"] `orange900
];

[@bs.deriving jsConverter]
type colorVariant = [
  | `black
  | `transparent
  | `white
  | `gray
  | `green
  | `teal
  | `pink
  | `blue
  | `red
  | `purple
  | `cyan
  | `yellow
  | `orange
];

[@bs.deriving jsConverter]
type size = [ | `sm | `md | `xl | `lg];

[@bs.deriving jsConverter]
type buttonVariant = [ | `outline | `ghost | `unstyled | `link | `solid];

[@bs.deriving jsConverter]
type iconRole = [ | `presentation | `img];

[@bs.deriving jsConverter]
type icon = [
  | `copy
  | `search
  | `moon
  | `sun
  | `add
  | `settings
  | `settings
  | `lock
  | `unlock
  | `view
  | `download
  | `delete
  | `repeat
  | `edit
  | `link
  | `chat
  | `calendar
  | `time
  | `attachment
  | `star
  | `email
  | `phone
  | `spinner
  | `close
  | `bell
  | `info
  | `question
  | `warning
  | `check
  | `minus
  | [@bs.as "drag-handle"] `dragHandle
  | [@bs.as "warning-2"] `warning2
  | [@bs.as "info-outline"] `infoOutline
  | [@bs.as "arrow-up-down"] `arrowUpDown
  | [@bs.as "question-outline"] `questionOutline
  | [@bs.as "small-close"] `smallClose
  | [@bs.as "not-allowed"] `notAllowed
  | [@bs.as "triangle-down"] `triangleDown
  | [@bs.as "triangle-up"] `triangleUp
  | [@bs.as "up-down"] `upDown
  | [@bs.as "at-sign"] `atSign
  | [@bs.as "plus-square"] `plusSquare
  | [@bs.as "chevron-right"] `chevronRight
  | [@bs.as "external-link"] `externalLink
  | [@bs.as "chevron-left"] `chevronLeft
  | [@bs.as "chevron-down"] `chevronDown
  | [@bs.as "chevron-up"] `chevronUp
  | [@bs.as "arrow-up"] `arrowUp
  | [@bs.as "arrow-left"] `arrowLeft
  | [@bs.as "arrow-right"] `arrowRight
  | [@bs.as "arrow-down"] `arrowDown
  | [@bs.as "arrow-back"] `arrowBack
  | [@bs.as "arrow-forward"] `arrowForward
  | [@bs.as "search-2"] `search2
  | [@bs.as "repeat-clock"] `repeatClock
  | [@bs.as "small-add"] `smallAdd
  | [@bs.as "check-circle"] `checkCircle
  | [@bs.as "view-off"] `viewOff
];

[@bs.deriving jsConverter]
type status = [ | `error | `success | `warning | `info];

[@bs.deriving jsConverter]
type alertStyle = [
  | `subtle
  | `solid
  | [@bs.as "left-accent"] `leftAccent
  | [@bs.as "top-accent"] `topAccent
];

[@bs.deriving jsConverter]
type flexDirection = [
  | `row
  | [@bs.as "row-reverse"] `rowReverse
  | `column
  | [@bs.as "column-reverse"] `columnReverse
];

[@bs.deriving jsConverter]
type flexWrap = [
  | `wrap
  | `nowrap
  | `unset
  | [@bs.as "wrap-reverse"] `wrapReverse
];

[@bs.deriving jsConverter]
type flexAlignment = [
  | [@bs.as "flex-start"] `flexStart
  | [@bs.as "flex-end"] `flexEnd
  | [@bs.as "space-around"] `spaceAround
  | [@bs.as "space-between"] `spaceBetween
  | `center
];

[@bs.deriving jsConverter]
type justifyContent = [
  | `start
  | `center
  | [@bs.as "space-between"] `spaceBetween
  | [@bs.as "flex-end"] `flexEnd
  | [@bs.as "space-around"] `spaceAround
  | [@bs.as "space-evenly"] `spaceEvenly
];

[@bs.deriving jsConverter]
type overflow = [
  | `overflow
  | `visible
  | `scroll
  | `auto
  | `initial
  | `hidden
  | `unset
];

[@bs.deriving jsConverter]
type shadow = [
  | `sm
  | `md
  | `lg
  | `xl
  | [@bs.as "2xl"] `xxl
  | `outline
  | `inner
  | `none
];

[@bs.deriving jsConverter]
type lineHeight = [ | `normal | `base | `shorter | `short | `tall | `taller];

[@bs.deriving jsConverter]
type colorHue = [
  | [@bs.as "50"] `_50
  | [@bs.as "100"] `_100
  | [@bs.as "200"] `_200
  | [@bs.as "300"] `_300
  | [@bs.as "400"] `_400
  | [@bs.as "500"] `_500
  | [@bs.as "600"] `_600
  | [@bs.as "700"] `_700
  | [@bs.as "800"] `_800
  | [@bs.as "900"] `_900
];

[@bs.deriving jsConverter]
type radii = [ | `none | `sm | `md | `lg | `full];

[@bs.deriving jsConverter]
type border = [
  | `none
  | [@bs.as "1px"] `_1px
  | [@bs.as "2px"] `_2px
  | [@bs.as "4px"] `_4px
];

[@bs.deriving jsConverter]
type letterSpacing = [
  | `tighter
  | `tight
  | `normal
  | `wide
  | `wider
  | `widest
];

[@bs.deriving jsConverter]
type inputVariant = [ | `outline | `unstyled | `flushed | `filled];

[@bs.deriving jsConverter]
type inputType = [ | `text | `password | `email];

[@bs.deriving jsConverter]
type scrollBehavior = [ | `inside | `outside];

[@bs.deriving jsConverter]
type placement = [ | `left | `right | `top | `bottom];

[@bs.deriving jsConverter]
type tabVariant = [
  | `line
  | `enclosed
  | [@bs.as "enclosed-colored"] `enclosedColored
  | [@bs.as "soft-rounded"] `softRounded
  | [@bs.as "solid-rounded"] `solidRounded
  | `unstyled
];

[@bs.deriving jsConverter]
type orientation = [ | `horizontal | `vertical];

[@bs.deriving jsConverter]
type tooltipPlacement = [
  | `left
  | `right
  | `top
  | `bottom
  | [@bs.as "left-end"] `leftEnd
  | [@bs.as "right-end"] `rightEnd
  | [@bs.as "auto-start"] `autoStart
  | [@bs.as "auto-end"] `autoEnd
];

[@bs.deriving jsConverter]
type buttonType = [ | `submit | `reset | `button];
