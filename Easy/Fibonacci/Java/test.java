import java.lang.*;
public class test{

    public static void main(String[] args){
        for(int i = 0; i < 10000; i++){
            double a = Math.random() * 100  ;
            if(a>100) System.out.println(a);
        }
    }
}
