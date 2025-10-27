
// Generated from grammar/Basic.g4 by ANTLR 4.13.0


#include "BasicListener.h"
#include "BasicVisitor.h"

#include "BasicParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct BasicParserStaticData final {
  BasicParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BasicParserStaticData(const BasicParserStaticData&) = delete;
  BasicParserStaticData(BasicParserStaticData&&) = delete;
  BasicParserStaticData& operator=(const BasicParserStaticData&) = delete;
  BasicParserStaticData& operator=(BasicParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag basicParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
BasicParserStaticData *basicParserStaticData = nullptr;

void basicParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (basicParserStaticData != nullptr) {
    return;
  }
#else
  assert(basicParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BasicParserStaticData>(
    std::vector<std::string>{
      "file", "stat", "def", "call", "let", "for", "if", "expr", "command", 
      "list"
    },
    std::vector<std::string>{
      "", "", "", "'LET'", "'LIST'", "'DEF'", "'FN'", "'FOR'", "'TO'", "'STEP'", 
      "'NEXT'", "'GOTO'", "'IF'", "'THEN'", "'END'", "'LEN'", "'PRINT'", 
      "", "", "", "'('", "')'", "'='", "'<>'", "'<'", "'>'", "'<='", "'>='", 
      "'-'", "'$'", "';'", "','"
    },
    std::vector<std::string>{
      "", "WS", "REM", "LET", "LIST", "DEF", "FN", "FOR", "TO", "STEP", 
      "NEXT", "GOTO", "IF", "THEN", "END", "LEN", "PRINT", "ID", "INT", 
      "STRING", "LPAREN", "RPAREN", "EQUAL", "UNEQUAL", "LT", "GT", "LEQ", 
      "GEQ", "DASH", "DOLLAR", "SEMI", "COMMA"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,31,147,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,5,0,22,8,0,10,0,12,0,25,9,0,1,0,1,0,1,1,1,1,
  	1,1,1,1,1,1,1,1,3,1,35,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	3,5,65,8,5,1,5,5,5,68,8,5,10,5,12,5,71,9,5,1,5,1,5,1,5,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,91,8,6,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,3,7,100,8,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,108,8,7,10,7,
  	12,7,111,9,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,125,
  	8,8,10,8,12,8,128,9,8,3,8,130,8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,3,9,145,8,9,1,9,0,1,14,10,0,2,4,6,8,10,12,14,16,18,0,
  	3,1,0,22,23,1,0,24,27,1,0,30,31,159,0,23,1,0,0,0,2,34,1,0,0,0,4,36,1,
  	0,0,0,6,45,1,0,0,0,8,51,1,0,0,0,10,56,1,0,0,0,12,90,1,0,0,0,14,99,1,0,
  	0,0,16,129,1,0,0,0,18,144,1,0,0,0,20,22,3,2,1,0,21,20,1,0,0,0,22,25,1,
  	0,0,0,23,21,1,0,0,0,23,24,1,0,0,0,24,26,1,0,0,0,25,23,1,0,0,0,26,27,5,
  	0,0,1,27,1,1,0,0,0,28,35,3,4,2,0,29,35,3,6,3,0,30,35,3,10,5,0,31,35,3,
  	12,6,0,32,35,3,8,4,0,33,35,3,16,8,0,34,28,1,0,0,0,34,29,1,0,0,0,34,30,
  	1,0,0,0,34,31,1,0,0,0,34,32,1,0,0,0,34,33,1,0,0,0,35,3,1,0,0,0,36,37,
  	5,5,0,0,37,38,5,6,0,0,38,39,5,17,0,0,39,40,5,20,0,0,40,41,5,17,0,0,41,
  	42,5,21,0,0,42,43,5,22,0,0,43,44,3,14,7,0,44,5,1,0,0,0,45,46,5,6,0,0,
  	46,47,5,17,0,0,47,48,5,20,0,0,48,49,3,14,7,0,49,50,5,21,0,0,50,7,1,0,
  	0,0,51,52,5,3,0,0,52,53,5,17,0,0,53,54,5,22,0,0,54,55,3,14,7,0,55,9,1,
  	0,0,0,56,57,5,7,0,0,57,58,5,17,0,0,58,59,5,22,0,0,59,60,3,14,7,0,60,61,
  	5,8,0,0,61,64,3,14,7,0,62,63,5,9,0,0,63,65,3,14,7,0,64,62,1,0,0,0,64,
  	65,1,0,0,0,65,69,1,0,0,0,66,68,3,2,1,0,67,66,1,0,0,0,68,71,1,0,0,0,69,
  	67,1,0,0,0,69,70,1,0,0,0,70,72,1,0,0,0,71,69,1,0,0,0,72,73,5,10,0,0,73,
  	74,5,17,0,0,74,11,1,0,0,0,75,76,5,12,0,0,76,77,3,14,7,0,77,78,5,13,0,
  	0,78,79,5,18,0,0,79,91,1,0,0,0,80,81,5,12,0,0,81,82,3,14,7,0,82,83,5,
  	11,0,0,83,84,5,18,0,0,84,91,1,0,0,0,85,86,5,12,0,0,86,87,3,14,7,0,87,
  	88,5,13,0,0,88,89,3,16,8,0,89,91,1,0,0,0,90,75,1,0,0,0,90,80,1,0,0,0,
  	90,85,1,0,0,0,91,13,1,0,0,0,92,93,6,7,-1,0,93,94,5,20,0,0,94,95,3,14,
  	7,0,95,96,5,21,0,0,96,100,1,0,0,0,97,100,5,17,0,0,98,100,5,18,0,0,99,
  	92,1,0,0,0,99,97,1,0,0,0,99,98,1,0,0,0,100,109,1,0,0,0,101,102,10,4,0,
  	0,102,103,7,0,0,0,103,108,3,14,7,5,104,105,10,3,0,0,105,106,7,1,0,0,106,
  	108,3,14,7,4,107,101,1,0,0,0,107,104,1,0,0,0,108,111,1,0,0,0,109,107,
  	1,0,0,0,109,110,1,0,0,0,110,15,1,0,0,0,111,109,1,0,0,0,112,130,5,14,0,
  	0,113,114,5,15,0,0,114,115,5,20,0,0,115,116,5,19,0,0,116,130,5,21,0,0,
  	117,118,5,11,0,0,118,130,5,18,0,0,119,130,3,18,9,0,120,121,5,16,0,0,121,
  	126,3,14,7,0,122,123,7,2,0,0,123,125,3,14,7,0,124,122,1,0,0,0,125,128,
  	1,0,0,0,126,124,1,0,0,0,126,127,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,
  	0,129,112,1,0,0,0,129,113,1,0,0,0,129,117,1,0,0,0,129,119,1,0,0,0,129,
  	120,1,0,0,0,130,17,1,0,0,0,131,145,5,4,0,0,132,133,5,4,0,0,133,145,5,
  	18,0,0,134,135,5,4,0,0,135,136,5,18,0,0,136,145,5,28,0,0,137,138,5,4,
  	0,0,138,139,5,28,0,0,139,145,5,18,0,0,140,141,5,4,0,0,141,142,5,18,0,
  	0,142,143,5,28,0,0,143,145,5,18,0,0,144,131,1,0,0,0,144,132,1,0,0,0,144,
  	134,1,0,0,0,144,137,1,0,0,0,144,140,1,0,0,0,145,19,1,0,0,0,11,23,34,64,
  	69,90,99,107,109,126,129,144
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  basicParserStaticData = staticData.release();
}

}

BasicParser::BasicParser(TokenStream *input) : BasicParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

BasicParser::BasicParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  BasicParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *basicParserStaticData->atn, basicParserStaticData->decisionToDFA, basicParserStaticData->sharedContextCache, options);
}

