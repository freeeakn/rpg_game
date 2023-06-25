// machinee, Kalsky [2023]
// develop branch
#include "raylib.h"

//! constants
#define screenWidth 800
#define screenHeight 450
#define TargetFPS 60

//! func init
void inputHandler(Vector2 *ballPosition);

int main() {

  //! variables and start configuration

  Vector2 ballPosition = {
    (float)screenWidth / 2,
    (float)screenHeight / 2,
  };

  // set startup fps
  SetTargetFPS(TargetFPS);

  InitWindow(screenWidth, screenHeight, "Game");

  while (!WindowShouldClose()) {

    inputHandler(&ballPosition);

    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("", 190, 200, 20,
             LIGHTGRAY);
    DrawCircleV(ballPosition, 50, MAROON);
    EndDrawing();
  }

  CloseWindow();

  return 0;
}


void inputHandler(Vector2 *ballPosition) {
  ballPosition->x += (IsKeyDown(KEY_RIGHT)) ? 2.0f : 0.0f;
  ballPosition->x -= (IsKeyDown(KEY_LEFT)) ? 2.0f : 0.0f;
  ballPosition->y -= (IsKeyDown(KEY_UP)) ? 2.0f : 0.0f;
  ballPosition->y += (IsKeyDown(KEY_DOWN)) ? 2.0f : 0.0f;
}