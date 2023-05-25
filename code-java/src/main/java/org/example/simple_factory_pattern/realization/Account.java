package org.example.simple_factory_pattern.realization;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.ToString;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/25 19:56
 */
@AllArgsConstructor
@ToString
public enum Account {
    SIMPLE("A",123456,2),

    VIP("B",123457,1),

    SVIP("C",123458,0);

    private String name;

    private int passwd;

    private int degree;

    public String getName() {
        return name;
    }

    public int getPasswd() {
        return passwd;
    }

    public int getDegree() {
        return degree;
    }

}
