
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

  virtual void enterFor(BasicParser::ForContext *ctx) = 0;
  virtual void exitFor(BasicParser::ForContext *ctx) = 0;

  virtual void enterNext(BasicParser::NextContext *ctx) = 0;
  virtual void exitNext(BasicParser::NextContext *ctx) = 0;

  virtual void enterExpr(BasicParser::ExprContext *ctx) = 0;
  virtual void exitExpr(BasicParser::ExprContext *ctx) = 0;


};

