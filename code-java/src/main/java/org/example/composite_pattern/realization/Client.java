package org.example.composite_pattern.realization;

import java.util.ArrayList;
import java.util.List;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 17:35
 */
public class Client {
    public static void main(String[] args) {
        TextFileAntiVirus text = new TextFileAntiVirus("文本");
        text.antiVirus();

        System.out.println("=================");

        ImageFileAntiVirus iamge = new ImageFileAntiVirus("图片");
        iamge.antiVirus();

        System.out.println("===================");

        VideoFileAntiVirus video = new VideoFileAntiVirus("视频");
        video.antiVirus();


        System.out.println("=======================");

        List<AntiVirus> list = new ArrayList<>();
        list.add(text);
        list.add(iamge);
        list.add(video);

        FolderAntiVirus folder = new FolderAntiVirus(list, "文件夹");
        folder.antiVirus();
    }
}
