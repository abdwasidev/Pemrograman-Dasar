#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 printf("Ukuran Karakter = %d byte\n",sizeof(char));
 printf("Ukuran Integer = %d byte\n",sizeof(int));
 printf("Ukuran Long integer = %d byte\n",sizeof(long int));
 printf("Ukuran Float = %d byte\n",sizeof(float));
 printf("Ukuran Double = %d byte\n",sizeof(double));
 printf("Ukuran Long double = %d byte\n",sizeof(long double));

  system("PAUSE");
  return 0;
}