BasicParser::~BasicParser() {
  delete _interpreter;
}

const atn::ATN& BasicParser::getATN() const {
  return *basicParserStaticData->atn;
}

std::string BasicParser::getGrammarFileName() const {
  return "Basic.g4";
}

const std::vector<std::string>& BasicParser::getRuleNames() const {
  return basicParserStaticData->ruleNames;
}

const dfa::Vocabulary& BasicParser::getVocabulary() const {
  return basicParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BasicParser::getSerializedATN() const {
  return basicParserStaticData->serializedATN;
}


//----------------- FileContext ------------------------------------------------------------------

BasicParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::FileContext::EOF() {
  return getToken(BasicParser::EOF, 0);
}

std::vector<BasicParser::StatContext *> BasicParser::FileContext::stat() {
  return getRuleContexts<BasicParser::StatContext>();
}

BasicParser::StatContext* BasicParser::FileContext::stat(size_t i) {
  return getRuleContext<BasicParser::StatContext>(i);
}


size_t BasicParser::FileContext::getRuleIndex() const {
  return BasicParser::RuleFile;
}

void BasicParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void BasicParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


std::any BasicParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::FileContext* BasicParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, BasicParser::RuleFile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(23);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 121080) != 0)) {
      setState(20);
      stat();
      setState(25);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(26);
    match(BasicParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

BasicParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BasicParser::DefContext* BasicParser::StatContext::def() {
  return getRuleContext<BasicParser::DefContext>(0);
}

BasicParser::CallContext* BasicParser::StatContext::call() {
  return getRuleContext<BasicParser::CallContext>(0);
}

BasicParser::ForContext* BasicParser::StatContext::for_() {
  return getRuleContext<BasicParser::ForContext>(0);
}

BasicParser::IfContext* BasicParser::StatContext::if_() {
  return getRuleContext<BasicParser::IfContext>(0);
}

BasicParser::LetContext* BasicParser::StatContext::let() {
  return getRuleContext<BasicParser::LetContext>(0);
}

BasicParser::CommandContext* BasicParser::StatContext::command() {
  return getRuleContext<BasicParser::CommandContext>(0);
}


size_t BasicParser::StatContext::getRuleIndex() const {
  return BasicParser::RuleStat;
}

void BasicParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void BasicParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}


std::any BasicParser::StatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitStat(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::StatContext* BasicParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, BasicParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(34);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasicParser::DEF: {
        enterOuterAlt(_localctx, 1);
        setState(28);
        def();
        break;
      }

      case BasicParser::FN: {
        enterOuterAlt(_localctx, 2);
        setState(29);
        call();
        break;
      }

      case BasicParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(30);
        for_();
        break;
      }

      case BasicParser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(31);
        if_();
        break;
      }

      case BasicParser::LET: {
        enterOuterAlt(_localctx, 5);
        setState(32);
        let();
        break;
      }

      case BasicParser::LIST:
      case BasicParser::GOTO:
      case BasicParser::END:
      case BasicParser::LEN:
      case BasicParser::PRINT: {
        enterOuterAlt(_localctx, 6);
        setState(33);
        command();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefContext ------------------------------------------------------------------

BasicParser::DefContext::DefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::DefContext::DEF() {
  return getToken(BasicParser::DEF, 0);
}

tree::TerminalNode* BasicParser::DefContext::FN() {
  return getToken(BasicParser::FN, 0);
}

std::vector<tree::TerminalNode *> BasicParser::DefContext::ID() {
  return getTokens(BasicParser::ID);
}

tree::TerminalNode* BasicParser::DefContext::ID(size_t i) {
  return getToken(BasicParser::ID, i);
}

tree::TerminalNode* BasicParser::DefContext::LPAREN() {
  return getToken(BasicParser::LPAREN, 0);
}

tree::TerminalNode* BasicParser::DefContext::RPAREN() {
  return getToken(BasicParser::RPAREN, 0);
}

tree::TerminalNode* BasicParser::DefContext::EQUAL() {
  return getToken(BasicParser::EQUAL, 0);
}

BasicParser::ExprContext* BasicParser::DefContext::expr() {
  return getRuleContext<BasicParser::ExprContext>(0);
}


size_t BasicParser::DefContext::getRuleIndex() const {
  return BasicParser::RuleDef;
}

void BasicParser::DefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDef(this);
}

