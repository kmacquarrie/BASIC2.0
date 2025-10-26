
// Generated from grammar/Basic.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  BasicLexer : public antlr4::Lexer {
public:
  enum {
    WS = 1, REM = 2, DEF = 3, FN = 4, FOR = 5, TO = 6, STEP = 7, NEXT = 8, 
    ID = 9, INT = 10, LPAREN = 11, RPAREN = 12, EQUAL = 13
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

