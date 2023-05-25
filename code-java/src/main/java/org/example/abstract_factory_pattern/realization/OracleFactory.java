package org.example.abstract_factory_pattern.realization;


/**
 * Oracle工厂
 *
 * @author ASUS
 * @date 2023/05/10
 */
public class OracleFactory implements DBFactory {
    @Override
    public Connection cearteConnection() {
        System.out.println("创建Oracle连接！");
        return new OracleConnection();
    }

    @Override
    public Statement createStatement() {
        System.out.println("创建Oracle语句！");
        OracleStatement statement = new OracleStatement();
        statement.setOracleStatement("Oracle sql表达式");
        return statement;
    }
}