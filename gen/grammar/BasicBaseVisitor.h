
// Generated from grammar/Basic.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "BasicVisitor.h"


/**
 * This class provides an empty implementation of BasicVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  BasicBaseVisitor : public BasicVisitor {
public:

  virtual std::any visitFile(BasicParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(BasicParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDef(BasicParser::DefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCall(BasicParser::CallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor(BasicParser::ForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNext(BasicParser::NextContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(BasicParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

