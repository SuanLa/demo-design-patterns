package org.example.iterator_pattern.realization;

import java.util.List;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 14:28
 */
public interface Iterator<T> {
    T first();

    T next();

    boolean hasNext();

    T currentItem();
}
