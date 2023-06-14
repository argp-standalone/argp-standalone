# argp-standalone

This is a continuation of [Niels Möller](https://www.lysator.liu.se/~nisse/)'s
work on an argp library for systems which don't provide one themselves (most
non-GNU ones).

After noticing issues with executables built against argp-standalone 1.3, I
decided to fork it and continue the effort.

This repository is the result of making a timeline with releases 1.0 to 1.3
(obtained from [here](https://www.lysator.liu.se/~nisse/misc/)) of the original
argp-standalone, copying files from glibc 2.33 and fixing them up for
compatibility, and finally some general clean up. I commited many trivial
changes from the glibc version in order to make updating easier.

It is my expectation that this library will be useful to others. Feel free to
open an issue or make a PR.

# TODO

- Add i686-mingw-w64 build testing to prevent the issue fixed by
  [#17](https://github.com/argp-standalone/argp-standalone/pull/17) from
  returning.
- Port to more OSes and improve the quality of the ports. Currently, we can't
  get the program name on every system we run on.

## License

Since this repository is based on GNU C Library source code and changes from
Niels and collaborators, it is licensed primarily under the GNU Lesser General
Public License, version 2.1 or later (SPDX: `LGPL-2.1-or-later`).
