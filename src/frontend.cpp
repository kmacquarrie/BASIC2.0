#include "frontend.h"

std::any Frontend::visitLet(BasicParser::LetContext *ctx) {
    // LET <Variable> = <Argument>
    std::string name = ctx->ID()->getText();

    // If name ends with '$' -> string type
    // Else; default is float

    std::any expr = visit(ctx->expr());

    try {
        if (!name.empty() && name.back() == "$") {
            std::string var = expr;
        } else {
            float var = expr;
        }
    } catch (int error_code) {
        // Error will occur if assignment of wrong type to wrong name occurs (i.e. attempt to assign number to name ending in '$'; the string identifier)
        std::cerr << "?SYNTAX ERROR" << std::endl;
        this.switch_mode(); // Switch back to direct mode
        throw StopWalkException(); // Cancel tree walk / interpretation
    }
}

std::any Frontend::visitFor(BasicParser::ForContext *ctx) {
    // FOR <Counter-Variable>=<startvalue> TO <endvalue> [ STEP <stepsize> ]
    try {
        visit(ctx->ID()); // Add to symbol table (if needed)
        float start_value = visit(ctx->expr(0));
        float end_value = visit(ctx->expr(1));
        float step_size = 1.f;
        if (ctx->expr(2)) {step_size = visit(ctx->expr(2));}

        // Run FOR loop
        for (float i = start_value; i < end_value; i = i + step_size) {
            // Visit all statements inside the loop
            for (auto *stat : ctx->stat()) {
                visit(s);
            }

            // TODO: update value stored in symbol table
        }
    }
}