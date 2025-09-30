#include <iostream>

main()
{

   int x1 = 5;
   int x2 = 15;
   int x3 = 20;
   int x4 = 40;

   int allLand1 = x1 + x2;
   int allLand2 = x2 + x1;
   
   int fullLand = x1 + x2 + x3 + x4;
   int allLand  = allLand1 + allLand2;

   
   std ::cout << x1 + x2 << '\n';
   std ::cout << allLand1 << '\n';
   std ::cout << allLand2 << '\n';
   std ::cout << fullLand << '\n';
   std ::cout << allLand << '\n';
   

   return 0;
}
