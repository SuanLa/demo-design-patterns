package org.example.decorator_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 15:51
 */
public class ConcreteIncreaseAble extends IncreaseAble{
    public ConcreteIncreaseAble(BookAble bookAble) {
        super(bookAble);
    }

    @Override
    public void borrowBook() {
        bookAble.borrowBook();
    }

    @Override
    public void returnBook() {
        bookAble.returnBook();
    }

    public void freeze(){
        System.out.println("图书冻结！");
    }

    public void lose(){
        System.out.println("图书遗失！");
    }
}
