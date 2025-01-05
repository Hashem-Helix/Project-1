#include <iostream>
using namespace std;

const int x = 10;
const int y = 10;

char board[x][y];

//function:

void Initialization(){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            board[i][j] = '-';
        }
    } 
}

void Showboard(){
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cout << board[x][y] << " ";
        }
    }
}


int main(){

    char input;

    Initialization();
    Showboard();
    
}