#include <bits/stdc++.h>

int main(){
    int a = 7 ,b = 12,c = 16;
    printf("%d %d %d\n",a,b,c); //输出 "7 12 16" 然后换行
    printf("%x %x %x\n",a,b,c); //16进制输出
    printf("%o %o %o\n",a,b,c); //8进制输出

    printf("%5d\n",5); //5个位置，用来输出5
    printf("%10d\n",5);//10个位置，用来输出5，右对齐
    printf("%-10d\n",5);//10个位置，用来输出5，左对齐
    printf("%010d\n",5);

    return 0;
}
