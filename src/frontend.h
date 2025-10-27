#pragma once

#include <string>
#include <iostream>

#include "BasicBaseVisitor.h"

struct StopWalkException : std::exception {};

class Frontend : BasicBaseVisitor {
public:
    Frontend() {}
    ~Frontend() {}

    const bool is_direct_mode() const {
        return direct_mode;
    }

    void switch_mode() {
        if (this.is_direct_mode()) {
            direct_mode = bool(0);
        } else {
            direct_mode = bool(1);
            std::cout << "READY" << std::endl;
        }
    }

    // Statements
    //std::any visitDef(BasicParser::DefContext *ctx) override;
    //std::any visitCall(BasicParser::CallContext *ctx) override;
    std::any visitLet(BasicParser::LetContext *ctx) override;
    std::any visitFor(BasicParser::ForContext *ctx) override;
    std::any visitIf(BasicParser::IfContext *ctx) override;

    // Expressions
    std::any visitParentheses(BasicParser::ParenthesesContext *ctx) override
    std::any visitComparison(BasicParser::ComparisonContext *ctx) override;
    std::any visitEquality(BasicParser::EqualityContext *ctx) override;
    std::any visitInt(BasicParser::IntContext *ctx) override;
    std::any visitId(BasicParser::IdContext *ctx) override;

    // Commands
    std::any visitEnd(BasicParser::EndContext *ctx) override;
    std::any visitLen(BasicParser::LenContext *ctx) override;
    std::any visitListCommand(BasicParser::ListCommandContext *ctx) override;
    std::any visitGoto(BasicParser::GotoContext *ctx) override;
    std::any visitPrint(BasicParser::PrintContext *ctx) override;


private:
    bool direct_mode = 0; // Bit set = direct mode | Direct mode is line-by-line
}