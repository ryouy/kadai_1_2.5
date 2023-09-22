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