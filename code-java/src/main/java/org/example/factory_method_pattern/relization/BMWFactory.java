package org.example.factory_method_pattern.relization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/26 13:03
 */
public class BMWFactory extends Factory{
    @Override
    public Car produceCar() {
        System.out.println("建造宝马汽车!");
        return new BMW();
    }
}
