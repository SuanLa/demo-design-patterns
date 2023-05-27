package org.example.builder_parttern.realization;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 16:33
 */
public class Client {
    public static void main(String[] args) {
        ComputerBuilder builder1 = new LENOVO().buildHardDrive(new HardDrive()).buildMemory(new Memory()).buildCPU(new CPU()).buildDisplay(new Display());
        Computer lenovo = builder1.getComputer();
        System.out.println(lenovo.toString());

        ComputerBuilder builder2 = new ASUS().buildHardDrive(new HardDrive()).buildMemory(new Memory()).buildCPU(new CPU()).buildDisplay(new Display());
        Computer asus = builder2.getComputer();
        System.out.println(asus.toString());
    }
}
