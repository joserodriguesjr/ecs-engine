#pragma once

#include "color.hpp"

#include "raylib.h"

class Renderer {
public:
  static Renderer &instance();
  virtual ~Renderer(){};

  virtual void init(int width, int height) = 0;
  virtual void clear() = 0;
  virtual void draw() = 0;
  virtual void close() = 0;

  virtual int getScreenHeight(void) = 0;
  virtual int getScreenWidth(void) = 0;

  // Get a random value between min and max (both included)
  virtual int getRandomValue(int min, int max) = 0;

  virtual Texture2D loadTexture2D(const char *texturePath) = 0;
  virtual void unloadTexture2D(Texture2D texture) = 0;

  virtual Image loadNewImage(const char *fileName) = 0;
  virtual void unloadImage(Image image) = 0;

  virtual Image cropImage(Image image, Rectangle rec) = 0;
  virtual Texture2D loadTexture2DFromImage(Image image) = 0;

  virtual void setFPS(int fps) = 0;
  virtual void drawFPS(int posX, int posY) = 0;
  virtual float getDeltaTime() = 0;

  // Texture drawing functions

  // Draw a Texture2D
  virtual void drawTexture(Texture2D texture, int posX, int posY,
                           Tint tint) = 0;
  // Draw a Texture2D with extended parameters
  virtual void drawTextureEx(Texture2D texture, Vector2 position,
                             float rotation, float scale, Tint tint) = 0;
  // Draw a part of a texture defined by a rectangle
  virtual void drawTextureRec(Texture2D texture, Rectangle source,
                              Vector2 position, Tint tint) = 0;
  // Draw a part of a texture defined by a rectangle with 'pro' parameters
  virtual void drawTexturePro(Texture2D texture, Rectangle source,
                              Rectangle dest, Vector2 origin, float rotation,
                              Tint tint) = 0;

  // Draw a color-filled rectangle
  virtual void drawRectangle(int posX, int posY, int width, int height,
                             Tint tint) = 0;
  // Draw a color-filled rectangle
  virtual void drawRectangleRec(Rectangle rec, Tint tint) = 0;
  // Draw a color-filled rectangle with pro parameters
  virtual void drawRectanglePro(Rectangle rec, Vector2 origin, float rotation,
                                Tint tint) = 0;

  // Text drawing functions

  // Draw text (using default font)
  virtual void drawText(const char *text, int posX, int posY, int fontSize,
                        Tint tint) = 0;
  // Measure string width for default font
  virtual int measureText(const char *text, int fontSize) = 0;

  // Check collision between two rectangles
  virtual bool checkCollisionRecs(Rectangle rec1, Rectangle rec2) = 0;
};
