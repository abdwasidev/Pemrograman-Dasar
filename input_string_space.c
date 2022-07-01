#include <stdio.h>
#include <stdlib.h>
main()
{
  char S[70];
  printf("Masukkan nilai String = ");
  gets(S); // scanf("%[^\n]",S);
  printf("Nilai-nilai String yang dimasukkan adalah : %s\n",S);
}
