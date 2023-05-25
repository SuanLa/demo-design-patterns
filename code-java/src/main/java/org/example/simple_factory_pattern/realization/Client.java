package org.example.simple_factory_pattern.realization;

import java.util.Scanner;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/25 19:53
 */
public class Client {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入账号");
        String name = scanner.next();
        System.out.println("请输入密码");
        int passwd = scanner.nextInt();

        int degree = judgement(name,passwd);

        UserFactory factory = new UserFactory();
        User user = factory.produceUser(degree);
        user.operation();
    }

    public static int judgement(String name,int passwd){
        if (name.equals(Account.SIMPLE.getName())){
            if (passwd==Account.SIMPLE.getPasswd()){
                return Account.SIMPLE.getDegree();
            }
            System.out.println("密码错误！");
            return -1;
        }else if (name.equals(Account.VIP.getName())){
            if (passwd==Account.VIP.getPasswd()){
                return Account.VIP.getDegree();
            }
            System.out.println("密码错误！");
            return -1;
        }else if (name.equals(Account.SVIP.getName())){
            if (passwd==Account.SVIP.getPasswd()){
                return Account.SVIP.getDegree();
            }
            System.out.println("密码错误！");
            return -1;
        }
        System.out.println("账号错误！");
        return -1;
    }
}
