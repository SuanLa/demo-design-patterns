package org.example.template_method_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 16:21
 */
public abstract class Bank {
    public void searchCount(){
        System.out.println("查询账户！");
    }

    public void judgeCount(){
        System.out.println("判断账户类型！");
    }

    public void calculateInterest(){
        System.out.println("计算利息！");
    }
    public void bankTemplate(){
        searchCount();
        judgeCount();
        calculateInterest();
    }
}
