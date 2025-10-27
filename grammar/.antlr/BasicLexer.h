
// Generated from /home/amazerrr/GitHub/BASIC2.0/grammar/Basic.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  BasicLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, REM = 2, LET = 3, LIST = 4, DEF = 5, FN = 6, FOR = 7, TO = 8, 
    STEP = 9, NEXT = 10, GOTO = 11, IF = 12, THEN = 13, END = 14, LEN = 15, 
    PRINT = 16, ID = 17, INT = 18, STRING = 19, LPAREN = 20, RPAREN = 21, 
    EQUAL = 22, UNEQUAL = 23, LT = 24, GT = 25, LEQ = 26, GEQ = 27, DASH = 28, 
    DOLLAR = 29, SEMI = 30, COMMA = 31
  };

  explicit BasicLexer(antlr4::CharStream *input);

  ~BasicLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

