
#include "stdio.h"

//printf();�ŕ����\�����\

int _hConsole;
//�R���\�[����ʂ��J��
void CreateConsoleWindow()
{
    AllocConsole();
    FILE *fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);
    freopen_s(&fp, "CONIN$", "r", stdin);
}

//�R���\�[�������
void closeConsoleWindow()
{
    //_close(_hConsole);
}
