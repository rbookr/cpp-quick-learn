#include <cstdio>

int main(){
    int a; //定义一个整型变量a
    double b,c;
    int x,y,z;
    scanf("%d",&a);
    scanf("%lf%lf",&b,&c);// %lf表示要读取一个double类型的数
    scanf("%d%d%d",&x,&y,&z); // %d表示读取整数
    printf("%d %lf %lf\n",a,b,c); // 输出: 1 1.100000 2.000000
    printf("%d %d %d",x,y,z); //输出: 3 4 5
    return 0;
}
