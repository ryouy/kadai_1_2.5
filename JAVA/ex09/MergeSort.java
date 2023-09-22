public class MergeSort implements Strategy {
    public void sort(int[] data) {
        mergeSort(data, 0, data.length);

    }

    static void merge(int[] array, int left, int right, int mid) {
        int left_num = mid - left;
        int right_num = right - mid;

        // ソート（統合）する範囲をleft_arrayとright_arrayに格納
        int[] left_array = new int[left_num + 1];
        int[] right_array = new int[right_num + 1];
        for (int i = 0; i < left_num; i++) {
            left_array[i] = array[left + i];
        }
        for (int i = 0; i < right_num; i++) {
            right_array[i] = array[mid + i];
        }
        // 配列の最後にハイバリューを設定 ※降順の場合はローバリューを設定（Integer.MIN_VALUE）
        left_array[left_num] = Integer.MAX_VALUE;
        right_array[right_num] = Integer.MAX_VALUE;

        // 配列を比較してソート（統合）
        int left_index = 0;
        int right_index = 0;
        for (int i = left; i < right; i++) {
            // 降順の場合は不等号が反対（left_array[left_index] > right_array[right_index]）
            if (left_array[left_index] < right_array[right_index]) {
                array[i] = left_array[left_index];
                left_index++;
            } else {
                array[i] = right_array[right_index];
                right_index++;
            }
        }
    }

    static void mergeSort(int[] array, int left, int right) {
        if (right - left > 1) {
            int mid = (left + right) / 2;
            // 左側を再帰的に分割
            mergeSort(array, left, mid);
            // 右側を再帰的に分割
            mergeSort(array, mid, right);
            // 分割した範囲をソート（統合）
            merge(array, left, right, mid);
        }
    }

}
