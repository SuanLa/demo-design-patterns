package org.example.decorator_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 15:51
 */
@AllArgsConstructor
public abstract class IncreaseAble implements BookAble{
    protected BookAble bookAble;

    @Override
    public abstract void borrowBook();

    @Override
    public abstract void returnBook();
}
