// Copyright 2018 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is automatically generated by gen-keywords-gen-h.py and should not
// be modified manually.

#ifndef V8_PARSING_KEYWORDS_GEN_H_
#define V8_PARSING_KEYWORDS_GEN_H_

#include "src/parsing/token.h"

namespace v8 {
namespace internal {

/* C++ code produced by gperf version 3.1 */
/* Command-line: gperf -m100 src/parsing/keywords.txt  */
/* Computed positions: -k'1-2' */

#if !(                                                                         \
    (' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) && ('%' == 37) && \
    ('&' == 38) && ('\'' == 39) && ('(' == 40) && (')' == 41) &&               \
    ('*' == 42) && ('+' == 43) && (',' == 44) && ('-' == 45) && ('.' == 46) && \
    ('/' == 47) && ('0' == 48) && ('1' == 49) && ('2' == 50) && ('3' == 51) && \
    ('4' == 52) && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) && \
    ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) && ('=' == 61) && \
    ('>' == 62) && ('?' == 63) && ('A' == 65) && ('B' == 66) && ('C' == 67) && \
    ('D' == 68) && ('E' == 69) && ('F' == 70) && ('G' == 71) && ('H' == 72) && \
    ('I' == 73) && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) && \
    ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) && ('R' == 82) && \
    ('S' == 83) && ('T' == 84) && ('U' == 85) && ('V' == 86) && ('W' == 87) && \
    ('X' == 88) && ('Y' == 89) && ('Z' == 90) && ('[' == 91) &&                \
    ('\\' == 92) && (']' == 93) && ('^' == 94) && ('_' == 95) &&               \
    ('a' == 97) && ('b' == 98) && ('c' == 99) && ('d' == 100) &&               \
    ('e' == 101) && ('f' == 102) && ('g' == 103) && ('h' == 104) &&            \
    ('i' == 105) && ('j' == 106) && ('k' == 107) && ('l' == 108) &&            \
    ('m' == 109) && ('n' == 110) && ('o' == 111) && ('p' == 112) &&            \
    ('q' == 113) && ('r' == 114) && ('s' == 115) && ('t' == 116) &&            \
    ('u' == 117) && ('v' == 118) && ('w' == 119) && ('x' == 120) &&            \
    ('y' == 121) && ('z' == 122) && ('{' == 123) && ('|' == 124) &&            \
    ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set."
// If you see this error, please report a bug to <bug-gperf@gnu.org>.
#endif

struct PerfectKeywordHashTableEntry {
  const char* name;
  Token::Value value;
};
enum {
  TOTAL_KEYWORDS = 53,
  MIN_WORD_LENGTH = 2,
  MAX_WORD_LENGTH = 10,
  MIN_HASH_VALUE = 3,
  MAX_HASH_VALUE = 65
};

/* maximum key range = 63, duplicates = 0 */

class PerfectKeywordHash {
 private:
  static inline unsigned int Hash(const char* str, int len);

 public:
  static inline Token::Value GetToken(const char* str, int len);
};

inline unsigned int PerfectKeywordHash::Hash(const char* str, int len) {
  DCHECK_LT(str[1] + 1, 129);
  DCHECK_LT(str[0], 129);
  static const unsigned char asso_values[129] = {
      66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66,
      66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66,
      66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66,
      66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66,
      66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66,
      66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 31, 12, 22, 3,  9,
      0,  28, 66, 10, 27, 66, 49, 38, 21, 16, 0,  66, 1,  9,  8,  35, 0,
      30, 28, 17, 33, 66, 66, 66, 66, 66, 66};
  return len + asso_values[static_cast<unsigned char>(str[1] + 1)] +
         asso_values[static_cast<unsigned char>(str[0])];
}

static const unsigned char kPerfectKeywordLengthTable[128] = {
    0, 0, 0, 3, 4, 2, 6, 6, 8, 6, 7, 8, 3, 10, 5,  3, 7, 5, 9, 7,  3, 4,
    4, 5, 3, 4, 5, 5, 2, 4, 8, 3, 6, 7, 7, 9,  10, 6, 4, 5, 2, 10, 8, 6,
    5, 5, 2, 6, 5, 5, 6, 4, 3, 0, 0, 0, 0, 0,  0,  0, 0, 4, 0, 0,  5, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0, 0, 0, 0, 0,  0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0, 0, 0, 0, 0,  0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0, 0, 0};

static const struct PerfectKeywordHashTableEntry kPerfectKeywordHashTable[128] =
    {{"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"for", Token::kFor},
     {"void", Token::kVoid},
     {"do", Token::kDo},
     {"public", Token::kFutureStrictReservedWord},
     {"return", Token::kReturn},
     {"function", Token::kFunction},
     {"delete", Token::kDelete},
     {"default", Token::kDefault},
     {"debugger", Token::kDebugger},
     {"set", Token::kSet},
     {"debugpoint", Token::kDebugPoint},
     {"super", Token::kSuper},
     {"var", Token::kVar},
     {"private", Token::kFutureStrictReservedWord},
     {"false", Token::kFalseLiteral},
     {"protected", Token::kFutureStrictReservedWord},
     {"package", Token::kFutureStrictReservedWord},
     {"try", Token::kTry},
     {"true", Token::kTrueLiteral},
     {"this", Token::kThis},
     {"throw", Token::kThrow},
     {"new", Token::kNew},
     {"null", Token::kNullLiteral},
     {"break", Token::kBreak},
     {"const", Token::kConst},
     {"in", Token::kIn},
     {"enum", Token::kEnum},
     {"continue", Token::kContinue},
     {"get", Token::kGet},
     {"export", Token::kExport},
     {"extends", Token::kExtends},
     {"finally", Token::kFinally},
     {"interface", Token::kFutureStrictReservedWord},
     {"instanceof", Token::kInstanceOf},
     {"import", Token::kImport},
     {"case", Token::kCase},
     {"catch", Token::kCatch},
     {"if", Token::kIf},
     {"implements", Token::kFutureStrictReservedWord},
     {"accessor", Token::kAccessor},
     {"switch", Token::kSwitch},
     {"async", Token::kAsync},
     {"while", Token::kWhile},
     {"of", Token::kOf},
     {"typeof", Token::kTypeOf},
     {"using", Token::kUsing},
     {"yield", Token::kYield},
     {"static", Token::kStatic},
     {"else", Token::kElse},
     {"let", Token::kLet},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"with", Token::kWith},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"await", Token::kAwait},
     {"class", Token::kClass},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier},
     {"", Token::kIdentifier}};

inline Token::Value PerfectKeywordHash::GetToken(const char* str, int len) {
  if (base::IsInRange(len, MIN_WORD_LENGTH, MAX_WORD_LENGTH)) {
    unsigned int key = Hash(str, len) & 0x7f;

    DCHECK_LT(key, arraysize(kPerfectKeywordLengthTable));
    DCHECK_LT(key, arraysize(kPerfectKeywordHashTable));
    if (len == kPerfectKeywordLengthTable[key]) {
      const char* s = kPerfectKeywordHashTable[key].name;

      while (*s != 0) {
        if (*s++ != *str++) return Token::kIdentifier;
      }
      return kPerfectKeywordHashTable[key].value;
    }
  }
  return Token::kIdentifier;
}

}  // namespace internal
}  // namespace v8

#endif  // V8_PARSING_KEYWORDS_GEN_H_
