package org.example.composite_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 17:27
 */
@AllArgsConstructor
public class TextFileAntiVirus implements AntiVirus{
    private String fileName;
    @Override
    public void antiVirus() {
        System.out.println(fileName+"->文本文件杀毒！");
    }
}
