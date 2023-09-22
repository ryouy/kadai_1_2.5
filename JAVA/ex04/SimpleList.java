class SimpleList {
    private SimpleNode nil;
    void init() {
        nil = new SimpleNode(-1);
        nil.setN(nil);
        nil.setP(nil);
    }
    SimpleList() {
        init();
    }
    SimpleNode listSearch(int key) {
        SimpleNode w = nil.getNext();
        while (w != nil && w.getKey() != key) {
            w = w.getNext();
        }
        return w;
    }
void printList() {
        SimpleNode w = nil.getNext();
        while (w != nil) {
            System.out.print(w.getKey() + " ");
            w = w.getNext();
        }
        System.out.println();
    }
    void insert(int key) {
        SimpleNode w = new SimpleNode(key);
        w.setN(nil.getNext());
        nil.getNext().setP(w);
        nil.setN(w);
        w.setP(nil);
    }
    void delete(int key) {
        SimpleNode w = listSearch(key);
        if (w != nil) {
            w.getPrev().setN(w.getNext());
            w.getNext().setP(w.getPrev());
        }
    }
}