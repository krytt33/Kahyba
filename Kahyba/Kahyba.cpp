// Kahyba.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    cin >> a;
    /*if ((bool)(a = b)) {
        a += 7;
        b -= 2;
    }
    */
    switch (a) {//множественный выбор
    case 10://a=10  без брейка
        a += 7;//10+7=17
        break;// его нет
    case 11:
        a -= 5;//17-5=12
        break;
    default:
        a *= 2;
    }
    cout << a;
    return 0;
}
