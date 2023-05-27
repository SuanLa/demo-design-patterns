package org.example.builder_parttern.realization;

import lombok.Getter;
import lombok.ToString;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 16:32
 */
@Getter
@ToString
public class Computer {

    private CPU cpu;

    private Memory memory;

    private HardDrive hardDrive;

    private Display display;

    Computer(ComputerBuilder builder) {
        cpu = builder.getCpu();
        memory = builder.getMemory();
        hardDrive = builder.getHardDrive();
        display = builder.getDisplay();
    }
}
