public class StackOverflowException extends Exception {
    public StackOverflowException(int n) {
        super("Overflow. " + n + "  can not be pushed.");
    }
}
