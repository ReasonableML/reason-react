

include ReactDOM.Props;

[@bs.variadic] [@bs.module "react"]
external createDOMElementVariadic:
  (string, ~props: domProps=?, array(React.element)) => React.element =
  "createElement";

external objToDOMProps: Js.t({..}) => props = "%identity";

[@deprecated "Please use ReactDOMRe.props instead"]
type reactDOMProps = props;

[@bs.variadic] [@bs.val] [@bs.module "react"]
external createElement:
  (string, ~props: props=?, array(React.element)) => React.element =
  "createElement";
