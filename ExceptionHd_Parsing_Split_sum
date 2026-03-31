//handling exception, parsing, multiple splitting 

import java.util.*;
class Main {
    public static void main(String[] args) {
        String str = "a=10,b=20,c=30";
        String[] ppy = str.split(",");
        
        int sum = 0;
        for(int i=0; i<ppy.length; i++){
            String[] pp = ppy[i].split("=");
            try{
            sum += Integer.parseInt(pp[1]);
            }
            catch(Exception e){
                //System.out.println("Number Format Exception");
            }
        }
        System.out.println(sum);
    }
}

//Output : 60
