#include <iostream>
#include <iomanip>
#include <conio.h>
#include "ModulesPetrunin.h"

using namespace std;

string copyright()
{
    return "© Петрунін Ігор Вікторович";
}

bool logExp(int a, int b)
{
    return a + 5 >= b;
}

void decHexOutput(int x, int y, int z)
{
    cout << "'x' в десятковій: " << dec << x << endl
         << "'y' в десятковій: " << dec << y << endl
         << "'z' в десятковій: " << dec << z << endl << endl;

    cout << "'x' в шістнацятковій: " << hex << x << endl
         << "'y' в шістнацятковій: " << hex << y << endl
         << "'z' в шістнацятковій: " << hex << z << endl;
}

int main()
{
    system("chcp 65001 & cls");

    int x = 0, y = 0, z = 0;
    char a = '0', b = '0';

    cout << copyright() << endl << endl;

    cout << "Введіть число x: ";
    cin >> x;
    cout << "Введіть число y: ";
    cin >> y;
    cout << "Введіть число z: ";
    cin >> z;
    cout << "Введіть символ №1: ";
    cin >> a;
    cout << "Введіть символ №2: ";
    cin >> b;

    cout << boolalpha
         << "Результат " << a << " + 5 >= " << b << " : " << logExp(a, b) << endl << endl;

    decHexOutput(x, y, z);

    cout << endl << "Результат виразу: " << s_calculation(x, y, z);
    _getch();
    return 0;
}
