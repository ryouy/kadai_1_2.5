public class SimpleListBackwardIterator implements Iterator {
    private SimpleList simpleList;
    private SimpleNode cur;

    public SimpleListBackwardIterator(SimpleList simpleList) {
        this.simpleList = simpleList;
        cur = simpleList.getNil();
        //////////////////
        while (cur.getNext() != simpleList.getNil()) {
            cur = cur.getNext();
        }
    }

    public boolean hasNext() {
        return cur != simpleList.getNil();
    }

    /////////////// have to get prev
    public Object next() {
        Object res = cur;
        cur = gPrev(cur);
        return res;
    }

    private SimpleNode gPrev(SimpleNode node) {
        SimpleNode prev = simpleList.getNil();
        SimpleNode cur = simpleList.getNil().getNext();

        while (cur != node) {
            prev = cur;
            cur = cur.getNext();
        }

        return prev;
    }
}