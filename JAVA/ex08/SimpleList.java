public class SimpleList implements Aggregate {
    private SimpleNode nil;

    public SimpleList() {
        nil = new SimpleNode(-1);
        nil.setNext(nil);
    }

    //////////// nodes
    public SimpleNode getNil() {
        return nil;
    }

    public void insert(int p) {
        SimpleNode maken = new SimpleNode(p);
        maken.setNext(nil.getNext());
        nil.setNext(maken);
    }

    public void delete(int p) {
        SimpleNode prev = nil;
        SimpleNode cur = nil.getNext();

        while (cur != nil) {
            if (cur.getKey() == p) {
                prev.setNext(cur.getNext());
                break;
            }
            prev = cur;
            cur = cur.getNext();
        }
    }

    public Iterator forwardIterator() {
        return new SimpleListForwardIterator(this);
    }

    public Iterator backwardIterator() {
        return new SimpleListBackwardIterator(this);
    }
}