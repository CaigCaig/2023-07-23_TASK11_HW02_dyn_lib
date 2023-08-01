#include <iostream>
#include <Windows.h>
#include "Leaver.h"

using namespace std;

#ifdef LEAVERDYNAMICLIBRARY
#define LEAVERLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBRARY_API __declspec(dllimport)
#endif

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    DynamicLeaver::Leaver leave;
    string name;
    cout << "Введите имя: ";
    cin >> name;
    cout << leave.leave(name);
    system("pause");
}
