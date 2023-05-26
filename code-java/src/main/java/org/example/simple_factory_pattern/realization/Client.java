package org.example.simple_factory_pattern.realization;

import java.util.Arrays;
import java.util.Iterator;
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

    /**
     * 判断账密
     *
     * @param name   账号
     * @param passwd 密码
     * @return int 用户等级
     */
    public static int judgement(String name,int passwd){

        Iterator<Account> iterators = Arrays.stream(Account.values()).iterator();
        while (true){
            if (iterators.hasNext()){
                Account account = iterators.next();
                if (name.equals(account.getName())){
                        if (account.getPasswd()==passwd){
                            return account.getDegree();
                        }
                        System.out.println("密码错误！");
                    }
            }else {
                System.out.println("账号错误！");
                return -1;
            }
        }
    }
}
