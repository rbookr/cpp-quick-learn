#include <bits/stdc++.h> //万能头文件
using namespace std;

int main(){
    for(int i=1;i<=10;++i){ //输出1 到 10
        cout << i << " ";
    }
    for(int i=10;i>=1;--i) //这一行没有带括号{}，
        cout << i << " ";  //for与if 一样默认控制下面的一句话
    cout << endl;

    return 0;
}
