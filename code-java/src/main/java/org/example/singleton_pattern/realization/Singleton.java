package org.example.singleton_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/26 21:02
 */
public class Singleton {

    /**
     * 多例数组
     */
    private static final Singleton[] LIST = new Singleton[3];

    static {
        for (int i = 0; true; i++) {
            if (LIST[2]!=null){
                System.out.println("多例数量超过上限！");
                break;
            }

            if (LIST[i]==null){
                LIST[i] = new Singleton();
                break;
            }
        }

    }

    private Singleton() {
    }

    /**
     * 获取实例
     *
     * @param index 单例下标
     * @return {@link Singleton} 单例对象
     */
    public static Singleton getInstance(int index) {
        if (index>2||index<0){
            System.out.println("不存在下标为"+index+"的单例！");
            return null;
        }
        return LIST[index];
    }
}
