public class SimpleNode {
    private int key;
    private SimpleNode next;

    public SimpleNode(int key) {
        this.key = key;
        this.next = null;
    }

    public int getKey() {
        return key;
    }

    public SimpleNode getNext() {
        return next;
    }

    public void setNext(SimpleNode next) {
        this.next = next;
    }
}