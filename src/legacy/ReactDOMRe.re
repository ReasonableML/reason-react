include ReactDOM.Props;

[@bs.variadic] [@bs.module "react"]
external createDOMElementVariadic:
  (string, ~props: domProps=?, array(React.element)) => React.element =
  "createElement";

[@bs.variadic] [@bs.module "react"]
external createElement:
  (string, ~props: props=?, array(React.element)) => React.element =
  "createElement";
