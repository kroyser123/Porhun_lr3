#include <iostream>
using namespace std;

// Функция для ввода символа
char inputChar() {
    char ch;
    cout << "Введите символ: ";
    cin >> ch;
    return ch;
}

// Функция для вывода символа
void printChar(char ch) {
    
}

// Функция для вывода предыдущего символа
void printPrevChar(char ch) {
    
}

// Функция для вывода следующего символа
void printNextChar(char ch) {
    
}

int main() {
    // Ввод символа
    char ch = inputChar();
    
    // Вывод информации о символе
    printChar(ch);
    printPrevChar(ch);
    printNextChar(ch);
    
    return 0;
}