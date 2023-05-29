package org.example.strategy_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/29 14:11
 */
@AllArgsConstructor
public class Store {

    private Book book;

    public double discount(double price,int number){
        return book.discount(price,number);
    }
}
