
import java.io.*;

public class Lab41 {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new FileReader("example.txt"));
            String line;
            System.out.println("Reading file line by line:");
            while ((line = br.readLine()) != null) {
                System.out.println(line);
            }
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
