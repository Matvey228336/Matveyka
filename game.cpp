#include <iostream>
#include <conio.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection{ STOP = 0, Left, Right, Up, Down};
eDirection dir;

void Setup {
    gameOver = false;
    dir = STOP
    x = width / 2 - 1;
    y = height / 2 - 1;
    fruitX = rand () % width;
    fruitX = rand () % height;
    score = 0;
}

void Draw {
    system("cls");

    for (int i = 0; i < width, i++) 
        cout << "#";
    cout << endl;

    for (int i = 0; i < height, i++) {
        for(int j = 0; j < width; j++) 
            if (j == 0 || j == width - 1)
               cout << "#";
            if (i == y && j == x)
               cout << "0";
            else if (i == fruitY && j == fruitX)
               cout << "F";
            else
            cout << " ";
    }
        cout << endl;
    }

    for (int i = 0; i < width, i++) {
        cout << "#";
    cout << endl;
}
void Input {
    if (_kbhit ()) {
        switch (_getch())
        {
        case "a":
        dir = Left;
        break;
        case "d":
        dir = Right;
        break;
        case "w":
        dir = Up;
        break;
        case "s":
        dir = Down;
        break;
        case "x":
        gameOver = true;
        break;
        }


    }


}


void Logic {
        switch (dir)
        {
        case Left:
            x--;
            break;
        case Right:
            x++;
            break;
        case Up:
            y--;
            break;
        case Down:
            y++;
            break;



        }


}


int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Logic();
        Input();
    }
    return 0;
}
