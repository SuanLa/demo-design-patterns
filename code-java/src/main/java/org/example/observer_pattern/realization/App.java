package org.example.observer_pattern.realization;

import java.util.ArrayList;
import java.util.Scanner;

/**
 * 应用程序
 *
 * @author ASUS
 * @date 2023/05/10
 */
public class App {
    private static final Object LOCK = new Object();

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入股票数量");
        int number = scanner.nextInt();

        Investors investors = new Investors(number);

        EquityMarket equityMarket = new EquityMarket();
        System.out.println("请输入股市价格：");
        int pic = scanner.nextInt();
        equityMarket.setPrice(pic);

        Systematic systematic = new Systematic();
        systematic.observers = new ArrayList<>();
        systematic.attach(investors);
        systematic.sharesPrice = equityMarket.getPrice();

       new Thread(() -> {
            System.out.println("系统线程启动>>>>>>>>>>>>");
            synchronized (LOCK){
                while (true){
                    System.out.println(">>>>>>>>后台监听线程进入");
                    if (equityMarket.getPrice()!=systematic.getNowPrice()){
                        systematic.setNowPrice(equityMarket.getPrice());
                        systematic.toNotify(investors);
                        systematic.sharesPrice = systematic.getNowPrice();
                    }
                    LOCK.notifyAll();
                    try {
                        LOCK.wait();
                    } catch (InterruptedException e) {
                        throw new RuntimeException(e);
                    }

                }
            }

        }).start();

        new Thread(() -> {
            System.out.println("股市线程启动>>>>>>>>>>>>");
            synchronized (LOCK){
                while (true){
                    System.out.println("请输入更改后价格");
                    int i = scanner.nextInt();
                    equityMarket.setPrice(i);
                    LOCK.notifyAll();
                    try {
                        LOCK.wait();
                    } catch (InterruptedException e) {
                        throw new RuntimeException(e);
                    }
                }
            }

        }).start();
    }
}