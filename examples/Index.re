module Example = {
  [@react.component]
  let make = () => {
    <div>
    {"Hello" |> React.string}
    </div>;
  };
};

ReactDOMRe.renderToElementWithId(<Example />, "root");
