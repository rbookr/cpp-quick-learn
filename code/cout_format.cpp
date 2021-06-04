/* author: Rainboy email: rainboylvx@qq.com  time: 2021年 04月 22日 星期四 20:52:19 CST */
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e6+5,maxe = 1e6+5; //点与边的数量

int n,m;
/* 定义全局变量 */

int main(){
    int a = 7 ,b = 12,c = 16;
    cout << a <<" "<< b <<" "<< c << endl;
    cout << hex << a <<" "<< b <<" "<< c << endl;
    cout << oct << a <<" "<< b <<" "<< c << endl;
    cout << dec << a <<" "<< b <<" "<< c << endl;

    cout << setw(5) << a << endl;
    cout << setw(10) << b << endl;
    cout << setw(10) << setfill('!')<< b ;

    double d = 0.1234567;
    cout << d << endl;
    cout << fixed << setprecision(4) << d << endl; //四舍五入
    //cout << setprecision(4) << d << endl; //不用fixed
    cout << d << endl;
    cout << setprecision(3) ;
    cout << d << endl;

    cout << setprecision(10) << d << endl; //10位

    cout << defaultfloat << d << endl;

    return 0;
}
