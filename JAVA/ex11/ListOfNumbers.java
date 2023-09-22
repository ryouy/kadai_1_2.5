import java.io.*;

public class ListOfNumbers {
    private static final int SIZE = 10;
    private int[] vector;

    public ListOfNumbers() {
        vector = new int[SIZE];
        for (int i = 0; i < SIZE; i++)
            vector[i] = i;
    }

    public void writeList() {
        System.out.println("Entering try block.");

        try {
            for (int i = 0; i <= SIZE; i++) {
                System.out.println("Value at: " + i + " = " + vector[i]);

                if (i == 10)
                    throw new Exception();
            }
        } catch (Exception e) {
            System.out.println("Entering catch block.");
            System.out.println("Caught ArrayIndexOutOfBoundsException: 10");

        } finally {
            System.out.println("Entering fibally block.");
        }

    }

    public static void main(String[] args) {
        ListOfNumbers l = new ListOfNumbers();
        l.writeList();
    }
}