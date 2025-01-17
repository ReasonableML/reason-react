# [ReasonReact](https://reasonml.github.io/reason-react/)

**Note on this repo**: This is a `Reason` syntax drop in replacement for [`@rescript/react@10.3`](https://github.com/rescript-lang/rescript-react/tree/v0.10.3). Let's you keep using `Reason` syntax for a while during the transition or forever. The tests are passing. You can see it used at https://github.com/idkjs/rescript-hacker-news/tree/reasonable.

### Installation

```
yarn add https://github.com/ReasonableML/reason-react.git
```

In your `bsconfig.json`:

```
{
  "reason": { "react-jsx": 3 },
  "bs-dependencies": ["@reasonable/react"]
}
```
**Note on Rescript**: ReasonReact now lives at [@rescript/react](https://github.com/rescript-lang/rescript-react), which maintains full compatiblity with the latest ReasonReact, excluding the long-deprecated old modules aliases (such as `ReactDOMRe`, in favor of `ReactDOM`) that we've taken the occasion to finally remove. Migration notes [here](https://rescript-lang.org/docs/react/latest/migrate-from-reason-react).

Tldr: you can just change your `package.json`'s `"reason-react"` dependency to `"@rescript/react"`. For transitive dependencies upgrade truoble, please voice your feedback on our [forum](http://forum.rescript-lang.org) and on the [migration issue](https://github.com/rescript-lang/rescript-react/issues/11). Thanks!

Future updates happens at `rescript-react` as a continuation of ReasonReact, by the same people.

Likewise, the old [reason-react docs](https://reasonml.github.io/reason-react/) are kept alive for historical purposes, with its continuation at [rescript-react docs](https://rescript-lang.org/docs/react/latest/introduction).

More context on the move [here](https://rescript-lang.org/blog/bucklescript-is-rebranding).
