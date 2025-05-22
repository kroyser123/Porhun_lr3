#include <iostream>
using namespace std;

void displayMenu() {
    cout << "\nМеню работы с символами ASCII:\n";
    cout << "1. Ввести символ\n";
    cout << "2. Вывести введенный символ\n";
    cout << "3. Вывести предыдущий символ в таблице ASCII\n";
    cout << "4. Вывести следующий символ в таблице ASCII\n";
    cout << "0. Выход из программы\n";
    cout << "Выберите пункт меню: ";
}

int main() {
    char ch = '\0';
    int choice;
    bool hasCharacter = false;

    do {
        displayMenu();
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Введите символ: ";
                cin >> ch;
                hasCharacter = true;
                cout << "Символ сохранен.\n";
                break;
                
            case 2:
                if(hasCharacter) {
                    cout << "Введенный символ: " << ch 
                         << " (код: " << static_cast<int>(ch) << ")\n";
                } else {
                    cout << "Символ не введен. Пожалуйста, сначала выберите пункт 1.\n";
                }
                break;
                
            case 3:
                if(hasCharacter) {
                    char prev = static_cast<char>(ch - 1);
                    cout << "Предыдущий символ: " << prev 
                         << " (код: " << static_cast<int>(prev) << ")\n";
                } else {
                    cout << "Символ не введен. Пожалуйста, сначала выберите пункт 1.\n";
                }
                break;
                
            case 4:
                if(hasCharacter) {
                    char next = static_cast<char>(ch + 1);
                    cout << "Следующий символ: " << next 
                         << " (код: " << static_cast<int>(next) << ")\n";
                } else {
                    cout << "Символ не введен. Пожалуйста, сначала выберите пункт 1.\n";
                }
                break;
                
            case 0:
                cout << "Выход из программы...\n";
                break;
                
            default:
                cout << "Неверный выбор. Пожалуйста, выберите пункт от 0 до 4.\n";
        }
    } while(choice != 0);

    return 0;
}