package org.example.adapter_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 21:49
 */
public class ConcreteDog implements Dog{
    @Override
    public void woof() {
        System.out.println("汪汪叫！");
    }
}
