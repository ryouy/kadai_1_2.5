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