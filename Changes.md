
# Changelog

## main

- main branch is now `main`. Skip version up to `v.0.10.3` to match `Rescript@0.10.3`
- change namespace to `@reasonable/react`

## v0.10.3

- Temporarily remove peerDependency for bs-platform, so we can gracefully do the transition to our new `rescript` package
- Added `.js` extension to externals to comply to ES6 module conventions
- Bump peerDependencies versions

This is the initial version of `rescript-react`, a port of `reason-react@0.9` that will be almost equivalent, except for a few long needed minor breaking changes.

It is intended to be used with our newest ReScript React-JSX transformations (> JSX v3) and React v16.8.

**Breaking:**

- **IMPORTANT:** Currently, old third-party packages that are still dependent on `reason-react` will not mix with other `@rescript/react` based code due to a build system problem. Which means that every third-party dependency needs to be upgraded to `@rescript/react` first to make it compatible. See [this forum discussion](https://forum.rescript-lang.org/t/discussion-reason-react-rescript-react-migration-path/1086) for more details.

- Removed legacy modules ("record api"):
  - `ReasonReactCompat`
  - `ReactDOMServerRe`
  - `ReactEventRe`
  - `ReasonReactOptimizedCreateClass`

- Removed all functionality from `ReasonReact` and `ReactDOMRe` that is not needed for react-jsx v3 compatibility
- Moved `React.SuspenseList` to `React.Experimental.SuspenseList` to be more consistent with our Experimental features

**Misc:**

- Started `Changes.md` (aligning with other core projects, like genType)
- For history on previous evolution of the code, check out the original [HISTORY.md](HISTORY.md)
