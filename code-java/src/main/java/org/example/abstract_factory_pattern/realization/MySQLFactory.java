package org.example.abstract_factory_pattern.realization;

/**
 * MySQL工厂
 *
 * @author ASUS
 * @date 2023/05/10
 */
public class MySQLFactory implements DBFactory {
    @Override
    public Connection cearteConnection() {
        System.out.println("创建MySQL连接！");
        return new MySQLConnection();
    }

    @Override
    public Statement createStatement() {
        System.out.println("创建MySQL语句！");
        MySQLStatement statement = new MySQLStatement();
        statement.setMySQLStatement("MySQL sql表达式");
        return statement;
    }
}