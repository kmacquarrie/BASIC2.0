### Commodore 64 BASIC 2.0 Interpreter

This interpreter is implemented using C++, featuring a shell compatible with UNIX-like terminal enviroments.
The parser and visitor are generated using ANTLR4 C++ target https://github.com/antlr/antlr4 given the `Basic.g4` grammar file. The interpreter will walk the parse tree using the visitor for any file.
Single-line commands in BASIC on the Commodore 64 were also interpreted both in and out of file execution.

To generate `gen/grammar/`, which contains the visitor, run:
```
% antlr4 -Dlanguage=Cpp -visitor -o gen grammar/Basic.g4 
```