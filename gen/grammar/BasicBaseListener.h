
// Generated from grammar/Basic.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "BasicListener.h"


/**
 * This class provides an empty implementation of BasicListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BasicBaseListener : public BasicListener {
public:

  virtual void enterFile(BasicParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(BasicParser::FileContext * /*ctx*/) override { }

  virtual void enterStat(BasicParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(BasicParser::StatContext * /*ctx*/) override { }

  virtual void enterDef(BasicParser::DefContext * /*ctx*/) override { }
  virtual void exitDef(BasicParser::DefContext * /*ctx*/) override { }

  virtual void enterCall(BasicParser::CallContext * /*ctx*/) override { }
  virtual void exitCall(BasicParser::CallContext * /*ctx*/) override { }

  virtual void enterFor(BasicParser::ForContext * /*ctx*/) override { }
  virtual void exitFor(BasicParser::ForContext * /*ctx*/) override { }

  virtual void enterNext(BasicParser::NextContext * /*ctx*/) override { }
  virtual void exitNext(BasicParser::NextContext * /*ctx*/) override { }

  virtual void enterExpr(BasicParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(BasicParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

