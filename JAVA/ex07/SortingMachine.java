public class SortingMachine {
    public void sort(Point[] pp) {
        int len = pp.length;
        boolean swap;
        for (int i = 0;i < len - 1; i++) {
            swap = false;
            for (int j = 0; j < len - i - 1; j++) {
                if (!pp[j].isSmallerThan(pp[j + 1])) {
                    Point temp = pp[j];
                    pp[j] = pp[j + 1];
                    pp[j + 1] = temp;
                    swap = true;
                }
            }
            if (!swap) {break;}
        }
    }
}
