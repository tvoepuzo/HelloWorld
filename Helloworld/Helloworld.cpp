#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int v = 0;
    float a, b;

    while (v != 9) {
        cout << "v: ";
        cin >> v;

        if (v == 9) break;

        if (v == 6) {
            cin >> a;
            cout << sqrt(a) << endl;
        }
        else if (v == 7) {
            cin >> a;
            cout << a / 100 << endl;
        }
        else if (v == 8) {
            int n, f = 1;
            cin >> n;
            for (int i = 1; i <= n; i++) f *= i;
            cout << f << endl;
        }
        else {
            cin >> a >> b;
            if (v == 1) cout << a + b << endl;
            if (v == 2) cout << b - a << endl;
            if (v == 3) cout << a * b << endl;
            if (v == 4) cout << a / b << endl;
            if (v == 5) cout << pow(a, b) << endl;
        }
    }

    return 0;
}