
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

  virtual std::any visitLet(BasicParser::LetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor(BasicParser::ForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(BasicParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparison(BasicParser::ComparisonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(BasicParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquality(BasicParser::EqualityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParentheses(BasicParser::ParenthesesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(BasicParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnd(BasicParser::EndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLen(BasicParser::LenContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGoto(BasicParser::GotoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitListCommand(BasicParser::ListCommandContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrint(BasicParser::PrintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitList(BasicParser::ListContext *ctx) override {
    return visitChildren(ctx);
  }


};

