package org.example.proxy_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 21:10
 */
public class Shortcuts implements Software{
    private Application application = new Application("idea");

    @Override
    public void run() {
        System.out.println("代理程序开始运行！");
        application.run();
    }
}
