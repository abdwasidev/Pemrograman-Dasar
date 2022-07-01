#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int x,y;
 float z;
 x = 5;
 y = 8 - x++;
 printf("Contoh\n 1: Nilai x = %d | y = &d\n", x, y);
 
 x = 5;
 y = 8 - ++x;
 printf("Contoh\n 2: Nilai x = %d | y = &d\n", x, y);
 
 x = 5;
 y = 8 - x--;
 printf("contoh 3: Nilai x = %d | y = %d\n", x, y);
 
 x = 5;
 y = 8 - --x;
 printf("contoh 4: Nilai x = %d | y = %d\n", x, y);

  
  system("PAUSE");
  return 0;
}
