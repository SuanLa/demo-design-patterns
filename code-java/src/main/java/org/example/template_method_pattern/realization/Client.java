package org.example.template_method_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/28 16:21
 */
public class Client {
    public static void main(String[] args) {
        Bank account = new CurrentAccount();
        account.bankTemplate();

        System.out.println("=================");

        Bank saving = new SavingAccount();
        saving.bankTemplate();
    }
}
