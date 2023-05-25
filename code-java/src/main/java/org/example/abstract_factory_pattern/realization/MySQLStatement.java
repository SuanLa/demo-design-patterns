package org.example.abstract_factory_pattern.realization;

/**
 * mysql语句
 *
 * @author ASUS
 * @date 2023/05/10
 */
public class MySQLStatement implements Statement {
    private String MySQLStatement;

    public String getMySQLStatement() {
        return MySQLStatement;
    }

    public void setMySQLStatement(String mySQLStatement) {
        MySQLStatement = mySQLStatement;
    }

    @Override
    public String toString() {
        return "MySQLStatement{" +
                "MySQLStatement='" + MySQLStatement + '\'' +
                '}';
    }
}