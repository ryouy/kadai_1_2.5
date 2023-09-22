
public class StackImplByDeque implements Stack {
    private Deque deque;

    public StackImplByDeque() {
        this.deque = new DequeImplByDLL();
    }

    public void push(int x) {
        deque.insertBack(x);
    }

    public int pop() {
        int top = top();
        if (top == -1) {

        } else {
            deque.removeBack();
        }
        return top;
    }

    public int top() {
        return deque.back();
    }

    public int size() {
        return deque.size();
    }

    public boolean empty() {
        return deque.empty();
    }
}
