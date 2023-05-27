package org.example.singleton_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/26 23:20
 */
public class Client {
    public static void main(String[] args) {


        new Thread(()->{
            Singleton.getInstance(0);
            Singleton.getInstance(1);
            Singleton.getInstance(2);
            Singleton.getInstance(3);
        }).start();

        new Thread(()->{
            Singleton.getInstance(0);
            Singleton.getInstance(1);
            Singleton.getInstance(2);
            Singleton.getInstance(4);
        }).start();
    }
}
