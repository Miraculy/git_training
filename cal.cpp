#include <iostream>
using namespace std;

double cal(double a, double b, int c) {
    double result = 0.0;
    if (c == 1) {
        result = a + b;
        return result;
    }else if (c == 2) {
        result = a - b;
        return result;
    }else if (c == 3) {
        result = a * b;
        return result;
    }else if (c == 4) {
        result = a / b;
        return result;
    }
}

int main() {
    double a, b;
    int c;
    cout << "输入两个参与运算的数字，中间使用空格来分开：" << endl;
    cin >> a >> b;
    cout << "输入数字来代表要执行的操作：" << endl << "1）加法" << endl << "2）减法" << endl << "3）乘法" << endl << "4）除法" << endl;
    cin >> c;
    if (c != 1 && c != 2 && c != 3 && c != 4) {
        cout << "没有这个操作" << endl;
        return -1;
    }else if (c == 4 && b == 0.0) {
        cout << "被除数不可为0" << endl;
        return -1;
    }else {
        double result = cal(a, b, c);
        cout << "结果是" << result << endl;
        return 0;
    }
}