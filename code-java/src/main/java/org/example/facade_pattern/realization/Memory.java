package org.example.facade_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 18:35
 */
@AllArgsConstructor
public class Memory {
    private boolean situation;
    public boolean check(){
        System.out.println("内存开始自检！");
        return situation;
    }
}
