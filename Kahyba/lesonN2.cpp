#include <iostream>
#include <cmath>

using namespace std;

int couti() {
    int a, b;
    cin >> a >> b;
    if ((bool)(a = b)) {
        a += 7;
        b -= 2;
    }
    cout << a << " " << b;
    return 0;
}

