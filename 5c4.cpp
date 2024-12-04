#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int b;
    string N;

    cin >> b >> N;

    double decimal_value = 0.0;

    for (size_t i = 2; i < N.length(); ++i) {
        char digit = N[i];
        int num;
        if (digit >= '0' && digit <= '9') {
            num = digit - '0';
        }
        else {
            num = digit - 'a' + 10;
        }


        decimal_value += num / pow(b, i - 1);
    }


    cout << fixed << setprecision(5) << decimal_value << endl;
    return 0;
}