
// Generated from grammar/Basic.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "BasicParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BasicParser.
 */
class  BasicVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BasicParser.
   */
    virtual std::any visitFile(BasicParser::FileContext *context) = 0;

    virtual std::any visitStat(BasicParser::StatContext *context) = 0;

    virtual std::any visitDef(BasicParser::DefContext *context) = 0;

    virtual std::any visitCall(BasicParser::CallContext *context) = 0;

    virtual std::any visitLet(BasicParser::LetContext *context) = 0;

    virtual std::any visitFor(BasicParser::ForContext *context) = 0;

    virtual std::any visitIf(BasicParser::IfContext *context) = 0;

    virtual std::any visitComparison(BasicParser::ComparisonContext *context) = 0;

    virtual std::any visitId(BasicParser::IdContext *context) = 0;

    virtual std::any visitEquality(BasicParser::EqualityContext *context) = 0;

    virtual std::any visitParentheses(BasicParser::ParenthesesContext *context) = 0;

    virtual std::any visitInt(BasicParser::IntContext *context) = 0;

    virtual std::any visitEnd(BasicParser::EndContext *context) = 0;

    virtual std::any visitLen(BasicParser::LenContext *context) = 0;

    virtual std::any visitGoto(BasicParser::GotoContext *context) = 0;

    virtual std::any visitListCommand(BasicParser::ListCommandContext *context) = 0;

    virtual std::any visitPrint(BasicParser::PrintContext *context) = 0;

    virtual std::any visitList(BasicParser::ListContext *context) = 0;


};

