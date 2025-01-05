#include <iostream>
using namespace std;

const int x = 10;
const int y = 10;

char board[x][y];
int playerX = 1, platerY = 1;

//function:

void Initialization(){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            board[i][j] = '-';
        }
    } 
    board[playerX][platerY] = 's';
    board[2][2] = 'X';
    board[4][4] = 'X';
    board[3][6] = 'E';
}



void Showboard(){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}


int main(){

    char input;
    bool running = true;
    Initialization();
    Showboard();

}