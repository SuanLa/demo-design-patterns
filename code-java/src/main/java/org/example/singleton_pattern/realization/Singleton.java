package org.example.singleton_pattern.realization;

import java.util.ArrayList;
import java.util.List;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/26 21:02
 */
public class Singleton {

    private static final List<Singleton> list;

    static {
        list  = new ArrayList<>(3);
    }


    public Singleton(Singleton singleton) {
        list.add(singleton);
    }

    public static List<Singleton> getInstance() {
        return list;
    }
}
