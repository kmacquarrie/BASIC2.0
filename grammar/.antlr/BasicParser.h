
// Generated from /home/amazerrr/GitHub/BASIC2.0/grammar/Basic.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  BasicParser : public antlr4::Parser {
public:
  enum {
    WS = 1, REM = 2, DEF = 3, FN = 4, FOR = 5, TO = 6, STEP = 7, NEXT = 8, 
    ID = 9, INT = 10, LPAREN = 11, RPAREN = 12, EQUAL = 13
  };

  enum {
    RuleFile = 0, RuleStat = 1, RuleDef = 2, RuleCall = 3, RuleFor = 4, 
    RuleNext = 5, RuleExpr = 6
  };

  explicit BasicParser(antlr4::TokenStream *input);

  BasicParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BasicParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class FileContext;
  class StatContext;
  class DefContext;
  class CallContext;
  class ForContext;
  class NextContext;
  class ExprContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);

   
  };

  FileContext* file();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DefContext *def();
    CallContext *call();
    ForContext *for_();
    NextContext *next();

   
  };

  StatContext* stat();

  class  DefContext : public antlr4::ParserRuleContext {
  public:
    DefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEF();
    antlr4::tree::TerminalNode *FN();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *EQUAL();
    ExprContext *expr();

   
  };

  DefContext* def();

  class  CallContext : public antlr4::ParserRuleContext {
  public:
    CallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *LPAREN();
    ExprContext *expr();
    antlr4::tree::TerminalNode *RPAREN();

   
  };

  CallContext* call();

  class  ForContext : public antlr4::ParserRuleContext {
  public:
    ForContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *EQUAL();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    antlr4::tree::TerminalNode *TO();
    antlr4::tree::TerminalNode *STEP();

   
  };

  ForContext* for_();

  class  NextContext : public antlr4::ParserRuleContext {
  public:
    NextContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEXT();
    antlr4::tree::TerminalNode *ID();

   
  };

  NextContext* next();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *ID();

   
  };

  ExprContext* expr();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

