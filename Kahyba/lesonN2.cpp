#include <iostream>
#include <cmath>

using namespace std;

int cot() {
    int a, b;
    cin >> a;
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

