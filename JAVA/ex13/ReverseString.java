import java.io.IOException;
import java.io.FileInputStream;
import java.io.FileOutputStream;

public class ReverseString {
    public static void main(String[] args) {

        try {
            FileInputStream file1 = new FileInputStream("input.txt");
            FileOutputStream file2 = new FileOutputStream("output.txt");

            byte[] tob = new byte[file1.available()];

            file1.read(tob);
            file1.close();

            file2.write(new StringBuilder(new String(tob)).reverse().toString().getBytes());
            file2.close();
            System.out.println("Completed and check output.txt");

        } catch (IOException e) {
            e.printStackTrace();
        }

    }
}
