package org.example.composite_pattern.realization;

import lombok.AllArgsConstructor;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 17:28
 */
@AllArgsConstructor
public class ImageFileAntiVirus implements AntiVirus{
    private String fileName;
    @Override
    public void antiVirus() {
        System.out.println(fileName+"->图片文件杀毒！");
    }
}
