#pragma once

#include "raylib.h"

#define LIGHT_GREEN                                                            \
  CLITERAL(Color) { 0, 228, 48, 100 }

#define LIGHT_BLACK                                                            \
  CLITERAL(Color) { 0, 0, 0, 100 }

enum class TintType { COLOR, HEX };

class Tint {
public:
  TintType type;
  union {
    Color color;
    unsigned int hexValue;
  };

  Tint(Color c) : type(TintType::COLOR), color(c) {}
  Tint(unsigned int h) : type(TintType::HEX), hexValue(h) {}
};