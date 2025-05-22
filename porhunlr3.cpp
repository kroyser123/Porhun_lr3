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
    cout << "Введённый символ: " << ch 
         << " (код: " << static_cast<int>(ch) << ")" << endl;
}

// Функция для вывода предыдущего символа
void printPrevChar(char ch) {
    cout << "Предыдущий символ: " << static_cast<char>(ch - 1)
         << " (код: " << static_cast<int>(ch - 1) << ")" << endl;
}

// Функция для вывода следующего символа
void printNextChar(char ch) {
    cout << "Следующий символ: " << static_cast<char>(ch + 1)
         << " (код: " << static_cast<int>(ch + 1) << ")" << endl;
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