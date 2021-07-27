#include <bits/stdc++.h>    //万能头文件
using namespace std;
typedef long long ll;

int main(){
    int a; //定义一个变量
    scanf("%d",&a); //输入一个值
    if( a >= 60)    //if只能控制后面的一句话
        //下面的if else 形成一句话 ，被上面的if(a>=60) 控制
        if ( a>= 70)
            printf(">= 70\n");
        else
            printf(">=60 ,< 70\n");
    else
        if( a > 30)
            printf("a > 30,a<60\n");
    return 0;
}
