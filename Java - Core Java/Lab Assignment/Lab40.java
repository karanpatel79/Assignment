
import java.io.*;

public class Lab40 {
    public static void main(String[] args) {
        try {
            FileWriter writer = new FileWriter("example.txt");
            writer.write("Hello, this is a sample text file.\nWelcome to File Handling in Java!");
            writer.close();
            System.out.println("Data written to file successfully.");

            FileReader reader = new FileReader("example.txt");
            int ch;
            System.out.println("Reading from file:");
            while ((ch = reader.read()) != -1) {
                System.out.print((char) ch);
            }
            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
