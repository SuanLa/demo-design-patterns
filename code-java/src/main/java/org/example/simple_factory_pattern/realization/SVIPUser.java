package org.example.simple_factory_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/25 19:44
 */
public class SVIPUser implements User{
    @Override
    public void operation() {
        System.out.println("SVIP用户操作");
    }
}
