package org.example.abstract_factory_pattern.realization;

/**
 * @author Tomcat
 * @project com
 * @Date 2023/5/10 15:04
 */
public class Client {
    public static void main(String[] args) {
        OracleFactory oracleFactory = new OracleFactory();
        oracleFactory.cearteConnection();
        OracleStatement oracleFactoryStatement = (OracleStatement) oracleFactory.createStatement();
        System.out.println(oracleFactoryStatement.toString());

        MySQLFactory mySQLFactory = new MySQLFactory();
        mySQLFactory.cearteConnection();
        MySQLStatement statement = (MySQLStatement) mySQLFactory.createStatement();
        System.out.println(statement.toString());

    }
}
