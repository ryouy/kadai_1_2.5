abstract class Entity{


String name;
File[] fileList = new File[100];
Directory[] directoryList = new Directory[100];
int numberOfFile = 0;
int numberOfDirectory = 0;
int size;

 public String getName(){ return name; }



 public void rename(String name){this.name = name; }

abstract int getSize();



public void add(File file){
fileList[numberOfFile++] = file;
 }


 public void add(Directory directory){
directoryList[numberOfDirectory++] = directory;
 }


 public void display(){
for ( int i = 0; i < numberOfFile; i++ ){
 System.out.print(fileList[i].getName() + " ");
}
for ( int i = 0; i < numberOfDirectory; i++ ){
 System.out.print(directoryList[i].getName() + " ");
}
System.out.println();
System.out.println(this.getSize() + " bytes");
 }
 
 
}