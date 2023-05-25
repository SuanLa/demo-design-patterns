package org.example.simple_factory_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/25 19:46
 */
public class UserFactory {
    private User user;

    public User produceUser(int operationDegree){
        switch (operationDegree){
            case 0:
                user = new SVIPUser();
                break;
            case 1:
                user = new VIPUser();
                break;
            case 2:
                user = new SampleUser();
                break;
            default:
                System.out.println("不存在该种用户！");
                return null;
        }
        return user;
    }
}
