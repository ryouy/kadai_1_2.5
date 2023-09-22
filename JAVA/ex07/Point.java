public class Point implements Relatable {
    private int x;
    private int y;
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public int getX() {return x;}
    public int getY() {return y;}
    @Override
    public boolean isSmallerThan(Relatable hoka) {
        if (hoka instanceof Point) {
            Point hokaPoint = (Point) hoka;
            if (this.x < hokaPoint.getX()) {
                return true;
            } else if (this.x == hokaPoint.getX() && this.y < hokaPoint.getY()) {
                return true;}
        }
        return false;
    }
    public void print() {
        System.out.println("(" + x + ", " + y + ")");
    }
}