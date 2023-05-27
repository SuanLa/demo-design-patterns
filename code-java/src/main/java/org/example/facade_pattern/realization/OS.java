package org.example.facade_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 18:35
 */
@AllArgsConstructor
public class OS {
    private boolean situation;

    public boolean load(){
        System.out.println("操作系统加载！");
        return situation;
    }
}
