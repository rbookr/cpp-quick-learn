#include <bits/stdc++.h>    //万能头文件
using namespace std;
typedef long long ll;

int main(){
    int a; //定义一个变量
    cin >> a;//输入一个值
    if( a >= 60)    //if只能控制后面的一句话
    {
        if( a > 80)
            printf("a > 80\n");
        printf("> 60\n");
    }
    return 0;
}
