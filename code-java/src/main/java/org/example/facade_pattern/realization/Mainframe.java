package org.example.facade_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 18:36
 */
@AllArgsConstructor
public class Mainframe {

    private CPU cpu;

    private Memory memory;

    private HardDisk hardDisk;

    private OS os;

    public void on(){
        boolean on = start();
        if (on){
            System.out.println("操作系统启动成功!");
        }else {
            System.out.println("操作系统启动失败!");
        }
    }

    private boolean start(){
        boolean check = memory.check();
        boolean run = cpu.run();
        boolean read = hardDisk.read();
        boolean load = os.load();
        return check&&read&&run&&load;
    }
}
