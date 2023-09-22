import java.util.LinkedList;

public class Stack implements OpenList {

    LinkedList<Integer> stack;

    public Stack() {
        stack = new LinkedList<>();
    }

    public void push(int n) {
        stack.push(n);
    }

    public int pop() {
        return stack.pop();
    }

    public int pop(int i) {
        return stack.pop();
    }

    public boolean isEmpty() {
        return stack.isEmpty();
    }
}