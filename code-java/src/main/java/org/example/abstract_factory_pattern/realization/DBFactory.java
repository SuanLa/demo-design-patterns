package org.example.abstract_factory_pattern.realization;

/**
 * 抽象数据库工厂
 *
 * @author ASUS
 * @date 2023/05/10
 */
public interface DBFactory {
    /**
     * 创建连接
     *
     * @return {@link Connection}
     */
    Connection cearteConnection();

    /**
     * 创建sql语句
     *
     * @return {@link Statement}
     */
    Statement createStatement();

}