void BasicParser::DefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDef(this);
}


std::any BasicParser::DefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitDef(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::DefContext* BasicParser::def() {
  DefContext *_localctx = _tracker.createInstance<DefContext>(_ctx, getState());
  enterRule(_localctx, 4, BasicParser::RuleDef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    match(BasicParser::DEF);
    setState(37);
    match(BasicParser::FN);
    setState(38);
    match(BasicParser::ID);
    setState(39);
    match(BasicParser::LPAREN);
    setState(40);
    match(BasicParser::ID);
    setState(41);
    match(BasicParser::RPAREN);
    setState(42);
    match(BasicParser::EQUAL);
    setState(43);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CallContext ------------------------------------------------------------------

BasicParser::CallContext::CallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::CallContext::FN() {
  return getToken(BasicParser::FN, 0);
}

tree::TerminalNode* BasicParser::CallContext::ID() {
  return getToken(BasicParser::ID, 0);
}

tree::TerminalNode* BasicParser::CallContext::LPAREN() {
  return getToken(BasicParser::LPAREN, 0);
}

BasicParser::ExprContext* BasicParser::CallContext::expr() {
  return getRuleContext<BasicParser::ExprContext>(0);
}

tree::TerminalNode* BasicParser::CallContext::RPAREN() {
  return getToken(BasicParser::RPAREN, 0);
}


size_t BasicParser::CallContext::getRuleIndex() const {
  return BasicParser::RuleCall;
}

void BasicParser::CallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall(this);
}

void BasicParser::CallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall(this);
}


std::any BasicParser::CallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitCall(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::CallContext* BasicParser::call() {
  CallContext *_localctx = _tracker.createInstance<CallContext>(_ctx, getState());
  enterRule(_localctx, 6, BasicParser::RuleCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(BasicParser::FN);
    setState(46);
    match(BasicParser::ID);
    setState(47);
    match(BasicParser::LPAREN);
    setState(48);
    expr(0);
    setState(49);
    match(BasicParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LetContext ------------------------------------------------------------------

BasicParser::LetContext::LetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::LetContext::LET() {
  return getToken(BasicParser::LET, 0);
}

tree::TerminalNode* BasicParser::LetContext::ID() {
  return getToken(BasicParser::ID, 0);
}

tree::TerminalNode* BasicParser::LetContext::EQUAL() {
  return getToken(BasicParser::EQUAL, 0);
}

BasicParser::ExprContext* BasicParser::LetContext::expr() {
  return getRuleContext<BasicParser::ExprContext>(0);
}


size_t BasicParser::LetContext::getRuleIndex() const {
  return BasicParser::RuleLet;
}

void BasicParser::LetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLet(this);
}

void BasicParser::LetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLet(this);
}


std::any BasicParser::LetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitLet(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::LetContext* BasicParser::let() {
  LetContext *_localctx = _tracker.createInstance<LetContext>(_ctx, getState());
  enterRule(_localctx, 8, BasicParser::RuleLet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    match(BasicParser::LET);
    setState(52);
    match(BasicParser::ID);
    setState(53);
    match(BasicParser::EQUAL);
    setState(54);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForContext ------------------------------------------------------------------

BasicParser::ForContext::ForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::ForContext::FOR() {
  return getToken(BasicParser::FOR, 0);
}

std::vector<tree::TerminalNode *> BasicParser::ForContext::ID() {
  return getTokens(BasicParser::ID);
}

tree::TerminalNode* BasicParser::ForContext::ID(size_t i) {
  return getToken(BasicParser::ID, i);
}

tree::TerminalNode* BasicParser::ForContext::EQUAL() {
  return getToken(BasicParser::EQUAL, 0);
}

std::vector<BasicParser::ExprContext *> BasicParser::ForContext::expr() {
  return getRuleContexts<BasicParser::ExprContext>();
}

BasicParser::ExprContext* BasicParser::ForContext::expr(size_t i) {
  return getRuleContext<BasicParser::ExprContext>(i);
}

tree::TerminalNode* BasicParser::ForContext::TO() {
  return getToken(BasicParser::TO, 0);
}

tree::TerminalNode* BasicParser::ForContext::NEXT() {
  return getToken(BasicParser::NEXT, 0);
}

tree::TerminalNode* BasicParser::ForContext::STEP() {
  return getToken(BasicParser::STEP, 0);
}

std::vector<BasicParser::StatContext *> BasicParser::ForContext::stat() {
  return getRuleContexts<BasicParser::StatContext>();
}

BasicParser::StatContext* BasicParser::ForContext::stat(size_t i) {
  return getRuleContext<BasicParser::StatContext>(i);
}


size_t BasicParser::ForContext::getRuleIndex() const {
  return BasicParser::RuleFor;
}

void BasicParser::ForContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor(this);
}

void BasicParser::ForContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor(this);
}


std::any BasicParser::ForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitFor(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ForContext* BasicParser::for_() {
  ForContext *_localctx = _tracker.createInstance<ForContext>(_ctx, getState());
  enterRule(_localctx, 10, BasicParser::RuleFor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(BasicParser::FOR);
    setState(57);
    match(BasicParser::ID);
    setState(58);
    match(BasicParser::EQUAL);
    setState(59);
    expr(0);
    setState(60);
    match(BasicParser::TO);
    setState(61);
    expr(0);
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasicParser::STEP) {
      setState(62);
      match(BasicParser::STEP);
      setState(63);
      expr(0);
    }
    setState(69);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 121080) != 0)) {
      setState(66);
      stat();
      setState(71);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(72);
    match(BasicParser::NEXT);
    setState(73);
    match(BasicParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

BasicParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::IfContext::IF() {
  return getToken(BasicParser::IF, 0);
}

BasicParser::ExprContext* BasicParser::IfContext::expr() {
  return getRuleContext<BasicParser::ExprContext>(0);
}

tree::TerminalNode* BasicParser::IfContext::THEN() {
  return getToken(BasicParser::THEN, 0);
}

tree::TerminalNode* BasicParser::IfContext::INT() {
  return getToken(BasicParser::INT, 0);
}

tree::TerminalNode* BasicParser::IfContext::GOTO() {
  return getToken(BasicParser::GOTO, 0);
}

BasicParser::CommandContext* BasicParser::IfContext::command() {
  return getRuleContext<BasicParser::CommandContext>(0);
}


size_t BasicParser::IfContext::getRuleIndex() const {
  return BasicParser::RuleIf;
}

void BasicParser::IfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf(this);
}

void BasicParser::IfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf(this);
}


std::any BasicParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::IfContext* BasicParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 12, BasicParser::RuleIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(75);
      match(BasicParser::IF);
      setState(76);
      expr(0);
      setState(77);
      match(BasicParser::THEN);
      setState(78);
      match(BasicParser::INT);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(80);
      match(BasicParser::IF);
      setState(81);
      expr(0);
      setState(82);
      match(BasicParser::GOTO);
      setState(83);
      match(BasicParser::INT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(85);
      match(BasicParser::IF);
      setState(86);
      expr(0);
      setState(87);
      match(BasicParser::THEN);
      setState(88);
      command();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

BasicParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BasicParser::ExprContext::getRuleIndex() const {
  return BasicParser::RuleExpr;
}

void BasicParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ComparisonContext ------------------------------------------------------------------

std::vector<BasicParser::ExprContext *> BasicParser::ComparisonContext::expr() {
  return getRuleContexts<BasicParser::ExprContext>();
}

BasicParser::ExprContext* BasicParser::ComparisonContext::expr(size_t i) {
  return getRuleContext<BasicParser::ExprContext>(i);
}

tree::TerminalNode* BasicParser::ComparisonContext::LT() {
  return getToken(BasicParser::LT, 0);
}

tree::TerminalNode* BasicParser::ComparisonContext::GT() {
  return getToken(BasicParser::GT, 0);
}

tree::TerminalNode* BasicParser::ComparisonContext::LEQ() {
  return getToken(BasicParser::LEQ, 0);
}

tree::TerminalNode* BasicParser::ComparisonContext::GEQ() {
  return getToken(BasicParser::GEQ, 0);
}

BasicParser::ComparisonContext::ComparisonContext(ExprContext *ctx) { copyFrom(ctx); }

void BasicParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}
void BasicParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

std::any BasicParser::ComparisonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitComparison(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::IdContext::ID() {
  return getToken(BasicParser::ID, 0);
}

BasicParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }

void BasicParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}
void BasicParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}

std::any BasicParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqualityContext ------------------------------------------------------------------

std::vector<BasicParser::ExprContext *> BasicParser::EqualityContext::expr() {
  return getRuleContexts<BasicParser::ExprContext>();
}

BasicParser::ExprContext* BasicParser::EqualityContext::expr(size_t i) {
  return getRuleContext<BasicParser::ExprContext>(i);
}

tree::TerminalNode* BasicParser::EqualityContext::EQUAL() {
  return getToken(BasicParser::EQUAL, 0);
}

tree::TerminalNode* BasicParser::EqualityContext::UNEQUAL() {
  return getToken(BasicParser::UNEQUAL, 0);
}

BasicParser::EqualityContext::EqualityContext(ExprContext *ctx) { copyFrom(ctx); }

void BasicParser::EqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality(this);
}
void BasicParser::EqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality(this);
}

