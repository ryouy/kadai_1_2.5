class SimpleNode {
    private int k;
    private SimpleNode prev;
    private SimpleNode next;
    SimpleNode(int k) {
        this.k = k;
        this.prev = null;
        this.next = null;
    }
    int getKey() {
        return k;
    }
    void setP(SimpleNode prev) {
        this.prev = prev;
    }
    void setN(SimpleNode next) {
        this.next = next;
    }
    SimpleNode getPrev() {
        return prev;
    }
    SimpleNode getNext() {
        return next;
    }
}