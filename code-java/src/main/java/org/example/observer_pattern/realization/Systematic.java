package org.example.observer_pattern.realization;


import lombok.Data;

/**
 * 系统
 *
 * @author ASUS
 * @date 2023/05/10
 */
@Data
public class Systematic extends Subject {
    private double nowPrice;

    @Override
    public void attach(Observer obs) {
        observers.add(obs);
        java.lang.System.out.println("增加观察者成功");
    }

    @Override
    public void detach(Observer obs) {
        observers.remove(obs);
        java.lang.System.out.println("删除观察者成功");
    }

    @Override
    public void toNotify(Observer obs) {
        double result = Math.abs(nowPrice - sharesPrice);
        java.lang.System.out.println("买入价格："+sharesPrice + "  当前价格：" +nowPrice);
        if ((result/100)>0.05){
            observers.forEach(Observer::updateNumber);
            java.lang.System.out.println("价格超过百分之五");
        }
    }
}