#include <cstdio>

int main(){
    int a;
    scanf("%d",&a);
    printf("wo du qu shu zi shi %d\n",a); //我读取的数字是

    //读取的浮点数
    float b;
    scanf("%f",&b);
    printf("wo du qu float shu zi shi %f\n",b); //我读取的float数字是

    //读取的浮点数
    double c;
    scanf("%lf",&c);
    printf("wo du qu double shu zi shi %lf\n",c); //我读取的float数字是

    //同时读取三个数字
    int d1,d2,d3;
    scanf("%d%d%d",&d1,&d2,&d3);
    printf("%d %d %d",d1,d2,d3);

    return 0;
}
