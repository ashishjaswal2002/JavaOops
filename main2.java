//Abstract Class.

abstract class MotorBike{

    abstract void brake();

     MotorBike(){
        System.out.println("MotorBike is running");
    }

}


class Yamaha extends MotorBike{
   

    
    public void brake(){
        System.out.println("Yamaha Bike braking");
    }



}


public class main2 {
    
 
    public static void main(String[] args) {
        
        Yamaha y1 = new Yamaha();
        y1.brake();
        

    }


}
