#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "두 수 입력: ";
    cin >> a >> b;

    if (a > b) {
        cout << "더 큰 수: " << a << endl;
    }
    else if (b > a) {
        cout << "더 큰 수: " << b << endl;
    }
    else {
        cout << "두 수는 같습니다." << endl;
    }

    return 0;
}