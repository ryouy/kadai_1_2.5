public class QueueImplByDeque implements Queue {
    private Deque deque;

    public QueueImplByDeque() {
        this.deque = new DequeImplByDLL();
    }

    public void enqueue(int key) {
        deque.insertBack(key);
    }

    public int dequeue() {
        int check = front();
        if (check == -1) {

        } else {
            deque.removeFront();
        }
        return check;
    }

    public int front() {
        return deque.front();
    }

    public int size() {
        return deque.size();
    }

    public boolean empty() {
        return deque.empty();
    }
}
