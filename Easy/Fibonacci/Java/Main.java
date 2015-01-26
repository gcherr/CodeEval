import java.io.*;
import java.util.Scanner;
import static java.lang.System.*;
import java.lang.Integer;

public class Main{
   static int fib(int base){
      if (base <= 1)
         return base;
      else
         return (fib(base-1) + fib(base-2)); 
   }
   public static void main(String[] args){
      try {
         Scanner infile = new Scanner (new File(args[0]));
         while(infile.hasNextLine()){
            String line = infile.nextLine();
            out.printf("%d\n",fib(Integer.parseInt(line)));
         }
         infile.close();
         exit(0);
      } catch (IOException error){
         err.printf("%s%n", error.getMessage());
         exit(1);
      }
   }
}