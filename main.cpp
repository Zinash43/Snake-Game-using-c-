/* Snake Game using C++
developed by AMU 2015 BATCH SOFTWARE ENGINEERING STUDENTS
  APPROVED BY:-Miss Yitayish Lema
November 2024 */


// required header file
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

// height and width of the boundary
const int width = 80;
const int height = 20;

// Snake head coordinates of snake (x-axis, y-axis)
int x, y;
// Food coordinates
int fruitCordX, fruitCordY;
// variable to store the score of he player
int playerScore;
// Array to store the coordinates of snake tail (x-axis,
// y-axis)
int snakeTailX[100], snakeTailY[100];
// variable to store the length of the sanke's tail
int snakeTailLen;
// for storing snake's moving snakesDirection
enum snakesDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
// snakesDirection variable
snakesDirection sDir;
// boolean variable for checking game is over or not
bool isGameOver;

// Function to initialize game variables
void GameInit()
{
    isGameOver = false;
    sDir = STOP;
    x = width / 2;
    y = height / 2;
    fruitCordX = rand() % width;
    fruitCordY = rand() % height;
    playerScore = 0;
}

// Function for creating the game board & rendering



// Function to set the game difficulty level
int SetDifficulty()
{
    int dfc, choice;
    cout << "\nSET DIFFICULTY\n1: Easy\n2: Medium\n3: hard "
            "\nNOTE: if not chosen or pressed any other "
            "key, the difficulty will be automatically set "
            "to medium\nChoose difficulty level: ";
    cin >> choice;
    switch (choice) {
    case '1':
        dfc = 50;
        break;
    case '2':
        dfc = 100;
        break;
    case '3':
        dfc = 150;
        break;
    default:
        dfc = 100;
    }
    return dfc;
}
