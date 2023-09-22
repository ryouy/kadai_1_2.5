import java.util.Scanner;

public class PatternFinder {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String source = in.nextLine();
        String check = in.nextLine();
        String connect = source + source;

        if (connect.contains(check))
            System.out.println("Yes");
        else
            System.out.println("No");

    }
}
