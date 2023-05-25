package org.example.observer_pattern.realization;


import java.util.List;

/**
 * 主题
 *
 * @author ASUS
 * @date 2023/05/10
 */
public abstract class Subject {
    /**
     * 观察者队列
     */
    protected List<Observer> observers;


    /**
     * 买入价格
     */
    protected double sharesPrice;


    /**
     * 增加观察者
     *
     * @param obs 观察者
     */
    public abstract void attach(Observer obs);

    /**
     * 移出观察者
     *
     * @param obs 观察者
     */
    public abstract void detach(Observer obs);

    /**
     * 通知
     */
    public abstract void toNotify(Observer obs);

}