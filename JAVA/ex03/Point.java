import java.util.Scanner;
class Point{
private int X=0;
private int Y=0;
static int X_MAX;
public int Y_MAX;
public int X_MIN;
public int Y_MIN;
public void move(int dx, int dy){
    X += dx;
    Y += dy;
    if(X>=X_MAX&&X<=X_MIN)X -= dx;
    if(Y>=Y_MAX&&Y<=Y_MIN)Y -= dy;
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