package org.example.iterator_pattern.realization;

import lombok.AllArgsConstructor;

import java.util.List;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 14:41
 */
public class StudentIterator implements Iterator<Student>{
    private int index;

    private List<Student> students;

    public StudentIterator(CurrentClass currentClass) {
        students = currentClass.getStudents();
        index = 0;
    }

    @Override
    public Student first() {
        return students.get(0);
    }

    @Override
    public Student next() {
        index++;
        return students.get(index);
    }

    @Override
    public boolean hasNext() {
        return !(index==students.size()-1);
    }

    @Override
    public Student currentItem() {
        return students.get(index);
    }
}
