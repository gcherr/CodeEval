#include <stdio.h>

void getDir(int x, int y);

int main(int argc, char** argv){
   FILE* in = fopen(argv[1], "r");
   int x1, x2, y1, y2, xres, yres;
   while (fscanf(in, "%d %d %d %d \n", &x1, &y1, &x2, &y2) != EOF ){
      xres = x2 - x1;
      yres = y2 - y1;

      getDir(xres, yres);

      printf("\n");
   }  
   return 0;
}

//prints the appropriate direction based on x & y inputs
void getDir(int x, int y){
   if(x == 0 && y == 0){ //same point
      printf("here");
   }
   else if(x == 0){ //strictly north/south
      if(y > 0){
         printf("N");
      }
      else if(y < 0){
         printf("S");
      }
   }
   else if(y == 0){ //strictly east/west
      if(x > 0){
         printf("E");
      }
      else if(x < 0){
         printf("W");
      }
   }
   else if(x > 0){ // NE or SE
      if(y > 0){
         printf("NE");
      }
      else if(x > 0 && y < 0){
         printf("SE");
      }
   }
   else if(x < 0){ // NW or SW
      if(y > 0){
         printf("NW");
      }
      else if(x < 0 && y < 0){
         printf("SW");
      }
   }
}


