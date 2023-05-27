package org.example.adapter_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 21:49
 */
public class ConcreteCat implements Cat{
    @Override
    public void catchMouse() {
        System.out.println("捉老鼠！");
    }
}
