package org.example.proxy_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 21:10
 */
@AllArgsConstructor
public class Application implements Software{
    private String name;
    @Override
    public void run() {
        System.out.println(name+"程序运行起来了！");
    }
}
