#pragma once
#include <SDL.h>

class Game
{
public:
  Game();
  ~Game();
  int exec();
  bool tick();
  void draw();
  const static auto Width = 1280;
  const static auto Height = 720;
  const static auto DiamondWidth = 64;
  const static auto DiamondHeight = 64;
private:
  SDL_Window *window;
  SDL_Renderer *renderer;
  SDL_Texture *diamonds;
  static const auto ColorsNum = 10;
  static int diamondColorsList[ColorsNum][3];
  int field[Width / DiamondWidth][Height / DiamondHeight];
  int selectedX = -1;
  int selectedY = -1;
  unsigned ticks = 0;
  void findAndRemoveLines();
  bool checkHoles();
};
