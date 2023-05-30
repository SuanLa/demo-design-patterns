package org.example.strategy_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/29 14:13
 */
public class LanguageBook extends Book{
    @Override
    public double discount(double price,int number) {
        return (price-2)*number;
    }
}
