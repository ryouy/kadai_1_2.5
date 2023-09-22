public class DequeImplByDLL implements Deque {
    private SimpleDoublyLinkedList list;
    private int n; // the number of elements in the deque

    public DequeImplByDLL() {
        list = new SimpleDoublyLinkedList();
        n = 0;
    }

    public void insertFront(int key) {
        list.addFront(key);
        n++;
    }

    public void insertBack(int key) {
        list.addBack(key);
        n++;
    }

    public void removeFront() {
        if (empty()) {

        } else {
            list.removeFront();
            n--;
        }
    }

    public void removeBack() {
        if (!empty()) {
            list.removeBack();
            n--;
        }
    }

    public int front() {
        if (!empty()) {
            return list.front();
        }
        return -1;
    }

    public int back() {
        if (!empty()) {
            return list.back();
        }
        return -1;
    }

    public int size() {
        return n;
    }

    public boolean empty() {
        return n == 0;
    }
}
