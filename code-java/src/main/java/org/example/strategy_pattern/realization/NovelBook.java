package org.example.strategy_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/29 14:14
 */
public class NovelBook extends Book{
    @Override
    public double discount(double price,int number) {
        double sum = price * number;
        return sum-(sum/100D)*10D;
    }
}