std::any BasicParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenthesesContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::ParenthesesContext::LPAREN() {
  return getToken(BasicParser::LPAREN, 0);
}

BasicParser::ExprContext* BasicParser::ParenthesesContext::expr() {
  return getRuleContext<BasicParser::ExprContext>(0);
}

tree::TerminalNode* BasicParser::ParenthesesContext::RPAREN() {
  return getToken(BasicParser::RPAREN, 0);
}

BasicParser::ParenthesesContext::ParenthesesContext(ExprContext *ctx) { copyFrom(ctx); }

void BasicParser::ParenthesesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParentheses(this);
}
void BasicParser::ParenthesesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParentheses(this);
}

std::any BasicParser::ParenthesesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitParentheses(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::IntContext::INT() {
  return getToken(BasicParser::INT, 0);
}

BasicParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }

void BasicParser::IntContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt(this);
}
void BasicParser::IntContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt(this);
}

std::any BasicParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ExprContext* BasicParser::expr() {
   return expr(0);
}

BasicParser::ExprContext* BasicParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  BasicParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  BasicParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, BasicParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(99);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasicParser::LPAREN: {
        _localctx = _tracker.createInstance<ParenthesesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(93);
        match(BasicParser::LPAREN);
        setState(94);
        expr(0);
        setState(95);
        match(BasicParser::RPAREN);
        break;
      }

      case BasicParser::ID: {
        _localctx = _tracker.createInstance<IdContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(97);
        match(BasicParser::ID);
        break;
      }

      case BasicParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(98);
        match(BasicParser::INT);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(109);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(107);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<EqualityContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(101);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(102);
          antlrcpp::downCast<EqualityContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == BasicParser::EQUAL

          || _la == BasicParser::UNEQUAL)) {
            antlrcpp::downCast<EqualityContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(103);
          expr(5);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<ComparisonContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(104);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(105);
          antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 251658240) != 0))) {
            antlrcpp::downCast<ComparisonContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(106);
          expr(4);
          break;
        }

        default:
          break;
        } 
      }
      setState(111);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- CommandContext ------------------------------------------------------------------

