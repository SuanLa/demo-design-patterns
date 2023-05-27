package org.example.facade_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 18:35
 */
@AllArgsConstructor
public class CPU {
    private boolean situation;
    public boolean run(){
        System.out.println("CPU进入运行状态！");
        return situation;
    }
}
