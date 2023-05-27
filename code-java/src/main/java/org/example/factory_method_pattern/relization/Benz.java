package org.example.factory_method_pattern.relization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/26 12:57
 */
public class Benz extends Car{
    @Override
    public void drive() {
        System.out.println("驾驶奔驰汽车！");
    }
}
