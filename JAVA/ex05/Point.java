
 class Point {
    int x;
    int y;
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void print() {
        System.out.println("("+x + ", " + y+")");
    }
    public double getDistance(Point hoka) {
        int dx = x - hoka.x;
        int dy = y - hoka.y;
        return Math.sqrt(dx*dx + dy*dy);
    }
}

