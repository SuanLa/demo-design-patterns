package org.example.iterator_pattern.realization;

import java.util.ArrayList;
import java.util.List;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 14:28
 */
public class Client {
    public static void main(String[] args) {
        List<Student> list = new ArrayList<>();

        list.add(new Student("张三","男"));
        list.add(new Student("李四","女"));
        list.add(new Student("王五","男"));
        list.add(new Student("赵六","女"));
        list.add(new Student("法拉","男"));

        Class clazz = new CurrentClass(list);
        Iterator iterator = clazz.createIterator();
        Student first = (Student) iterator.first();
        System.out.println(first);

        iterator.next();
        Student currented = (Student) iterator.currentItem();
        System.out.println(currented);

        iterator.next();
        System.out.println(iterator.hasNext());

        iterator.next();
        Student student = (Student) iterator.next();
        System.out.println(student);

        System.out.println(iterator.hasNext());
    }
}
