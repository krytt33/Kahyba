#include <iostream>
#include <cmath>

using namespace std;

int cot() {
    int a, b;
    cin >> a;
    switch (a) {//������������� �����
    case 10://a=10  ��� ������
        a += 7;//10+7=17
        break;// ��� ���
    case 11:
        a -= 5;//17-5=12
        break;
    default:
        a *= 2;
    }
    cout << a;
    return 0;
}

