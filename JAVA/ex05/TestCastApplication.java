public class TestCastApplication {
    public static void main(String[] args) {
        Point test2 = new MovingPoint(3, 4, 2, 2);
        MovingPoint test1 = new MovingPoint(0, 0, 1, 1);
        MovingPoint test3 = (MovingPoint) test2;

    test1.print();
    test2.print();
    test3.print();

        System.out.println(test1.getDistance(test2));
        System.out.println(test2.getDistance(test3));
    }
}