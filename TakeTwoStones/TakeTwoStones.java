import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.regex.*;

public class TakeTwoStones {
    public static void main(String[] args) {
            Scanner reader = new Scanner(System.in);
            String i = "";
            while(reader.hasNextLine()) {
                i = reader.nextLine();
                if(Integer.parseInt(i) % 2 != 0 ){
                    System.out.println("Alice");
                } else {
                System.out.println("Bob");
                }
            } 
    }
}