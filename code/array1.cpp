#include <iostream>
using namespace std;

int main(){
    int a[5];
    for(int i=0;i<=4;++i){ //由键盘输入5个数字
        scanf("%d",&a[i]); // 存到数组里
    }

    printf("array is : ");
    for(int i=0;i<=4;++i){ 
        printf("%d ",a[i]); //输出每个元素并空一格
    }

    return 0;
}
