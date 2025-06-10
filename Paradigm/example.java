// Prompt Message : use user defined functional interface instead of  Predicate



import java.util.*;
import java.util.stream.Collectors;

// Custom functional interface
@FunctionalInterface
interface StringSearchStrategy {
    boolean matches(String name);
}

public class NameSearch {

    // Generic search function using the custom strategy
    public static List<String> searchNames(List<String> names, StringSearchStrategy strategy) {
        return names.stream()
                    .filter(strategy::matches)
                    .collect(Collectors.toList());
    }

    // Print the result
    public static void printNames(List<String> names) {
        for (String name : names) {
            System.out.println(name);
        }
    }

    // Factory method to create a strategy that checks if a string starts with the given character
    public static StringSearchStrategy checkStringStartsWithGivenChar(char startChar) {
        return name -> !name.isEmpty() && Character.toLowerCase(name.charAt(0)) == Character.toLowerCase(startChar);
    }

    public static void main(String[] args) {
        List<String> names = Arrays.asList("Sam", "John", "Sara", "Michael", "Steve", "Alice", "susan", "Tom", "Travis");

        char startChar = 's';
        StringSearchStrategy startsWithStrategy = checkStringStartsWithGivenChar(startChar);

        // Execute and print
        List<String> filteredStart = searchNames(names, startsWithStrategy);
        System.out.printf("Names starting with '%c':\n", startChar);
        printNames(filteredStart);

        // Another example for 'M'
        StringSearchStrategy startsWithM = checkStringStartsWithGivenChar('M');
        List<String> filteredM = searchNames(names, startsWithM);
        System.out.printf("Names starting with '%c':\n", 'M');
        printNames(filteredM);
    }
}
