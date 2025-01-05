#include <iostream>
#include <conio.h> // برای گرفتن ورودی کلیدها
using namespace std;

// ابعاد زمین بازی
const int ROWS = 10;
const int COLS = 10;

// نقشه بازی
char board[ROWS][COLS];

// مکان بازیکن
int playerX = 1, playerY = 1;

// توابع
void initializeBoard() {
    // پر کردن نقشه با '-'
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            board[i][j] = '-';
        }
    }
    // افزودن بازیکن
    board[playerX][playerY] = 'S';
    // بلوک ثابت
    board[2][2] = 'XX';
    board[4][4] = 'XX';
    // دشمن
    board[3][6] = 'E';
}

void displayBoard() {
    // نمایش نقشه
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

void movePlayer(char move) {
    // حذف بازیکن از مکان فعلی
    board[playerX][playerY] = '-';

    // به‌روزرسانی موقعیت بازیکن بر اساس ورودی
    if (move == 'w' && playerX > 0) playerX--;
    else if (move == 's' && playerX < ROWS - 1) playerX++;
    else if (move == 'a' && playerY > 0) playerY--;
    else if (move == 'd' && playerY < COLS - 1) playerY++;

    // افزودن بازیکن به مکان جدید
    board[playerX][playerY] = 'S';
}

int main() {
    char input;
    bool running = true;

    // مقداردهی اولیه نقشه
    initializeBoard();

    while (running) {
        // نمایش نقشه
        system("cls"); // پاک کردن صفحه
        displayBoard();

        // دریافت حرکت از بازیکن
        cout << "Use W (up), A (left), S (down), D (right) to move. Press Q to quit." << endl;
        input = _getch(); // گرفتن کلید ورودی

        if (input == 'q' || input == 'Q') {
            running = false; // خروج از بازی
        } else {
            movePlayer(input); // حرکت بازیکن
        }
    }

    cout << "Game Over!" << endl;
    return 0;
}
