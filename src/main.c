// machinee, Kalsky [2023]
// develop branch
#include "raylib.h"

//! constants
#define screenWidth 800
#define screenHeight 450


int main() {

  //! variables and start configuration

  Vector2 ballPosition = {
    (float)screenWidth / 2,
    (float)screenHeight / 2,
  };

  // set startup fps
  SetTargetFPS(30);

  InitWindow(screenWidth, screenHeight, "Game");

  while (!WindowShouldClose()) {

    // Update
    //----------------------------------------------------------------------------------
    if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 2.0f;
    if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 2.0f;
    if (IsKeyDown(KEY_UP)) ballPosition.y -= 2.0f;
    if (IsKeyDown(KEY_DOWN)) ballPosition.y += 2.0f;
    //----------------------------------------------------------------------------------

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