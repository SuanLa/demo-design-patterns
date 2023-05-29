package org.example.strategy_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/29 14:14
 */
public class ComputerBook  extends Book{
    @Override
    public double discount(double price,int number) {
        return price*0.9*number;
    }
}
