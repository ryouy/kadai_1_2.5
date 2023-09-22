public class BubbleSort implements Strategy {

    public void sort(int[] data) {
        for (int i = 0; i < data.length - 1; i++) {
            for (int j = i + 1; j < data.length; j++) {
                if (data[i] > data[j]) {
                    int a = data[i];
                    data[i] = data[j];
                    data[j] = a;
                }
            }
        }
    }
}