BasicParser::CommandContext::CommandContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BasicParser::CommandContext::getRuleIndex() const {
  return BasicParser::RuleCommand;
}

void BasicParser::CommandContext::copyFrom(CommandContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- PrintContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::PrintContext::PRINT() {
  return getToken(BasicParser::PRINT, 0);
}

std::vector<BasicParser::ExprContext *> BasicParser::PrintContext::expr() {
  return getRuleContexts<BasicParser::ExprContext>();
}

BasicParser::ExprContext* BasicParser::PrintContext::expr(size_t i) {
  return getRuleContext<BasicParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> BasicParser::PrintContext::SEMI() {
  return getTokens(BasicParser::SEMI);
}

tree::TerminalNode* BasicParser::PrintContext::SEMI(size_t i) {
  return getToken(BasicParser::SEMI, i);
}

std::vector<tree::TerminalNode *> BasicParser::PrintContext::COMMA() {
  return getTokens(BasicParser::COMMA);
}

tree::TerminalNode* BasicParser::PrintContext::COMMA(size_t i) {
  return getToken(BasicParser::COMMA, i);
}

BasicParser::PrintContext::PrintContext(CommandContext *ctx) { copyFrom(ctx); }

void BasicParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}
void BasicParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}

std::any BasicParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GotoContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::GotoContext::GOTO() {
  return getToken(BasicParser::GOTO, 0);
}

