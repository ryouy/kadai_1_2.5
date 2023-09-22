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


class PointMovingApplication{
 public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 Point pt = new Point();
 int Q = sc.nextInt();
 for ( int i = 0; i < Q; i++ ){
 int dx = sc.nextInt();
 int dy = sc.nextInt();
 pt.move(dx, dy);
 //System.out.println("(" + pt.getX() + ", " + pt.getY() + ")");
 }
 System.out.println("(" + pt.getX() + ", " + pt.getY() + ")");
 }
}