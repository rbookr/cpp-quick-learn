#include <iostream>
using namespace std;

int main()
{
   int a = 21;
   int b = 10;
   int c;

   c = a + b;
   printf("Line 1 - c 的值是 %d\n",c);
   c = a - b;
   printf("Line 2 - c 的值是 %d\n",c);
   c = a * b;
   printf("Line 3 - c 的值是 %d\n",c);
   c = a / b;
   printf("Line 4 - c 的值是 %d\n",c);
   c = a % b;
   printf("Line 5 - c 的值是 %d\n",c);

   int d = 10;   //  测试自增、自减
   c = d++;
   printf("Line 6 - c 的值是 %d\n",c);

   d = 10;    // 重新赋值
   c = d--;
   printf("Line 7 - c 的值是 %d\n",c);
   return 0;
}
