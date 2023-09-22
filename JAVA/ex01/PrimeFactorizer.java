import java.util.Scanner; // API to use the Scanner object
class PrimeFactorizer{
 public static void main(String[] args){
 Scanner sc = new Scanner(System.in); // A reference to a Scanner object
 long num = sc.nextLong(); // read an integer from the std. input
 // you code
 System.out.print(num+": ");
 for (int i = 2;i <= num; i++) {
if (num % i == 0) {
num = num/i;
if (num == 1) System.out.print(i);
else System.out.print(i + " ");
i = 1;
             }
        }
System.out.print("\n");
    }
}