tree::TerminalNode* BasicParser::GotoContext::INT() {
  return getToken(BasicParser::INT, 0);
}

BasicParser::GotoContext::GotoContext(CommandContext *ctx) { copyFrom(ctx); }

void BasicParser::GotoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGoto(this);
}
void BasicParser::GotoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGoto(this);
}

std::any BasicParser::GotoContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitGoto(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LenContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::LenContext::LEN() {
  return getToken(BasicParser::LEN, 0);
}

tree::TerminalNode* BasicParser::LenContext::LPAREN() {
  return getToken(BasicParser::LPAREN, 0);
}

tree::TerminalNode* BasicParser::LenContext::STRING() {
  return getToken(BasicParser::STRING, 0);
}

tree::TerminalNode* BasicParser::LenContext::RPAREN() {
  return getToken(BasicParser::RPAREN, 0);
}

BasicParser::LenContext::LenContext(CommandContext *ctx) { copyFrom(ctx); }

void BasicParser::LenContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLen(this);
}
void BasicParser::LenContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLen(this);
}

std::any BasicParser::LenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitLen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ListCommandContext ------------------------------------------------------------------

BasicParser::ListContext* BasicParser::ListCommandContext::list() {
  return getRuleContext<BasicParser::ListContext>(0);
}

