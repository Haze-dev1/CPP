#include <iostream>
#include <graphics.h>

using namespace std;

int main() {
  // Initialize graphics mode
  initwindow(640, 480);

  // Create a ball
  int ballX = 320;
  int ballY = 240;
  int ballVX = 5;
  int ballVY = 5;

  // Create a paddle
  int paddleX = 320;
  int paddleY = 400;

  // Game loop
  while (true) {
    // Check for keyboard input
    if (kbhit()) {
      int key = getch();
      if (key == 'a') {
        paddleX -= 5;
      } else if (key == 'd') {
        paddleX += 5;
      }
    }

    // Move the ball
    ballX += ballVX;
    ballY += ballVY;

    // Check if the ball hits the left or right wall
    if (ballX < 0 || ballX > 640) {
      ballVX = -ballVX;
    }

    // Check if the ball hits the top or bottom wall
    if (ballY < 0 || ballY > 480) {
      ballVY = -ballVY;
    }

    // Check if the ball hits the paddle
    if (ballX >= paddleX && ballX <= paddleX + 10 && ballY >= paddleY && ballY <= paddleY + 10) {
      ballVY = -ballVY;
    }

    // Draw the ball and paddle
    cleardevice();
    circle(ballX, ballY, 5);
    rectangle(paddleX, paddleY, paddleX + 10, paddleY + 10);

    // Delay for a bit
    delay(10);
  }

  // Close graphics mode
  closegraph();

  return 0;
}