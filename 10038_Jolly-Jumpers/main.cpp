#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    int n, a, b, i, diff;
    string jolly;
    while (cin >> n >> a) {
        int arr[n-1] = {0};
        jolly = "Jolly";
        i = n;
        while (--i) {
            cin >> b;
            diff = abs(a-b);
            if (diff >= n) jolly = "Not jolly";
            else arr[diff-1] = 1;
            a = b;
        }
        if (jolly == "Jolly") {
            for(i = 0; i < n-1; i++) {
                if (arr[i]==0) {
                    jolly = "Not jolly";
                    break;
                }
            }
        }
        cout << jolly << endl;
    }
}
