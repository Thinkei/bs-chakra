open Chakra;
module Example = {
  [@react.component]
  let make = () => {
    <ThemeProvider>
      <CSSReset />
      <ToastExample />
      <CheckboxExample />
      <RadioExample />
    </ThemeProvider>;
  };
};

ReactDOMRe.renderToElementWithId(<Example />, "root");
