package org.example.factory_method_pattern.relization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/26 13:02
 */
public class BenzFactory extends Factory{
    @Override
    public Car produceCar() {
        System.out.println("建造奔驰汽车！");
        return new Benz();
    }
}
