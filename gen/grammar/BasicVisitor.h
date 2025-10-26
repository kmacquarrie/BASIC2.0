
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

    virtual std::any visitFor(BasicParser::ForContext *context) = 0;

    virtual std::any visitNext(BasicParser::NextContext *context) = 0;

    virtual std::any visitExpr(BasicParser::ExprContext *context) = 0;


};

