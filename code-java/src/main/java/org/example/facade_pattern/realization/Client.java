package org.example.facade_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 18:35
 */
public class Client {
    public static void main(String[] args) {
        Mainframe mainframe = new Mainframe(new CPU(false), new Memory(true), new HardDisk(true), new OS(true));
        mainframe.on();
    }
}
