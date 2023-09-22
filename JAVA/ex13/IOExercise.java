import java.io.*;

public class IOExercise {
    public static void main(String[] args) {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        try {
            System.out.println("Enter the number:");
            String x = reader.readLine();
            double num = Double.parseDouble(x);

            double s1 = Math.sqrt(num);
            System.out.println("Square root of " + num + " is " + s1);

            FileOutputStream Output = new FileOutputStream("number.data");
            DataOutputStream dataOutput = new DataOutputStream(new BufferedOutputStream(Output));
            dataOutput.writeDouble(s1);
            dataOutput.close();

            System.out.println("The square root value " + s1 + " is written to the file \"number.data\"");

            FileInputStream fileInput = new FileInputStream("number.data");
            DataInputStream dataInput = new DataInputStream(new BufferedInputStream(fileInput));
            double s2 = dataInput.readDouble();
            dataInput.close();
            System.out.println("The value read from the file \"number.data\" is " + s2);

            if (s1 == s2) {
                System.out.println("Square of " + s2 + " is " + (s2 * s2));
            } else {
                System.out.println(
                        "Error");
            }
        } catch (IOException e) {
            System.out.println("Error");
            e.printStackTrace();
        } catch (NumberFormatException e) {
            System.out.println("Error");
        }
    }
}
