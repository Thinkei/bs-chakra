open Chakra;
module Example = {
  [@react.component]
  let make = () => {
    <ThemeProvider> <CSSReset /> <ToastExample /> </ThemeProvider>;
  };
};

ReactDOMRe.renderToElementWithId(<Example />, "root");
