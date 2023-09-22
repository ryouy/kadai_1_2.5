public class Directory extends Entity{

public Directory(String name){
this.name = name;
}

 
public int getSize(){
int total = 0;
for ( int i = 0; i < numberOfFile; i++ ){
total += fileList[i].getSize();
}
for ( int i = 0; i < numberOfDirectory; i++ ){
total += directoryList[i].getSize();
}
return total;
}



    }