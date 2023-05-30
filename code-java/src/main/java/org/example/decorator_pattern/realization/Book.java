package org.example.decorator_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 15:50
 */
public class Book implements BookAble{
    @Override
    public void borrowBook() {
        System.out.println("借书！");
    }

    @Override
    public void returnBook() {
        System.out.println("还书！");
    }
}
