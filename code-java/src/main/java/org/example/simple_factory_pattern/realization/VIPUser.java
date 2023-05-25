package org.example.simple_factory_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/25 19:45
 */
public class VIPUser implements User{
    @Override
    public void operation() {
        System.out.println("VIP用户操作");
    }
}
