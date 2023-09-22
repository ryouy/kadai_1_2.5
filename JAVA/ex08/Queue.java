import java.util.LinkedList;

class Queue implements OpenList {

    private LinkedList<Integer> queue;

    public Queue() {
        queue = new LinkedList<>();
    }

    public void push(int n) {
        queue.add(n);
    }

    public void push() {

    }

    public int pop() {
        return queue.poll();
    }

    public int pop(int n) {
        return queue.poll();
    }

    public boolean isEmpty() {
        return queue.isEmpty();
    }
}