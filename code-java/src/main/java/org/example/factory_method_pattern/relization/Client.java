package org.example.factory_method_pattern.relization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/26 12:56
 */
public class Client {
    public static void main(String[] args) {
        Factory factory = new BenzFactory();
        Car benz = factory.produceCar();
        benz.drive();

        System.out.println("=========================");

        BMWFactory bmwFactory = new BMWFactory();
        Car bmw = bmwFactory.produceCar();
        bmw.drive();
    }
}
