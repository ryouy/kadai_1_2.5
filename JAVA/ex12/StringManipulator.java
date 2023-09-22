import java.util.Scanner;

public class StringManipulator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // Read String
        String str = scanner.nextLine();
        // Read Num
        int num = Integer.parseInt(scanner.nextLine());
        // Excute
        int i = 0;
        while (i < num) {
            String directions = scanner.nextLine();
            String[] onedir = directions.split(" ");

            String Siji = onedir[0];
            int f = Integer.parseInt(onedir[1]);
            int s = Integer.parseInt(onedir[2]);

            if (Siji.equals("print")) {
                String subString = str.substring(f, s + 1);
                System.out.println(subString);
            } else if (Siji.equals("replace")) {
                String replacement = onedir[3];
                str = str.substring(0, f) + replacement + str.substring(s + 1);
            } else if (Siji.equals("reverse")) {
                String reversing = reversing(f, s, str);
                str = str.substring(0, f) + reversing + str.substring(s + 1);
            }
            i++;
        }
    }

    static String reversing(int f, int s, String str) {
        StringBuilder done = new StringBuilder(str.substring(f, s + 1));
        String res = done.reverse().toString();
        return res;
    }
}
