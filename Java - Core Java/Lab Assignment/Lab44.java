
import java.util.*;

public class Lab44 {
    public static void main(String[] args) {
        List<String> names = Arrays.asList("Rushi", "Jay", "Rushi", "Aman", "Jay");
        System.out.println("Original List: " + names);

        Set<String> uniqueNames = new HashSet<>(names);
        System.out.println("After removing duplicates using HashSet: " + uniqueNames);
    }
}
