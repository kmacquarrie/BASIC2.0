
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

  virtual void enterLet(BasicParser::LetContext * /*ctx*/) override { }
  virtual void exitLet(BasicParser::LetContext * /*ctx*/) override { }

  virtual void enterFor(BasicParser::ForContext * /*ctx*/) override { }
  virtual void exitFor(BasicParser::ForContext * /*ctx*/) override { }

  virtual void enterIf(BasicParser::IfContext * /*ctx*/) override { }
  virtual void exitIf(BasicParser::IfContext * /*ctx*/) override { }

  virtual void enterComparison(BasicParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(BasicParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterId(BasicParser::IdContext * /*ctx*/) override { }
  virtual void exitId(BasicParser::IdContext * /*ctx*/) override { }

  virtual void enterEquality(BasicParser::EqualityContext * /*ctx*/) override { }
  virtual void exitEquality(BasicParser::EqualityContext * /*ctx*/) override { }

  virtual void enterParentheses(BasicParser::ParenthesesContext * /*ctx*/) override { }
  virtual void exitParentheses(BasicParser::ParenthesesContext * /*ctx*/) override { }

  virtual void enterInt(BasicParser::IntContext * /*ctx*/) override { }
  virtual void exitInt(BasicParser::IntContext * /*ctx*/) override { }

  virtual void enterEnd(BasicParser::EndContext * /*ctx*/) override { }
  virtual void exitEnd(BasicParser::EndContext * /*ctx*/) override { }

  virtual void enterLen(BasicParser::LenContext * /*ctx*/) override { }
  virtual void exitLen(BasicParser::LenContext * /*ctx*/) override { }

  virtual void enterGoto(BasicParser::GotoContext * /*ctx*/) override { }
  virtual void exitGoto(BasicParser::GotoContext * /*ctx*/) override { }

  virtual void enterListCommand(BasicParser::ListCommandContext * /*ctx*/) override { }
  virtual void exitListCommand(BasicParser::ListCommandContext * /*ctx*/) override { }

  virtual void enterPrint(BasicParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(BasicParser::PrintContext * /*ctx*/) override { }

  virtual void enterList(BasicParser::ListContext * /*ctx*/) override { }
  virtual void exitList(BasicParser::ListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

