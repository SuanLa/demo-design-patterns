package org.example.observer_pattern.realization;

/**
 * 投资者
 *
 * @author ASUS
 * @date 2023/05/10
 */
public class Investors implements Observer{
    /**
     * 股票数量
     */
    private int sharesNumber;

    public Investors(int sharesNumber) {
        this.sharesNumber = sharesNumber;
    }

    @Override
    public void updateNumber() {
        System.out.println("收到系统消息");
        System.out.println("该股票剩余数量:"+sharesNumber);
        if (sharesNumber!=0){
            sharesNumber=0;
        }else {
            System.out.println("该股票剩余数量为零，无法抛出！");
        }


    }
}