
class Animal{

    Animal(){
        System.out.println("I am an Animal");
    }

    Animal(String type){
        System.out.println("Type"+type);
    }


}

class Dog extends Animal{


  Dog(){
    super("Dog");
    System.out.println("I am a Dog");
  }

}

public class main{

     
    public static void main(String[]args){
     

        Dog d1 = new Dog();

        
      
      

    }


}