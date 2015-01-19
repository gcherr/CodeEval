#include <stdio.h>

int main(int argc, char** argv){
   FILE* in = fopen(argv[1], "r");
   int series, fizz, buzz;
   while (fscanf(in, "%d %d %d \n", &fizz, &buzz, &series) != EOF ){
      int i = 1;
      for (i; i <= series; i++){
         if(i % fizz == 0 && i % buzz == 0)
           printf("FB ");
         else if(i % fizz == 0)
           printf("F ");
         else if(i % buzz == 0)
           printf("B ");
         else
           printf("%d ", i);
      }
      printf("\n");
   }  
   return 0;
}
