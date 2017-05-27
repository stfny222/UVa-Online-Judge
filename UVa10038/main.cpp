#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, i, a, b, diff, count = 0;
    bool jolly;
    while(cin >> n >> a) {
        cout << "CASE " << ++count << ". n = " << n << endl;
        jolly = true;
        i = n;
        diff = -1;
        while (--i) {
            cin >> b;
            cout << "i: " << i << endl;
            if (abs(a-b) >= n && diff > -1 && abs(abs(a-b)-diff) != 1) jolly = false;
            diff = abs(a-b);
            cout << "a: " << a << ", b: " << b << ", abs: " << abs(a-b) << ", jolly: " << jolly << endl;
            a = b;
        }
        if (jolly) cout << "Jolly"; else cout << "Not jolly";
        cout << endl;
    }
}
