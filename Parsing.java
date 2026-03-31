//Type Conversion and Sum in java
import java.util.*;
class Main {
    public static void main(String[] args) {
        String str = "10,20,30";
        String[] ppy = str.split(",");
        int sum = 0;
        for(int i=0; i<ppy.length; i++){
            sum += Integer.parseInt(ppy[i]);
        }
        System.out.println(sum);
    }
}

//output:
//60
