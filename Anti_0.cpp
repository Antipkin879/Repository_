#include <iostream>
#include <map>
#include <functional>
using namespace std;
// Глобальные переменные
double A; // Первое число
double B; // Второе число
// Функция для ввода первого числа
void EnterFirstNumber() {
    
}
// Функция для ввода второго числа
void EnterSecondNumber() {
    
}
// Функция для выполнения операции сложения
void PerformAddition() {
    double result = A + B;
    cout << "Результат A + B: " << result << endl;
}
// Функция для выполнения операции вычитания
void PerformSubtraction() {
    
}
// Структура меню
struct MenuItem {
    string title;
    function<void()> action;
};
int main() {
    map<int, MenuItem> menu = {
        {1, {"Ввести первое число A", EnterFirstNumber}},
        {2, {"Ввести второе число B", EnterSecondNumber}},
        {3, {"Выполнить операцию сложения A + B", PerformAddition}},
        {4, {"Выполнить операцию вычитания A - B", PerformSubtraction}},
        {5, {"Выход", []() { cout << "© 2025 First Name LastName" << endl; exit(0); }}}
    };
    int choice = 0;
    while (true) {
        cout << "Меню:" << endl;
        for (const auto& item : menu) {
            cout << "Задача " << item.first << ". " << item.second.title << endl;
        }
        cout << "Введите ваш выбор: ";
        cin >> choice;
        if (menu.find(choice) != menu.end()) {
            menu[choice].action();
        } else {
            cout << "Некорректный ввод." << endl;
        }
        cout << endl;
    }
    return 0;
}