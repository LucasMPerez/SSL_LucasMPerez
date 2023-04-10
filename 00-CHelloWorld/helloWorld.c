#include <stdio.h>

int main() {
   FILE *f;
   char *salida = "Hello, World!";
   f = fopen("output.txt", "w");
   fputs(salida, f);
   printf(salida, "&s");
   printf("\n");
   fclose(f);

   return 0;
}
