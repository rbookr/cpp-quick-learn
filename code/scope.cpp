#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n; //全局变量，未初始化，值为0
int arr[10] ;//全局变量 数组 值全部为0

int main(){
    int a; // 局部变量 值是未知
    int b[10] ;//局部变量 数组值未知
    cout << "n = " << n << endl;
    cout << "a = " << a << endl;

    for(int i=0;i<=9;++i){
        cout << "arr["<< i <<  "] = " <<  arr[i] <<endl;
    }

    for(int i=0;i<=9;++i){
        cout << "b["<< i <<  "] = " <<  b[i] <<endl;
    }
    return 0;
}
