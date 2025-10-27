
// Generated from /home/amazerrr/GitHub/BASIC2.0/grammar/Basic.g4 by ANTLR 4.13.1


#include "BasicLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct BasicLexerStaticData final {
  BasicLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BasicLexerStaticData(const BasicLexerStaticData&) = delete;
  BasicLexerStaticData(BasicLexerStaticData&&) = delete;
  BasicLexerStaticData& operator=(const BasicLexerStaticData&) = delete;
  BasicLexerStaticData& operator=(BasicLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag basiclexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
BasicLexerStaticData *basiclexerLexerStaticData = nullptr;

void basiclexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (basiclexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(basiclexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BasicLexerStaticData>(
    std::vector<std::string>{
      "WS", "REM", "LET", "LIST", "DEF", "FN", "FOR", "TO", "STEP", "NEXT", 
      "GOTO", "IF", "THEN", "END", "LEN", "PRINT", "ID", "INT", "STRING", 
      "LPAREN", "RPAREN", "EQUAL", "UNEQUAL", "LT", "GT", "LEQ", "GEQ", 
      "DASH", "DOLLAR", "SEMI", "COMMA"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,31,196,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,1,0,4,0,65,8,0,11,0,12,0,66,1,0,1,0,1,1,1,1,
  	1,1,1,1,1,1,5,1,76,8,1,10,1,12,1,79,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,3,1,
  	3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,
  	1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,
  	1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,14,1,14,1,14,
  	1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,5,16,145,8,16,10,16,12,16,
  	148,9,16,1,16,5,16,151,8,16,10,16,12,16,154,9,16,1,17,4,17,157,8,17,11,
  	17,12,17,158,1,18,1,18,5,18,163,8,18,10,18,12,18,166,9,18,1,18,1,18,1,
  	19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,
  	25,1,25,1,26,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,30,1,30,0,0,31,
  	1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,14,
  	29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,23,47,24,49,25,51,
  	26,53,27,55,28,57,29,59,30,61,31,1,0,7,3,0,9,10,13,13,32,32,2,0,10,10,
  	13,13,1,0,65,90,2,0,48,57,65,90,2,0,33,33,36,37,1,0,48,57,3,0,10,10,13,
  	13,34,34,201,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,
  	1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,
  	0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,
  	0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,1,64,
  	1,0,0,0,3,70,1,0,0,0,5,82,1,0,0,0,7,86,1,0,0,0,9,91,1,0,0,0,11,95,1,0,
  	0,0,13,98,1,0,0,0,15,102,1,0,0,0,17,105,1,0,0,0,19,110,1,0,0,0,21,115,
  	1,0,0,0,23,120,1,0,0,0,25,123,1,0,0,0,27,128,1,0,0,0,29,132,1,0,0,0,31,
  	136,1,0,0,0,33,142,1,0,0,0,35,156,1,0,0,0,37,160,1,0,0,0,39,169,1,0,0,
  	0,41,171,1,0,0,0,43,173,1,0,0,0,45,175,1,0,0,0,47,178,1,0,0,0,49,180,
  	1,0,0,0,51,182,1,0,0,0,53,185,1,0,0,0,55,188,1,0,0,0,57,190,1,0,0,0,59,
  	192,1,0,0,0,61,194,1,0,0,0,63,65,7,0,0,0,64,63,1,0,0,0,65,66,1,0,0,0,
  	66,64,1,0,0,0,66,67,1,0,0,0,67,68,1,0,0,0,68,69,6,0,0,0,69,2,1,0,0,0,
  	70,71,5,82,0,0,71,72,5,69,0,0,72,73,5,77,0,0,73,77,1,0,0,0,74,76,8,1,
  	0,0,75,74,1,0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,80,1,0,
  	0,0,79,77,1,0,0,0,80,81,6,1,0,0,81,4,1,0,0,0,82,83,5,76,0,0,83,84,5,69,
  	0,0,84,85,5,84,0,0,85,6,1,0,0,0,86,87,5,76,0,0,87,88,5,73,0,0,88,89,5,
  	83,0,0,89,90,5,84,0,0,90,8,1,0,0,0,91,92,5,68,0,0,92,93,5,69,0,0,93,94,
  	5,70,0,0,94,10,1,0,0,0,95,96,5,70,0,0,96,97,5,78,0,0,97,12,1,0,0,0,98,
  	99,5,70,0,0,99,100,5,79,0,0,100,101,5,82,0,0,101,14,1,0,0,0,102,103,5,
  	84,0,0,103,104,5,79,0,0,104,16,1,0,0,0,105,106,5,83,0,0,106,107,5,84,
  	0,0,107,108,5,69,0,0,108,109,5,80,0,0,109,18,1,0,0,0,110,111,5,78,0,0,
  	111,112,5,69,0,0,112,113,5,88,0,0,113,114,5,84,0,0,114,20,1,0,0,0,115,
  	116,5,71,0,0,116,117,5,79,0,0,117,118,5,84,0,0,118,119,5,79,0,0,119,22,
  	1,0,0,0,120,121,5,73,0,0,121,122,5,70,0,0,122,24,1,0,0,0,123,124,5,84,
  	0,0,124,125,5,72,0,0,125,126,5,69,0,0,126,127,5,78,0,0,127,26,1,0,0,0,
  	128,129,5,69,0,0,129,130,5,78,0,0,130,131,5,68,0,0,131,28,1,0,0,0,132,
  	133,5,76,0,0,133,134,5,69,0,0,134,135,5,78,0,0,135,30,1,0,0,0,136,137,
  	5,80,0,0,137,138,5,82,0,0,138,139,5,73,0,0,139,140,5,78,0,0,140,141,5,
  	84,0,0,141,32,1,0,0,0,142,146,7,2,0,0,143,145,7,3,0,0,144,143,1,0,0,0,
  	145,148,1,0,0,0,146,144,1,0,0,0,146,147,1,0,0,0,147,152,1,0,0,0,148,146,
  	1,0,0,0,149,151,7,4,0,0,150,149,1,0,0,0,151,154,1,0,0,0,152,150,1,0,0,
  	0,152,153,1,0,0,0,153,34,1,0,0,0,154,152,1,0,0,0,155,157,7,5,0,0,156,
  	155,1,0,0,0,157,158,1,0,0,0,158,156,1,0,0,0,158,159,1,0,0,0,159,36,1,
  	0,0,0,160,164,5,34,0,0,161,163,8,6,0,0,162,161,1,0,0,0,163,166,1,0,0,
  	0,164,162,1,0,0,0,164,165,1,0,0,0,165,167,1,0,0,0,166,164,1,0,0,0,167,
  	168,5,34,0,0,168,38,1,0,0,0,169,170,5,40,0,0,170,40,1,0,0,0,171,172,5,
  	41,0,0,172,42,1,0,0,0,173,174,5,61,0,0,174,44,1,0,0,0,175,176,5,60,0,
  	0,176,177,5,62,0,0,177,46,1,0,0,0,178,179,5,60,0,0,179,48,1,0,0,0,180,
  	181,5,62,0,0,181,50,1,0,0,0,182,183,5,60,0,0,183,184,5,61,0,0,184,52,
  	1,0,0,0,185,186,5,62,0,0,186,187,5,61,0,0,187,54,1,0,0,0,188,189,5,45,
  	0,0,189,56,1,0,0,0,190,191,5,36,0,0,191,58,1,0,0,0,192,193,5,59,0,0,193,
  	60,1,0,0,0,194,195,5,44,0,0,195,62,1,0,0,0,7,0,66,77,146,152,158,164,
  	1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  basiclexerLexerStaticData = staticData.release();
}

}

BasicLexer::BasicLexer(CharStream *input) : Lexer(input) {
  BasicLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *basiclexerLexerStaticData->atn, basiclexerLexerStaticData->decisionToDFA, basiclexerLexerStaticData->sharedContextCache);
}

BasicLexer::~BasicLexer() {
  delete _interpreter;
}

std::string BasicLexer::getGrammarFileName() const {
  return "Basic.g4";
}

const std::vector<std::string>& BasicLexer::getRuleNames() const {
  return basiclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& BasicLexer::getChannelNames() const {
  return basiclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& BasicLexer::getModeNames() const {
  return basiclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& BasicLexer::getVocabulary() const {
  return basiclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BasicLexer::getSerializedATN() const {
  return basiclexerLexerStaticData->serializedATN;
}

const atn::ATN& BasicLexer::getATN() const {
  return *basiclexerLexerStaticData->atn;
}




void BasicLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  basiclexerLexerInitialize();
#else
  ::antlr4::internal::call_once(basiclexerLexerOnceFlag, basiclexerLexerInitialize);
#endif
}
