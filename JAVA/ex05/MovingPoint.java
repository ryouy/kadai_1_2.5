
 class MovingPoint extends Point {
    private int px;
    private int py;
    public MovingPoint(int x, int y, int px, int py){
        super(x, y);
        this.px = px;
        this.py = py;
    }
    public void move() {
        x += px;
        y += py;
    }
    public void print() {
        System.out.println("(" + x + ", " + y + ")");
    }
}