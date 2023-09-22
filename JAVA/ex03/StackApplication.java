import java.util.Scanner;
class Stack{

    static int [] array  = new int [100];
    //array = new int [100];
    private int cnt=0;
    private int ret;
    public void push(int num){
        array[cnt]=num;
        cnt++;
    }

    public int pop(){
        ret = array[cnt-1];
        array[cnt]=0;
        cnt--;
        return ret;
    }
}

class StackApplication{
 public static void main(String[] args){
 Stack st = new Stack();
 Scanner sc = new Scanner(System.in);
 while( true ){
 int x = sc.nextInt();
 if ( x < 0 ) break;
 if (x==0) System.out.println(st.pop());
 else st.push(x);
 }
 }
}