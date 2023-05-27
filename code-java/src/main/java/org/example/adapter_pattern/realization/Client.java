package org.example.adapter_pattern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 21:48
 */
public class Client {
    public static void main(String[] args) {
        Cat cat = new ConcreteCat();
        Dog dog = new ConcreteDog();

        Adapter adapter = new Adapter();
        adapter.setCat(cat);
        adapter.setDog(dog);

        adapter.catchMouse();
        adapter.woof();
    }
}
