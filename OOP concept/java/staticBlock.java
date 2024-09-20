public class staticBlock{
    public static void main(String[] args) {
        System.out.print("Hello");
    }
    static{
        System.out.println("Static block code has been worked.");
    }
    //A static method in Java is a method that is part of a class rather than an instance of that class. 
    // Every instance of a class has access to the method. 
    // Static methods have access to class variables (static variables) without using the class's object (instance). 
    // Only static data may be accessed by a static method.
    //A non-static method does not have the keyword static before the name of the method. 
    // • A non-static method belongs to an object of the class 
    // and you have to create an instance of the class to access it. 
    // 


}