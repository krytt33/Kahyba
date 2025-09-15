#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    /* Задача N1
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout <<"Наибольшее число: " << a;
    }
    else if(b>a){
        cout<< "Наибольшее число: " << b;
    }
    else {
        cout << "Числа равны";
    }
    */

    /* Задача N2
    double a, b, c;
    cin>> a >> b >> c;
    double d;
    d = b*b - 4 * a * c;
    if (d == 0) {
        cout <<"Корень уравнения: "<< (-1 * b) / (a * 2);
    }
    else if(d>0){
        cout <<"Первый корень: "<< ((-1 * b) - sqrt(d)) / (a * 2)<<endl;
        cout << "Второй корень: "<< ((-1 * b) + sqrt(d)) / (a * 2);
    }
    else {
        cout << "Корней нет";
    }
    */

    /* Задача N3
    double x1, x2, y1, y2, a, b, c;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    //ax+by+c=0
    a = y1 - y2;
    b = x2 - x1;
    c = x1 * y2 - x2 * y1;
    cout << a << " " << b << " " << c;
    */

    /* Задание N5
    float a, b, c;
    float x, y,d;
    cin >> a >> b >> c;
    cin >> x >> y;
    d = abs(a * x + b * y + c) / sqrt(a * a + b * b);
    cout << fixed << setprecision(3);
    cout << d;*/

    /* 6
    int x1, x2, x3, y1, y2, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    if (((y2 - y1) / (x2 - x1)) == ((y3 - y2) / (x3 - x2)) && (((y2 - y1) / (x2 - x1)) == ((y3 - y1) / (x3 - x1)))) {
        int k = (y2 - y1) / (x2 - x1);
        if (((y1 - (k * x1)) == (y2 - (k * x2))) && ((y1 - (k * x1)) == (y3 - (k * x3)))) {
            cout << "ДА";
        }
    }
    else {
        cout << "НЕТ";
    }*/

    /*
    7
    double a, b, c, x1, x2, y1, y2;
    cin >> a >> b >> c;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    double q,w;
    q = ((-c - a * x1) / b);
    w = ((-c - a * x2) / b);
    if ((y1 >= q && y2 >= w)||(y1 <= q && y2 <= w)) {
        cout << "Да";
    }
    else {
        cout << "Нет";
    }*/

    /*
    8
    double a, b, c, maxi, mini, sred;
    cin >> a >> b >> c;
    maxi = max({ a, b, c });
    mini = min({ a, b, c });
    if (a != maxi && a != mini) {
        sred = a;
    }
    else if (b != maxi && b != mini) {
        sred = b;
    }
    else if (c != maxi && c != mini) {
        sred = c;
    }
    else {
        sred = c;
    }
    cout << "Наибольшее значение: " << maxi << endl;
    cout << "Меньшее, либо равное наибольшему: " << mini << endl;
    cout << "Меньшее, либо равное числу, меньшему либо равному наибольшему: " << sred << endl;
    */
    //9
    double a, b, c;
    cin >> a >> b >> c;
    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);
    cout << a << " " << b << " " << c;
    return 0;
    }







/*
/ Kahyba.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

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
*/