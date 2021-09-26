#include <iostream>
using namespace std;

int main(){
    int a = 21;
    int b = 10;
    int c;
    cout << "c: " << c << endl;
    c = a-b;
    cout << "c: " << c << endl;
    c = a*b;
    cout << "c: " << c << endl;
    c = a/b;
    cout << "c: " << c << endl;
    c = a%b;
    cout << "c: " << c << endl;
    int d = 10; // 测试自增加，自减
    c=d++;
    cout << "c: " << c << endl;

    d=10; //重新赋值
    c=d--;
    cout << "c: " << c << endl;

    return 0;
}
