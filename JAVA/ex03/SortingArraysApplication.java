class SortingArraysApplication{
 public static void main(String[] args){
 int[][] arrays = {
 {3, 2, 1},
 {9, 7, 10, 4, 8, 2, 5, 3, 1, 6},
 {7, 2, 3, 2, 2, 1, 1, 1},
 {2, 1},
 {100},
 {888888888, -888888888}
 };
 // my code starts from here

	for(int p=0; p<6; p++){
        for(int i=0; i < arrays[p].length-1; i++){
            for (int j = (arrays[p].length - 1); j > i; j--) {
                if (arrays[p][j-1] > arrays[p][j]) {
                int  temp = arrays[p][j-1];
                arrays[p][j-1] = arrays[p][j];
                arrays[p][j] = temp;
                         }
                     }
                }
	        }
 for ( int i = 0; i < arrays.length; i++ ){
 for ( int j = 0; j < arrays[i].length; j++ ){
 System.out.print(" " + arrays[i][j]);
 }
 System.out.println();
 }
 }
}