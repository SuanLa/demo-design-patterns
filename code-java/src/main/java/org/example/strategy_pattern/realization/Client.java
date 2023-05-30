package org.example.strategy_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/29 14:18
 */
public class Client {
    public static void main(String[] args) {
        Book book = new ComputerBook();
        Store store = new Store(book);
        double discount = store.discount(100, 5);
        System.out.println(discount);

        Book novelBook = new NovelBook();
        Store store1 = new Store(novelBook);
        double discount1 = store1.discount(100, 5);
        System.out.println(discount1);

        Book languageBook = new LanguageBook();
        Store store2 = new Store(languageBook);
        double discount2 = store2.discount(100, 5);
        System.out.println(discount2);
    }
}