BasicParser::ListCommandContext::ListCommandContext(CommandContext *ctx) { copyFrom(ctx); }

void BasicParser::ListCommandContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterListCommand(this);
}
void BasicParser::ListCommandContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitListCommand(this);
}

std::any BasicParser::ListCommandContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitListCommand(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EndContext ------------------------------------------------------------------

tree::TerminalNode* BasicParser::EndContext::END() {
  return getToken(BasicParser::END, 0);
}

BasicParser::EndContext::EndContext(CommandContext *ctx) { copyFrom(ctx); }

void BasicParser::EndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEnd(this);
}
void BasicParser::EndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEnd(this);
}

std::any BasicParser::EndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitEnd(this);
  else
    return visitor->visitChildren(this);
}
BasicParser::CommandContext* BasicParser::command() {
  CommandContext *_localctx = _tracker.createInstance<CommandContext>(_ctx, getState());
  enterRule(_localctx, 16, BasicParser::RuleCommand);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasicParser::END: {
        _localctx = _tracker.createInstance<BasicParser::EndContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(112);
        match(BasicParser::END);
        break;
      }

      case BasicParser::LEN: {
        _localctx = _tracker.createInstance<BasicParser::LenContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(113);
        match(BasicParser::LEN);
        setState(114);
        match(BasicParser::LPAREN);
        setState(115);
        match(BasicParser::STRING);
        setState(116);
        match(BasicParser::RPAREN);
        break;
      }

      case BasicParser::GOTO: {
        _localctx = _tracker.createInstance<BasicParser::GotoContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(117);
        match(BasicParser::GOTO);
        setState(118);
        match(BasicParser::INT);
        break;
      }

      case BasicParser::LIST: {
        _localctx = _tracker.createInstance<BasicParser::ListCommandContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(119);
        list();
        break;
      }

      case BasicParser::PRINT: {
        _localctx = _tracker.createInstance<BasicParser::PrintContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(120);
        match(BasicParser::PRINT);
        setState(121);
        expr(0);
        setState(126);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BasicParser::SEMI

        || _la == BasicParser::COMMA) {
          setState(122);
          _la = _input->LA(1);
          if (!(_la == BasicParser::SEMI

          || _la == BasicParser::COMMA)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(123);
          expr(0);
          setState(128);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ListContext ------------------------------------------------------------------

BasicParser::ListContext::ListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::ListContext::LIST() {
  return getToken(BasicParser::LIST, 0);
}

std::vector<tree::TerminalNode *> BasicParser::ListContext::INT() {
  return getTokens(BasicParser::INT);
}

tree::TerminalNode* BasicParser::ListContext::INT(size_t i) {
  return getToken(BasicParser::INT, i);
}

tree::TerminalNode* BasicParser::ListContext::DASH() {
  return getToken(BasicParser::DASH, 0);
}


size_t BasicParser::ListContext::getRuleIndex() const {
  return BasicParser::RuleList;
}

void BasicParser::ListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterList(this);
}

void BasicParser::ListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<BasicListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitList(this);
}


std::any BasicParser::ListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BasicVisitor*>(visitor))
    return parserVisitor->visitList(this);
  else
    return visitor->visitChildren(this);
}

BasicParser::ListContext* BasicParser::list() {
  ListContext *_localctx = _tracker.createInstance<ListContext>(_ctx, getState());
  enterRule(_localctx, 18, BasicParser::RuleList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(144);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(131);
      match(BasicParser::LIST);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(132);
      match(BasicParser::LIST);
      setState(133);
      match(BasicParser::INT);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(134);
      match(BasicParser::LIST);
      setState(135);
      match(BasicParser::INT);
      setState(136);
      match(BasicParser::DASH);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(137);
      match(BasicParser::LIST);
      setState(138);
      match(BasicParser::DASH);
      setState(139);
      match(BasicParser::INT);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(140);
      match(BasicParser::LIST);
      setState(141);
      match(BasicParser::INT);
      setState(142);
      match(BasicParser::DASH);
      setState(143);
      match(BasicParser::INT);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool BasicParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 7: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool BasicParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 4);
    case 1: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

void BasicParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  basicParserInitialize();
#else
  ::antlr4::internal::call_once(basicParserOnceFlag, basicParserInitialize);
#endif
}
