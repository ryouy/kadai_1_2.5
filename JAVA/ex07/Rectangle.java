public class Rectangle implements Comparable<Rectangle> {
    private Point pp1;
    private Point pp2;
    public Rectangle(Point pp1, Point pp2) {
        this.pp1 = pp1;
        this.pp2 = pp2;
    }

    public int getArea() {
        int width = Math.abs(pp2.getX() - pp1.getX());
        int height = Math.abs(pp2.getY() - pp1.getY());
        return width * height;
    }
    @Override
    public int compareTo(Rectangle other) {
        return Integer.compare(this.getArea(), other.getArea());
    }
}
