package org.example.abstract_factory_pattern.realization;

/**
 * oracle语句
 *
 * @author ASUS
 * @date 2023/05/10
 */
public class OracleStatement implements Statement {

    private String OracleStatement;

    public String getOracleStatement() {
        return OracleStatement;
    }

    public void setOracleStatement(String oracleStatement) {
        OracleStatement = oracleStatement;
    }

    @Override
    public String toString() {
        return "OracleStatement{" +
                "OracleStatement='" + OracleStatement + '\'' +
                '}';
    }
}