package org.example.builder_parttern.realization;

import lombok.Getter;

/**
 * @author Tomcat
 * @project code-java
 * @Date 2023/5/27 16:32
 */
@Getter
public class ComputerBuilder {
    private CPU cpu;

    private Memory memory;

    private HardDrive hardDrive;

    private Display display;

    public ComputerBuilder buildCPU(CPU cpu){
        this.cpu = cpu;
        return this;
    }

    public ComputerBuilder buildMemory(Memory memory){
        this.memory = memory;
        return this;
    }

    public ComputerBuilder buildHardDrive(HardDrive hardDrive){
        this.hardDrive = hardDrive;
        return this;
    }

    public ComputerBuilder buildDisplay(Display display){
        this.display = display;
        return this;
    }

    public Computer getComputer(){
        return new Computer(this);
    }
}
