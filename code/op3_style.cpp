#include <iostream>
using namespace std;

int main()
{
   int a = 5;
   int b = 20;
   int c;

   if ( a && b )
   {
      printf("Line 1 - 条件为真");
   }
   if ( a || b )
   {
      printf("Line 2 - 条件为真");
   }
   /* 改变 a 和 b 的值 */
   a = 0;
   b = 10;
   if ( a && b )
   {
      printf("Line 3 - 条件为真");
   }
   else
   {
      printf("Line 4 - 条件不为真");
   }
   if ( !(a && b) )
   {
      printf("Line 5 - 条件为真");
   }
   return 0;
}
