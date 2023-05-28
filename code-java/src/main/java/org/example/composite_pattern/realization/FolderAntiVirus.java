package org.example.composite_pattern.realization;

import lombok.AllArgsConstructor;

import java.util.List;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 17:29
 */
@AllArgsConstructor
public class FolderAntiVirus implements AntiVirus{
    private List<AntiVirus> list;

    private String folderName;

    @Override
    public void antiVirus() {
        System.out.println("文件夹杀毒！");
        recursionAntiVirus();
    }

    public void recursionAntiVirus(){
        System.out.println(folderName+"->递归杀毒！");
        list.forEach(AntiVirus::antiVirus);
    }
}
