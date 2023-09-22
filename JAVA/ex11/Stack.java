import java.util.LinkedList;

public class Stack {
  private LinkedList<Integer> stack;
  private int maxSize;

  public Stack(int maxSize) {
    stack = new LinkedList<>();
    this.maxSize = maxSize;
  }

  public void push(int n) throws StackOverflowException {
    if (stack.size() == maxSize) {
      throw new StackOverflowException(n);
    }
    stack.push(n);
  }

  public int pop() throws StackUnderflowException {
    if (stack.size() == 0) {
      throw new StackUnderflowException();
    }
    return stack.pop();
  }

  public boolean isEmpty() {
    return stack.isEmpty();
  }
}
