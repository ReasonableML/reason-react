include ReactDOM.Props;

[@variadic] [@module "react"]
external createDOMElementVariadic:
  (string, ~props: domProps=?, array(React.element)) => React.element =
  "createElement";

[@variadic] [@module "react"]
external createElement:
  (string, ~props: props=?, array(React.element)) => React.element =
  "createElement";
