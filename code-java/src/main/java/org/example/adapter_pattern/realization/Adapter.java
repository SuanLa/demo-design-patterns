package org.example.adapter_pattern.realization;

import lombok.NoArgsConstructor;
import lombok.Setter;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 21:48
 */
@NoArgsConstructor
@Setter
public class Adapter implements Cat,Dog{
    private Dog dog;

    private Cat cat;

    @Override
    public void catchMouse() {
        System.out.print("猫模仿:");
        dog.woof();
    }

    @Override
    public void woof() {
        System.out.print("狗模仿:");
        cat.catchMouse();
    }
}
