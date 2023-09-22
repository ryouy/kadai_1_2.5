import java.util.*;

public class Simulator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[][] in = new int[m][1+1];
        for (int i=0; i<m; i++) {
            in[i][0] = sc.nextInt();
            in[i][1] = sc.nextInt();}
        Station gasStation = new Station(n);
        List<Integer> finished = gasStation.simulate(in);
        for (int car:finished) {System.out.println(car);
        }
    }
}

class Station {
    private PriorityQueue<Car>[] queues;
    private List<Integer> finished;

    private int n;
    public Station(int n) {
        this.n = n;
        queues = new PriorityQueue[n];
        finished = new ArrayList<>();
        for (int i=0; i<n; i++) {queues[i] = new PriorityQueue<>();}}

    public void add(int Num) {
        int best = 0;
        for (int i=1; i<n; i++) {
            if (queues[i].size() < queues[best].size()) {best = i;
            } else if (queues[i].size()==queues[best].size() && i < best) {best = i;}}
        queues[best].add(new Car(Num));
    }

    public void finRefu(int lanes) {
        Car car = queues[lanes].poll();
        //like pop method
        finished.add(car.getNum());
        if (!queues[lanes].isEmpty()) {
            //null
            queues[lanes].peek().setTime(car.getTime()+1);
        }
    }

    public List<Integer> simulate(int[][] input) {
        for (int[] info : input) {
            if (info[0] == 0) {
                finRefu(info[1]-1);
            } else {
                add(info[1]);
                queues[0].peek().setTime(0);
                //get
            }
        }return finished;
    }

    private static class Car implements Comparable<Car> {
        private int num;
        private int refu;





        public Car(int num) {this.num = num;}
        public int compareTo(Car hoka) {
            if (refu == hoka.refu) {
                return Integer.compare(num, hoka.num);
            }else{
                return Integer.compare(refu, hoka.refu);
            }
        }
        public int getNum() {return num;}
        public int getTime() {return refu;}
        public void setTime(int refu) {this.refu = refu; }
    }
}


