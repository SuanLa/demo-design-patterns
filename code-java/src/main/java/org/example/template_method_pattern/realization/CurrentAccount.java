package org.example.template_method_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 16:22
 */
public class CurrentAccount extends Bank{
    @Override
    public void calculateInterest() {
        System.out.println("计算活期利息！");
    }
}
