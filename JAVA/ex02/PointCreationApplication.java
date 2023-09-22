import java.util.Scanner;
class Point{
private int X=0;
private int Y=0;

public void move(int dx,int dy){
    X+=dx;
    Y+=dy;
   // if(X<-100) X-=dx;
    //if(Y>100) Y-=dy;
   if(X>100||X<-100||Y>100||Y<-100){
                X-=dx;
                Y-=dy;
            }
}

public void setX(int x){
X=x;
}

public void setY(int y){
Y=y;
}
public int getX(){
return X;
}

public int getY(){
return Y;

}


}

class PointCreationApplication{
 public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 Point p1 = new Point();
 Point p2 = new Point();
 p1.setX(sc.nextInt());
 p1.setY(sc.nextInt());
 p2.setX(sc.nextInt());
 p2.setY(sc.nextInt());
 System.out.println("(" + p1.getX() + ", " + p1.getY() + ")");
 System.out.println("(" + p2.getX() + ", " + p2.getY() + ")");
 }
}