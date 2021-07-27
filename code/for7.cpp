#include <bits/stdc++.h> //万能头文件
using namespace std;

int main(){
    for(int i=1;i<=3;++i){
        cout << i << ": ";
        printf("%d: ",i);
        for(int j=1;j<=i;++j){
            cout << j << " ";
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
