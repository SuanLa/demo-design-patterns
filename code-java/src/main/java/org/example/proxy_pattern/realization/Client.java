package org.example.proxy_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 20:56
 */
public class Client {
    public static void main(String[] args) {
        Software software = new Shortcuts();
        software.run();
    }
}
