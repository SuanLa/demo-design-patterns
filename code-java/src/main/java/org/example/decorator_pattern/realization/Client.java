package org.example.decorator_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 15:48
 */
public class Client {
    public static void main(String[] args) {
        Book book = new Book();
        book.borrowBook();
        book.returnBook();
        System.out.println("====================");

        ConcreteIncreaseAble concreteIncreaseAble = new ConcreteIncreaseAble(book);
        concreteIncreaseAble.borrowBook();
        concreteIncreaseAble.returnBook();
        concreteIncreaseAble.freeze();
        concreteIncreaseAble.lose();
    }
}
