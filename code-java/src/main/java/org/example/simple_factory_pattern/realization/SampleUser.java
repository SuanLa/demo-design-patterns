package org.example.simple_factory_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/25 19:46
 */
public class SampleUser implements User{
    @Override
    public void operation() {
        System.out.println("普通用户操作");
    }
}
