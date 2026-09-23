#include <iostream>
#include <cmath>
#include <Windows.h> 
#pragma execution_character_set("utf-8")
using namespace std;

int main() {
    SetConsoleCP(65001); // устанавливаем кодировку входящего потока данных на UTF-8 
    SetConsoleOutputCP(65001); // устанавливаем кодировку исходящего потока данных на UTF-8
   cout << "1. Сложить 2 числа \n 2. Вычесть первое из второго \n 3. Перемножить два числа \n 4. Разделить первое на второе  \n 5. Возвести в степень N первое число \n 6. Найти квадратный корень из числа \n 7. Найти 1 процент от числа \n 8. Найти факториал из числа \n 9. Выйти из программы \n ";
  
    int v = 0;
    float a, b;

    while (v != 9) {
        cout << "Введите номер операции:";
        cin >> v;

        if (v == 9) break;

        if (v == 6) {
            cout << "Введите число";
            cin >> a;
            cout << "Ответ:" << sqrt(a) << endl;
        }
        else if (v == 7) {
            cout << "Введите число";
            cin >> a;
            cout <<  "Ответ:" << a / 100 << endl;
        }
        else if(v == 8) {
            cout << "Введите число";
            int n, f = 1;
            cin >> n;
            for (int i = 1; i <= n; i++) {
                f *= i;
                cout <<"Ответ:"<< f << endl;
            }
        }
        else {
            cout << "Введите 2 числа:";
            cin >> a >> b;
            if (v == 1) cout << "Ответ:" << a + b << endl;
            if (v == 2) cout << "Ответ:" << b - a << endl;
            if (v == 3) cout << "Ответ:" << a * b << endl;  // Бааам.
            if (v == 4) cout << "Ответ:" << a / b << endl;
            if (v == 5) cout << "Ответ:" << pow(a, b) << endl;
        }
    }

    return 0;
}