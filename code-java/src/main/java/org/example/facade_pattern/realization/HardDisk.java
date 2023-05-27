package org.example.facade_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 18:35
 */
@AllArgsConstructor
public class HardDisk {
    private boolean situation;
    public boolean read(){
        System.out.println("磁盘读入文件！");
        return situation;
    }
}
