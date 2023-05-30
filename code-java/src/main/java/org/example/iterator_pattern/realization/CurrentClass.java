package org.example.iterator_pattern.realization;

import lombok.AllArgsConstructor;
import lombok.Getter;

import java.util.List;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 14:37
 */
@Getter
@AllArgsConstructor
public class CurrentClass implements Class{
    private List<Student> students;

    @Override
    public Iterator<Student> createIterator() {
        return new StudentIterator(this);
    }
}
