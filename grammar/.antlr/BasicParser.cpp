
// Generated from /home/amazerrr/GitHub/BASIC2.0/grammar/Basic.g4 by ANTLR 4.13.1



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
      "file", "stat", "def", "call", "for", "next", "expr"
    },
    std::vector<std::string>{
      "", "", "", "'DEF'", "'FN'", "'FOR'", "'TO'", "'STEP'", "'NEXT'", 
      "", "", "'('", "')'", "'='"
    },
    std::vector<std::string>{
      "", "WS", "REM", "DEF", "FN", "FOR", "TO", "STEP", "NEXT", "ID", "INT", 
      "LPAREN", "RPAREN", "EQUAL"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,13,59,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	5,0,16,8,0,10,0,12,0,19,9,0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,27,8,1,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,
  	1,4,1,4,1,4,1,4,3,4,52,8,4,1,5,1,5,1,5,1,6,1,6,1,6,0,0,7,0,2,4,6,8,10,
  	12,0,1,1,0,9,10,56,0,17,1,0,0,0,2,26,1,0,0,0,4,28,1,0,0,0,6,37,1,0,0,
  	0,8,43,1,0,0,0,10,53,1,0,0,0,12,56,1,0,0,0,14,16,3,2,1,0,15,14,1,0,0,
  	0,16,19,1,0,0,0,17,15,1,0,0,0,17,18,1,0,0,0,18,20,1,0,0,0,19,17,1,0,0,
  	0,20,21,5,0,0,1,21,1,1,0,0,0,22,27,3,4,2,0,23,27,3,6,3,0,24,27,3,8,4,
  	0,25,27,3,10,5,0,26,22,1,0,0,0,26,23,1,0,0,0,26,24,1,0,0,0,26,25,1,0,
  	0,0,27,3,1,0,0,0,28,29,5,3,0,0,29,30,5,4,0,0,30,31,5,9,0,0,31,32,5,11,
  	0,0,32,33,5,9,0,0,33,34,5,12,0,0,34,35,5,13,0,0,35,36,3,12,6,0,36,5,1,
  	0,0,0,37,38,5,4,0,0,38,39,5,9,0,0,39,40,5,11,0,0,40,41,3,12,6,0,41,42,
  	5,12,0,0,42,7,1,0,0,0,43,44,5,5,0,0,44,45,5,9,0,0,45,46,5,13,0,0,46,47,
  	3,12,6,0,47,48,5,6,0,0,48,51,3,12,6,0,49,50,5,7,0,0,50,52,3,12,6,0,51,
  	49,1,0,0,0,51,52,1,0,0,0,52,9,1,0,0,0,53,54,5,8,0,0,54,55,5,9,0,0,55,
  	11,1,0,0,0,56,57,7,0,0,0,57,13,1,0,0,0,3,17,26,51
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
    setState(17);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 312) != 0)) {
      setState(14);
      stat();
      setState(19);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(20);
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

BasicParser::NextContext* BasicParser::StatContext::next() {
  return getRuleContext<BasicParser::NextContext>(0);
}


size_t BasicParser::StatContext::getRuleIndex() const {
  return BasicParser::RuleStat;
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
    setState(26);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BasicParser::DEF: {
        enterOuterAlt(_localctx, 1);
        setState(22);
        def();
        break;
      }

      case BasicParser::FN: {
        enterOuterAlt(_localctx, 2);
        setState(23);
        call();
        break;
      }

      case BasicParser::FOR: {
        enterOuterAlt(_localctx, 3);
        setState(24);
        for_();
        break;
      }

      case BasicParser::NEXT: {
        enterOuterAlt(_localctx, 4);
        setState(25);
        next();
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
    setState(28);
    match(BasicParser::DEF);
    setState(29);
    match(BasicParser::FN);
    setState(30);
    match(BasicParser::ID);
    setState(31);
    match(BasicParser::LPAREN);
    setState(32);
    match(BasicParser::ID);
    setState(33);
    match(BasicParser::RPAREN);
    setState(34);
    match(BasicParser::EQUAL);
    setState(35);
    expr();
   
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
    setState(37);
    match(BasicParser::FN);
    setState(38);
    match(BasicParser::ID);
    setState(39);
    match(BasicParser::LPAREN);
    setState(40);
    expr();
    setState(41);
    match(BasicParser::RPAREN);
   
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

tree::TerminalNode* BasicParser::ForContext::ID() {
  return getToken(BasicParser::ID, 0);
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

tree::TerminalNode* BasicParser::ForContext::STEP() {
  return getToken(BasicParser::STEP, 0);
}


size_t BasicParser::ForContext::getRuleIndex() const {
  return BasicParser::RuleFor;
}


BasicParser::ForContext* BasicParser::for_() {
  ForContext *_localctx = _tracker.createInstance<ForContext>(_ctx, getState());
  enterRule(_localctx, 8, BasicParser::RuleFor);
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
    setState(43);
    match(BasicParser::FOR);
    setState(44);
    match(BasicParser::ID);
    setState(45);
    match(BasicParser::EQUAL);
    setState(46);
    expr();
    setState(47);
    match(BasicParser::TO);
    setState(48);
    expr();
    setState(51);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == BasicParser::STEP) {
      setState(49);
      match(BasicParser::STEP);
      setState(50);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NextContext ------------------------------------------------------------------

BasicParser::NextContext::NextContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BasicParser::NextContext::NEXT() {
  return getToken(BasicParser::NEXT, 0);
}

tree::TerminalNode* BasicParser::NextContext::ID() {
  return getToken(BasicParser::ID, 0);
}


size_t BasicParser::NextContext::getRuleIndex() const {
  return BasicParser::RuleNext;
}


BasicParser::NextContext* BasicParser::next() {
  NextContext *_localctx = _tracker.createInstance<NextContext>(_ctx, getState());
  enterRule(_localctx, 10, BasicParser::RuleNext);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(BasicParser::NEXT);
    setState(54);
    match(BasicParser::ID);
   
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

tree::TerminalNode* BasicParser::ExprContext::INT() {
  return getToken(BasicParser::INT, 0);
}

tree::TerminalNode* BasicParser::ExprContext::ID() {
  return getToken(BasicParser::ID, 0);
}


size_t BasicParser::ExprContext::getRuleIndex() const {
  return BasicParser::RuleExpr;
}


BasicParser::ExprContext* BasicParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 12, BasicParser::RuleExpr);
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
    _la = _input->LA(1);
    if (!(_la == BasicParser::ID

    || _la == BasicParser::INT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void BasicParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  basicParserInitialize();
#else
  ::antlr4::internal::call_once(basicParserOnceFlag, basicParserInitialize);
#endif
}
