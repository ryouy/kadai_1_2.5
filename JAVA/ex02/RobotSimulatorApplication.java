import java.util.Scanner;
class TwirlingRobot{
    private int x;
    private int y;
    private int dir;

    public void initialize(int X,int Y,int D){
        x=X;
        y=Y;
        dir=D;
    }
    public void turnLeft(){
        if(dir==0) dir=3;
        else dir--;
    }
    public void turnRight(){
        if(dir==3) dir=0;
        else dir++;
    }
    public void move(){
        if (dir==0) y--;
        if (dir==1) x++;
        if (dir==2) y++;
        if (dir==3) x--;
        if(x>4||x<-4||y>4||y<-4){
        if (dir==0) y++;
        if (dir==1) x--;
        if (dir==2) y--;
        if (dir==3) x++;
        }
    }
    public void printLocation(){
        System.out.println("(" +x+ ", " +y+ ")");
    }

}


class RobotSimulatorApplication{
 public static void main(String[] args){
 Scanner sc = new Scanner(System.in);
 TwirlingRobot tr = new TwirlingRobot();
 tr.initialize(0, 0, 0);
 String commands = sc.next();
 for ( int i = 0; i < commands.length(); i++ ){
 char command = commands.charAt(i);
 if ( command == 'M' ) tr.move();
 else if ( command == 'R' ) tr.turnRight();
 else if ( command == 'L' ) tr.turnLeft();
 }
 tr.printLocation();
 }
}