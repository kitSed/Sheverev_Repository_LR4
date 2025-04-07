#include <iostream>
#include <cmath>
#include <string> 
#include <algorithm>
#include <ctime>
#include <map>
#include <functional>

using namespace std;

int a, b, c, x1, x2, d;

bool UserInput(string input)
{
    if (input.empty()) return false;

    try
    {
        int number = stoi(input);
    }
    catch(...)
    {return false;}
    return true;
}

void EnterNumber (int& varLink, string label)
{
    string str_input;
    cout << label << " = ";
    getline(cin, str_input);
    while(!UserInput(str_input))
    {
        cout << label << " = ";
        getline(cin, str_input);
    }
    varLink = stoi(str_input);
}

void coofitient_a_of_the_quadratic_equation()
{
    EnterNumber(a, "Input cooficient a of a quadratic equation");
}

void coofitient_b_of_the_quadratic_equation()
{

}

void coofitient_c_of_the_quadratic_equation()
{

}

void calculation_of_discriminant()
{

}

void calculating_the_roots_of_the_equation()
{

}

struct MenuItem
{
    string title;
    function<void()> action;
};

int main()
{
    map<int, MenuItem> menu = {
        {1, {"Ввод коэфицента а квадратного уравнения", coofitient_a_of_the_quadratic_equation}},
        {2, {"Ввод коэфицента а квадратного уравнения", coofitient_b_of_the_quadratic_equation}},
        {3, {"Ввод коэфицента а квадратного уравнения", coofitient_c_of_the_quadratic_equation}},
        {4, {"Вычисление дискриминанта", calculation_of_discriminant}},
        {5, {"Нахождение корней уравнения", calculating_the_roots_of_the_equation}},
    };

    int choise = 0;

    while(true)
    {
        cout << "Меню:" << endl;
        for (const auto& item : menu)
        {
            cout << "Задача " << item.first << ". " << item.second.title << endl;
        }
        cout << "0. Выход" << endl;
        cout << "Введите номер пункта: ";
        cin >> choise;
        
        if (choise == 0)
        {
            cout << "@ 2025 Nikita Dmitrievich" << endl;
        }
        if (menu.find(choise) != menu.end())
        {
            menu[choise].action();
        }
        else
        {
            cout << "Некоректный ввод.";
        }
        cout << endl;
    }
    return 0;
}