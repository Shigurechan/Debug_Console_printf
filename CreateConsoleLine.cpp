
#include "stdio.h"

//printf();で文字表示が可能

int _hConsole;
//コンソール画面を開く
void CreateConsoleWindow()
{
    AllocConsole();
    FILE *fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);
    freopen_s(&fp, "CONIN$", "r", stdin);
}

//コンソールを閉じる
void closeConsoleWindow()
{
    //_close(_hConsole);
}
