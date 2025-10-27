
// Generated from grammar/Basic.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "BasicParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BasicParser.
 */
class  BasicListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(BasicParser::FileContext *ctx) = 0;
  virtual void exitFile(BasicParser::FileContext *ctx) = 0;

  virtual void enterStat(BasicParser::StatContext *ctx) = 0;
  virtual void exitStat(BasicParser::StatContext *ctx) = 0;

  virtual void enterDef(BasicParser::DefContext *ctx) = 0;
  virtual void exitDef(BasicParser::DefContext *ctx) = 0;

  virtual void enterCall(BasicParser::CallContext *ctx) = 0;
  virtual void exitCall(BasicParser::CallContext *ctx) = 0;

  virtual void enterLet(BasicParser::LetContext *ctx) = 0;
  virtual void exitLet(BasicParser::LetContext *ctx) = 0;

  virtual void enterFor(BasicParser::ForContext *ctx) = 0;
  virtual void exitFor(BasicParser::ForContext *ctx) = 0;

  virtual void enterIf(BasicParser::IfContext *ctx) = 0;
  virtual void exitIf(BasicParser::IfContext *ctx) = 0;

  virtual void enterComparison(BasicParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(BasicParser::ComparisonContext *ctx) = 0;

  virtual void enterId(BasicParser::IdContext *ctx) = 0;
  virtual void exitId(BasicParser::IdContext *ctx) = 0;

  virtual void enterEquality(BasicParser::EqualityContext *ctx) = 0;
  virtual void exitEquality(BasicParser::EqualityContext *ctx) = 0;

  virtual void enterParentheses(BasicParser::ParenthesesContext *ctx) = 0;
  virtual void exitParentheses(BasicParser::ParenthesesContext *ctx) = 0;

  virtual void enterInt(BasicParser::IntContext *ctx) = 0;
  virtual void exitInt(BasicParser::IntContext *ctx) = 0;

  virtual void enterEnd(BasicParser::EndContext *ctx) = 0;
  virtual void exitEnd(BasicParser::EndContext *ctx) = 0;

  virtual void enterLen(BasicParser::LenContext *ctx) = 0;
  virtual void exitLen(BasicParser::LenContext *ctx) = 0;

  virtual void enterGoto(BasicParser::GotoContext *ctx) = 0;
  virtual void exitGoto(BasicParser::GotoContext *ctx) = 0;

  virtual void enterListCommand(BasicParser::ListCommandContext *ctx) = 0;
  virtual void exitListCommand(BasicParser::ListCommandContext *ctx) = 0;

  virtual void enterPrint(BasicParser::PrintContext *ctx) = 0;
  virtual void exitPrint(BasicParser::PrintContext *ctx) = 0;

  virtual void enterList(BasicParser::ListContext *ctx) = 0;
  virtual void exitList(BasicParser::ListContext *ctx) = 0;


};

