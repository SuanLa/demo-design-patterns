# demo-design-patterns
个人实现设计模式。基于java和c++语言实现。



# 一、面向对象的设计原则

1. ## **单一职责原则**

*一个对象应该只包含单一的职责，并且该职责被完美的封装在一个类中。*

 

每一个职责都是变化的一个轴线，如果一个类有一个以上的职责，这些职责就耦合在了一起。这会导致脆弱的设计。当一个职责发生变化时，可能会影响其它的职责。另外，多个职责耦合在一起，会影响复用性。单一职责原则不只是面向对象编程思想所特有的，只要是模块化的程序设计，都需要遵循这一重要原则。

 

## *2.* **里氏替换原则**

*所有引用基类（父类）的地方必须能透明地使用其子类的对象。*

 

子类可以实现父类的抽象方法，子类也中可以增加自己特有的方法，但不能覆盖父类的非抽象方法。当子类的方法重载父类的方法时，方法的前置条件（即方法的形参）要比父类方法的输入参数更宽松。当子类的方法实现父类的抽象方法时，方法的后置条件（即方法的返回值）要比父类更严格。Java多态基于该原则设计。

 

## *3.* **依赖倒置原则**

*高层模块不应该从低层模块导入任何东西，两者都应该依赖于抽象。抽象不应该依赖于细节，细节应当依赖于抽象*。 

 

采用依赖倒置原则尤其给多人合作开发带来了极大的便利，参与协作开发的人越多、项目越庞大，采用依赖导致原则的意义就越重大。依赖倒置原则就是要面向接口编程，理解了面向接口编程，也就理解了依赖倒置。Java多态基于该原则设计。

 

 

## *4.* **接口隔离原则**

*客户端不应该依赖哪些它不需要的接口。*

 

我们在代码编写过程中，运用接口隔离原则，一定要适度，接口设计的过大或过小都不好。对接口进行细化可以提高程序设计灵活性是不挣的事实，但是如果过小，则会造成接口数量过多，使设计复杂化。所以一定要适度。设计接口的时候，只有多花些时间去思考和筹划，就能准确地实践这一原则。Java多接口继承依赖该原则。

 

## *5.* **迪米特法则**

*每一个软件单位对其他单位尽可能少的了解，而且局限于哪些与本单位密切相关的的软件。* 

 

迪米特法则的初衷是降低类之间的耦合，由于每个类都减少了不必要的依赖，因此的确可以降低耦合关系。但是凡事都有度，虽然可以避免与非直接的类通信，但是要通信，必然会通过一个“中介”来发生联系。故过分的使用迪米特原则，会产生大量这样的中介和传递类，导致系统复杂度变大。所以在采用迪米特法则时要反复权衡，既做到结构清晰，又要高内聚低耦合。

 

## *6.* **开闭原则**

*软件实体应对扩展开放，而对修改关闭*



开闭原则具有理想主义的色彩，说的很抽象，它是面向对象设计的终极目标。其他几条原则，则可以看做是开闭原则的实现。我们要用抽象构建框架，用实现扩展细节。

 

## *7.* **组合/聚合复用原则**

*优先使用对象的组合，而不是使用继承来达到复用的目的*

 

组合/聚合复用原则可以使系统更加灵活，类与类之间的耦合度降低，一个类的变化对其他类造成的影响相对较少，因此一般首选使用组合/聚合来实现复用；其次才考虑继承，在使用继承时，需要严格遵循里氏代换原则，有效使用继承会有助于对问题的理解，降低复杂度，而滥用继承反而会增加系统构建和维护的难度以及系统的复杂度，因此需要慎重使用继承复用。

 

 

综上所述，设计模式是一种标准化的解决方案，可以帮助我们解决一些特定的设计问题，提高软件的质量和可维护性。面向对象设计思想是一种基于对象的软件设计方法，它将现实世界中的问题抽象成为一个个对象，并将对象之间的交互作为解决问题的基本方式，包括封装、继承、多态、抽象和接口等概念。通过学习和运用设计模式和面向对象设计思想，可以提高软件的设计水平，提高代码的可读性、可维护性和可扩展性，从而更好地满足用户的需求。



# 二、UML

## 1.概述

**统一建模语言**（英语：*Unified Modeling Language*，缩写**UML**）是非专利的第三代建模和规约语言。

UML是一种开放的方法，用于说明、可视化、构建和编写一个正在开发的、面向对象的、软件密集系统

的制品的开放方法。UML展现了一系列最佳工程实践，这些最佳实践在对大规模，复杂系统进行建模方

面，特别是在软件架构层次已经被验证有效。

## 2.UML图

> 类图是一切面向对象方法的核心建模工具。该图描述了系统中对象的类型以及它们之间存在的各种静态
>
> 关系。

例如：![](./images/image-20230523173825816.png)

对应的代码：

```java
/**
 * @author SuanLa
 * @project java-design-patterns
 * @Date 2023/5/23 17:21
 */
public class Demo {
    private String variable;

    public void method(String var){}
}
```

## 3.类之间的关系

### 3.1关联关系

> 关联（Association）关系是一种结构化的关系，用于表示一个类对象与另一个类对象的之间的关系，在
>
> 代码中被关联的对象以成员变量的方式体现。

![](./images/image-20230523172826313.png)

#### 3.1.1双向关联

> 不带箭头就是双向关联，如下图所示

![](./images/image-20230523174945519.png)

#### 3.1.2单向关联

> 下面是一个单向关联的UML表示方式

![image-20230523175114597](./images/image-20230523175114597.png)

#### 3.3.3自关联

> 类的属性对象包含自己的情况，如下图所示

![image-20230523175248222](./images/image-20230523175248222.png)

#### 3.3.4多重性关联

多重性关联关系又称为重数性（Multiplicity）关联关系，表示关联对象之间存在数量关系。

- 数量关系符表示如下

- 1或1..1：表示另一个类的一个对象只与该类的一个对象有关系

- 0..*：表示另一个类的一个对象与该类的零个或多个对象有关系

- 1..*：表示另一个类的一个对象与该类的一个或多个对象有关系

- 0..1：表示另一个类的一个对象没有或只与该类的一个对象有关系

- m..n：表示另一个类的一个对象与该类最少m最多n个对象有关系（m ≤ n）

![image-20230523175750256](./images/image-20230523175750256.png)

### 3.2聚合关系

> 聚合（Aggregation）关系表示整体与部分的关系，在聚合中成员是整体对象的一部分，成员对象可以
>
> 脱了整体对象而独立存在。
>
> ![image-20230523180030267](./images/image-20230523180030267.png)

### 3.3组合关系

> 组合（Composition）关系也表示整体与部分的关系，在组合中整体对象可以控制成员对象的生命周
>
> 期，一旦整体对象消亡成员对象将消失。

![image-20230523180150867](./images/image-20230523180150867.png)

### 3.4依赖关系

> 依赖（Dependency）关系是一种使用关系，在大多数情况下依赖关系体现在某个类方法参数上使用另
>
> 一个类的对象作为方法参数。

![image-20230523173414525](./images/image-20230523173414525.png)

### 3.5泛化关系

> 泛化（Generalization）关系也就是继承关系。

![image-20230523174215619](./images/image-20230523174215619.png)

### 3.6接口与实现关系

> 接口（Interface）之间也可以有与类之间关系类似的继承关系和依赖关系，接口与类之间同时还存在一
>
> 种实现（Realization）关系，在这种关系中类实现了接口中所有的操作。

![image-20230523174518485](./images/image-20230523174518485.png)

# 三、简单工厂模式

## 1.模式定义

> 简单工厂模式（**Simple Factory Pattern**）又叫做静态工厂方法模式（**Static Factory Method**

> **Pattern**），并不属于 GoF 的23种设计模式之一，是学习其他工厂模式的的基础。

其定义如下：

*Wikipedia says：Factory is an object for creating other objects – formally a factory is a function*

*or method that returns objects of a varying prototype or class.*

*工厂是一个用于创建其他对象的对象——从形式上讲，工厂是一个函数或方法，它返回不同原型*

*或类型的对象。*

*Providing a static method encapsulated in a class called the factory, to hide the*

*implementation logic and make client code focus on usage rather than initializing new*

*objects.*

*提供封装在名为工厂的类中的静态方法，以隐藏实现逻辑并使客户端代码专注于使用而不是初始*

*化新对象。*

## 2.模式结构

![image-20230523181245380](./images/image-20230523181245380.png)

在简单工厂模式结构图中包含如下几个角色：

- **Factory（工厂角色）**：工厂角色即工厂类，它是简单工厂模式的核心，负责实现创建所有产品实

例的内部逻辑；工厂类可以被外界直接调用，创建所需的产品对象；在工厂类中提供了静态的工厂

方法 factoryMethod() ，它的返回类型为抽象产品类型Product。

- **Product（抽象产品角色）**：它是工厂类所创建的所有对象的父类，封装了各种产品对象的公有方

法，它的引入将提高系统的灵活性，使得在工厂类中只需定义一个通用的工厂方法，因为所有创建

的具体产品对象都是其子类对象。

- **ConcreteProduct （具体产品角色）**：它是简单工厂模式的创建目标，所有被创建的对象都充当

这个角色的某个具体类的实例。每一个具体产品角色都继承了抽象产品角色，需要实现在抽象产品中声明的抽象方法。

## 3.模式应用

1.在某OA系统中，系统根据对比用户在登陆时输入的帐号和密码以及在数据库中存储的账号和密码是否一致进行身份验证，如果验证通过，则去除存储在数据库中的用户权限等级（以整形存储），根据不同的权限等级创建不同等级的用户对象，不同等级的用户对象拥有不同的操作权限。先使用简单工厂模式来设计该权限管理模块。

# 四、工厂方法模式

## 1.模式定义

> 工厂方法模式也被称为虚拟构造器模式（**Virtual Constructor Pattern**）或多态工厂模式

> （**Polymorphic Factory Pattern**）。

其定义如下：

*Define an interface for creating an object, but let subclasses decide which class to*

*instantiate. Factory Method lets a class defer instantiation to subclasses.*

*定义一个用于创建对象的接口，让子类决定将哪一个类实例化。工厂方法模式让一个类的实例化*

*延迟到其子类。*

在工厂方法模式中，**不再提供一个统一的工厂类来创建所有的产品对象，而是针对不同的产品提供不同**

**的工厂，系统提供一个与产品等级结构对应的工厂等级结构**。

## 2.模式结构

![image-20230524173709938](./images/image-20230524173709938.png)

在工厂方法模式结构图中包含如下几个角色：

**Product（抽象产品）**：它是定义产品的接口，是工厂方法模式所创建对象的超类型，也就是产品对象

的公共父类。

**ConcreteProduct（具体产品）**：它实现了抽象产品接口，某种类型的具体产品由专门的具体工厂创

建，具体工厂和具体产品之间一一对应。

**Factory（抽象工厂）**：在抽象工厂类中，声明了工厂方法(Factory Method)，用于返回一个产品。抽

象工厂是工厂方法模式的核心，所有创建对象的工厂类都必须实现该接口。

**ConcreteFactory（具体工厂）**：它是抽象工厂类的子类，实现了抽象工厂中定义的工厂方法，并可由

客户端调用，返回一个具体产品类的实例。

## 3.模式应用

1. 宝马（BMW）工厂制造宝马汽车，奔驰（）工厂制造奔驰汽车。使用工厂方法模式模拟该场景。

# 五、抽象工厂模式

## 1.模式定义

> 工厂方法模式通过引入工厂等级结构，解决了简单工厂模式中工厂类职责太重的问题，但由于工厂方法
>
> 模式中的**每个工厂只生产一类产品**，可能会导致系统中存在大量的工厂类，势必会增加系统的开销。此
>
> 时，我们可以考虑将一些相关的产品组成一个“产品族”，由同一个工厂来统一生产，这就是抽象工厂模
>
> 式（**Abstract Factory Pattern**）的基本思想。

其定义如下：

*Wikipedia says: The abstract factory pattern provides a way to encapsulate a group of individual*

*factories that have a common theme without specifying their concrete classes.*

*抽象工厂模式提供了一种方法来封装一组具有共同主题的单个工厂，而无需指定其具体类。*

*Provide an interface for creating families of related or dependent objects without specifying their*

*concrete classes.*

*提供一个创建一系列相关或相互依赖对象的接口，而无须指定它们具体的类。*

**抽象工厂模式是所有形式的工厂模式中最为抽象和最具一般性的一种形式。**

当一个工厂等级结构可以创建出分属于不同产品等级结构的一个产品族中的所有对象时，抽象工厂模式

比工厂方法模式更为简单、更有效率。

## 2.模式结构

![image-20230524175339428](./images/image-20230524175339428.png)

在抽象工厂模式结构图中包含如下几个角色：

**AbstractFactory（抽象工厂）**：它声明了一组用于创建一组产品的方法，每一个方法对应一种产品。

**ConcreteFactory（具体工厂）**：它实现了在抽象工厂中声明的创建产品的方法，生成一组具体产品，

这些产品构成了一个产品族，每一个产品都位于某个产品等级结构中。

**AbstractProduct（抽象产品）**：它为每种产品声明接口，在抽象产品中声明了产品所具有的业务方

法。

**ConcreteProduct（具体产品）**：它定义具体工厂生产的具体产品对象，实现抽象产品接口中声明的

业务方法。

## 3.模式应用

1.某系统为了改进数据库操作性能，自定义数据库连接对象Connection和语句对象Statement，可针对不同类型的数据库提供不同不同的连接对象和语句对象，如提供Oracle或MySQL，专用连接和语句类，而且用户可以通过配置文件等方式根据实际需要动态更换系统数据库。使用抽象工厂模式设计该系统。

![image-20230524221720877](./images/image-20230524221720877.png)

# 六、单例模式

## 1.模式定义

> 对于一个软件系统的某些类而言，我们无须创建多个实例。为了节约系统资源，有时需要确保系统中某
>
> 个类只有唯一一个实例，当这个唯一实例创建成功之后，我们无法再创建一个同类型的其他对象，所有
>
> 的操作都只能基于这个唯一实例。为了确保对象的唯一性，我们可以通过单例模式（**Singleton**
>
> **Pattern**）来实现，这就是单例模式的动机所在。单例模式又名单件模式或单态模式。

其定义如下：

*Wikipedia says: In software engineering, the singleton pattern is a software design pattern that*

*restricts the instantiation of a class to one object. This is useful when exactly one object is needed*

*to coordinate actions across the system.*

*在软件工程中，单例模式是一种软件设计模式，它将类的实例化限制为一个对象。当需要一个对*

*象来协调整个系统的操作时，这很有用。*

*Ensure a class only has one instance, and provide a global point of access to it.*

*确保某一个类只有一个实例，并提供一个全局的访问点来访问这个实例。*

## 2.模式结构

![image-20230524180042663](./images/image-20230524180042663.png)

单例模式结构图中只包含一个单例角色：

**Singleton（单例）**：在单例类的内部实现只生成一个实例，同时它提供一个静态的 getInstance ()工

厂方法，让客户可以访问它的唯一实例；为了防止在外部对其实例化，将其构造函数设计为私有；在单

例类内部定义了一个Singleton类型的静态对象，作为外部共享的唯一实例。

## 3.模式应用

1.使用单例模式的思想实现多例模式，确保系统中某个类的对象只能存在有限个，如两个或三个。设计并编码，实现一个多例类。

# 七、建造者模式

## 1.模式定义

> 建造者模式（Builder Parttern），将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。建造者模式是一步一步创建一个复杂的对象，它允许用户只通过指定复杂对象的类型和内容就可以构建他们，用户不需要知道内部的具体构建细节。建造者模式又可以称为生成器模式。

建造者模式（Builder Pattern）定义如下：

*Wikipedia says: The builder pattern is an object creation software design pattern with the*

*intentions of finding a solution to the telescoping constructor anti-pattern.*

*建造者模式是一种对象创建软件设计模式，旨在找到伸缩构造器反模式的解决方案。*

*伸缩性构造的反模式：指通过构造器实现对象构建参数初始化，如果对象属性比较多，导致构造*

*器的参数个数不可控。*

*Separate the construction of a complex object from its representation so that the same*

*construction process can create different representations.*

*将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示。*

## 2.模式结构

![image-20230525142656075](./images/image-20230525142656075.png)

在建造者模式结构图中包含如下几个角色：

**Builder（抽象建造者）**：它为创建一个产品Product对象的各个部件指定抽象接口，在该接口中

一般声明两类方法，一类方法是 buildPartXXXX ()，它们用于创建复杂对象的各个部件；另一类

方法是build()，它们用于返回复杂对象。Builder既可以是抽象类，也可以是接口。

**ConcreteBuilder （具体建造者）**：它实现了Builder接口，实现各个部件的具体构造和装配方

法，定义并明确它所创建的复杂对象，也可以提供一个方法返回创建好的复杂产品对象。

**Product（产品角色）**：它是被构建的复杂对象，包含多个组成部件，具体建造者创建该产品的内

部表示并定义它的装配过程。

**Director（指挥者）**：指挥者又称为导演类，它负责安排复杂对象的建造次序，指挥者与抽象建

造者之间存在关联关系，可以在其construct()建造方法中调用建造者对象的部件构造与装配方法，

完成复杂对象的建造。客户端一般只需要与指挥者进行交互，在客户端确定具体建造者的类型，并

实例化具体建造者对象（也可以通过配置文件和反射机制），然后通过指挥者类的构造函数或者

Setter方法将该对象传入指挥者类中。

## 3.模式应用

1.计算机组装工厂可以将CPU、内存、硬盘、主机、显示器等硬件设备组装在一起构成一台完整的计算机，且构成的计算机可以是笔记本电脑，也可以是台式机，还可以使不提供显示器的服务器主机。对于用户而言，无须关系计算机的组成设备和组装过程，工厂返回给用户的是完整的计算机对象。使用建造者模式实现计算机组装过程。

# 八、适配器模式

## 1.模式定义

> 适配器模式（**Adapter Pattern**），将一个接口转换成客户希望的另一个接口，适配器模式使接口不兼容的那些类可以一起工作，其别名为包装器。适配器模式既可以作为类结构型模式，也可以作为对象结构型模式。适配器模式也叫包装器（**Wrapper**）模式。

适配器模式定义如下：

*Wikipedia says: In software engineering, the adapter pattern is a software design pattern that*

*allows the interface of an existing class to be used as another interface. It is often used to make*

*existing classes work with others without modifying their source code.*

*在软件工程中，适配器模式是一种软件设计模式，它允许将现有类的接口用作另一个接口。它通*

*常用于使现有类与其他类一起工作，而无需修改其源代码。*

*Convert the interface of a class into another interface the clients expect. Adapter lets classes work*

*together that couldn't otherwise because of incompatible interfaces.*

*将类的接口转换为客户端期望的另一个接口。适配器让那些接口不兼容的类可以一起工作。*

***TIP**：在适配器模式定义中所提及的接口是指广义的接口，它可以表示一个方法或者方法的集合*

## 2.模式结构

### 2.1 类适配器模式

![image-20230524182552647](./images/image-20230524182552647.png)

在对象适配器模式结构图中包含如下几个角色：

**Target（目标抽象类）**：目标抽象类定义客户所需接口，可以是一个抽象类或接口，也可以是具

体类。

**Adapter（适配器类）**：适配器可以调用另一个接口，作为一个转换器，对 Adaptee 和Target进

行适配，适配器类是适配器模式的核心，在对象适配器中，它通过继承Target并关联一个Adaptee 对象使二者产生联系。

**Adaptee （适配者类）**：适配者即被适配的角色，它定义了一个已经存在的接口，这个接口需要

适配，适配者类一般是一个具体类，包含了客户希望使用的业务方法，在某些情况下可能没有适配

者类的源代码。

### 2.2 对象适配器

![image-20230524182759633](./images/image-20230524182759633.png)

在类适配器模式结构图中包含如下几个角色：

**Target（目标抽象类）**：目标抽象类定义客户所需接口，由于Java不支持多继承，所以Target只能

是接口类型。

**Adapter（适配器类）**：适配器可以调用另一个接口，作为一个转换器，对 Adaptee 和Target进

行适配，适配器类是适配器模式的核心，在类适配器中，它通过实现Target接口和继承 Adaptee

类来使二者产生联系。

**Adaptee （适配者类）**：适配者即被适配的角色，它定义了一个已经存在的接口，这个接口需要

适配，适配者类一般是一个具体类，包含了客户希望使用的业务方法，在某些情况下可能没有适配

者类的源代码。

## 3.模式应用

1.实现一个双向适配器实例，使得猫可以学狗叫，狗可以学猫抓老鼠。

# 九、组合模式

## 1.模式定义

> 组合模式（**Composite Pattern**）,组合多个对象形成树形结构以表示“部分一整体”的结构层次。组合模式对单个对象（即叶子对象）和组合对象（及容器对象）的使用具有一致性。组合模式又可以称为“部分一整体”（Part-Whole）模式，它将对象组织到树结构中，可以用来描述整体与部分的关系。

其定义如下：

*Wikipedia says : The composite pattern describes that a group of objects is to be treated in the*

*same way as a single instance of an object. The intent of a composite is to "compose" objects into*

*tree structures to represent part-whole hierarchies. Implementing the composite pattern lets*

*clients treat individual objects and compositions uniformly.*

*组合模式描述了在对待一组对象实例的时候，使用以单个对象实例相同的方式对待。*

组合的目的是将对象“组合”成树形结构，以表示部分整体层次结构。

通过实现组合模式，客户端可以统一对待各个对象与组合。

## 2.模式结构

![image-20230525125842304](./images/image-20230525125842304.png)

在组合模式结构图中包含如下几个角色：

**Component（抽象构件）**：它可以是接口或抽象类，为叶子构件和容器构件对象声明接口，在该

角色中可以包含所有子类共有行为的声明和实现。在抽象构件中定义了访问及管理它的子构件的方

法，如增加子构件、删除子构件、获取子构件等。

**Leaf（叶子构件）**：它在组合结构中表示叶子节点对象，叶子节点没有子节点，它实现了在抽象

构件中定义的行为。对于那些访问及管理子构件的方法，可以通过异常等方式进行处理。

**Composite（容器构件）**：它在组合结构中表示容器节点对象，容器节点包含子节点，其子节点

可以是叶子节点，也可以是容器节点，它提供一个集合用于存储子节点，实现了在抽象构件中定义

的行为，包括那些访问及管理子构件的方法，在其业务方法中可以递归调用其子节点的业务方法。

## 3.模式应用

1.使用组合模式设计一个杀毒软件（AntiVirus）的框架，该软件既可以对某个文件夹（Folder）杀毒，也可以对某个指定的的文件（File）进行杀毒，文件种类包括文本文件TextFile、图片文件ImageFile、视频文件VideoFile。

# 十、外观模式

## 1.模式定义

> 外观模式（**Facade Pattern**），为子系统中的一组接口提供一个统一的入口。外观模式定义了一个高层接口，这个接口使得这一子系统更加容易使用。在外观模式中，外部与一个子系统的通信可以通过统一的外观对象进行。外观模式又称为门面模式，它是一种对象结构模式。

其定义如下：

*Wikipedia says : A facade is an object that provides a simplified interface to a larger body of*

*code, such as a class library.*

*外观是一个对象，它为更大的代码 (例如类库) 提供了简化的接口。Provide a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level*

*interface that makes the subsystem easier to use.*

*为子系统中的一组接口提供一个统一的入口。外观模式定义了一个高层接口，这个接口使得这一*

*子系统更加容易使用。*

外观模式是**迪米特法则**的一种具体实现，通过引

入一个新的外观角色可以降低原有系统的复杂度，同时降低客户类与子系统的耦合度。

## 2.模式结构

![image-20230525131116260](./images/image-20230525131116260.png)

外观模式包含如下两个角色：

**外观（Facade）** ：提供了一种访问特定子系统功能的便捷方式， 其了解如何重定向客户端请

求， 知晓如何操作一切活动部件。

**复杂子系统 （Complex Subsystem）**：由数十个不同对象构成。 如果要用这些对象完成有意义

的工作， 你必须深入了解子系统的实现细节， 比如按照正确顺序初始化对象和为其提供正确格式

的数据。子系统类不会意识到外观的存在， 它们在系统内运作并且相互之间可直接进行交互。

## 3.模式应用

1.在计算机主机（ Mainframe ）中，只需要按下主机的开机按钮（on ())，即可调用其他件设备和软件的启动方法，如内存（Memory ）的自检（check ())、 CPU 的运行（run ())、硬盘( HardDisk ）的读取（read ())、操作系统（ OS ）的载人（load ()）等，如果某一过程发生错误则计算机启动失败。使用外观模式模拟该过程，绘制类图并编程实现。

# 十一、代理模式

## 1.模式定义

> 代理模式**（Proxy Pattern）**，给某一个对象提供一个代理，并由代理对象控制对原对象的引用。代理模式的英文叫做Proxy或Surrogate。

其定义如下：

*Wikipedia says: A proxy, in its most general form, is a class functioning as an interface to*

*something else. A proxy is a wrapper or agent object that is being called by the client to access*

*the real serving object behind the scenes. Use of the proxy can simply be forwarding to the real*

*object, or can provide additional logic. In the proxy extra functionality can be provided, for*

*example caching when operations on the real object are resource intensive, or checking*

*preconditions before operations on the real object are invoked.*

*代理，以其最一般的形式，是一个类，用作其他东西的接口。**代理是一个包装器或代理对象，客***

***户端正在调用它来访问幕后的真实服务对象。代理的使用可以简单地转发到真实对象，或者可以***

***提供额外的逻辑。**在代理中，可以提供额外的功能，例如，当对真实对象的操作是资源密集型时*

*缓存，或者在调用对真实对象的操作之前检查前提条件。*

*Provide a surrogate or placeholder for another object to control access to it.*

*给某一对象提供一个代理或占位符，并由代理对象来控制对原对象的访问。*



## 2.模式结构

![image-20230525142524219](./images/image-20230525142524219.png)

代理模式包含如下三个角色：

**服务接口 （Service Interface）**： 声明了服务接口（真实角色和代理角色共有接口）。 这样一

来在任何使用真实角色的地方都可以使用代理角色，客户端通常需要针对服务接口进行编程。

**服务（Service）**：它定义了代理角色所代表的真实对象，在真实角色中实现了真实的业务操作，

客户端可以通过代理角色间接调用真实角色中定义的操作。

**代理（Proxy）**： 包含一个指向服务对象的引用成员变量。 代理完成其任务 （例如延迟初始化、

记录日志、 访问控制和缓存等） 后会将请求传递给服务对象。 通常情况下， 代理会对其服务对

象的整个生命周期进行管理。

**客户端（Client）**： 能通过同一接口与服务或代理进行交互， 所以你可在一切需要服务对象的代

码中使用代理。

## 3.模式应用

1.应用软件所提供的桌面快捷方式是快速启动应用程序的代理，桌面快捷方式一般使田一张小图片（ Picture ）来表示，通过调用快捷方式的 run (）方法将调用应用软件( Application ）的 run (）方法。使用代理模式模拟该过程，试绘制类图并编程实现。

# 十二、迭代器模式

## 1.模式定义

> 迭代器模式（**Iterator Pattern**），提供一种方法来访问聚合对象，而不用暴露这个对象的内部表示，其别名为游标（Cursor）。

其定义如下：

*Wikipedia says : the iterator pattern is a design pattern in which an iterator is used to traverse*

*a container and access the container's elements.*

*迭代器模式是一种设计模式，其中迭代器用于遍历容器并访问容器的元素。*

*Provide a way to access the elements of an aggregate object sequentially without exposing its*

*underlying representation.*

*提供一种方法顺序访问一个聚合对象中的各个元素，而又不用暴露该对象的内部表示。*

## 2.模式结构

![image-20230525133538128](./images/image-20230525133538128.png)

在迭代器模式结构图中包含如下几个角色：

**Iterator（抽象迭代器）**：它定义了访问和遍历元素的接口，声明了用于遍历数据元素的方法，在

具体迭代器中将实现这些方法。

**ConcreteIterator（具体迭代器）**：它实现了抽象迭代器接口，完成对聚合对象的遍历，同时

在具体迭代器中通过游标来记录在聚合对象中所处的当前位置，在具体实现时，游标通常是一个表

示位置的非负整数。

**Aggregate（抽象聚合类）**：它用于存储和管理元素对象，声明一个 getIterator() 方法用于创

建一个迭代器对象，充当抽象迭代器工厂角色。

**ConcreteAggregate （具体聚合类）**：它实现了在抽象聚合类中声明的 getIterator() 方法，

该方法返回一个与该具体聚合类对应的具体迭代器 ConcreteIterator 实例。

## 3.模式应用

1.某教务管理系统中一个班级（ Class ）包含多个学生（ Student )，使用 Java 内置迭代器实现对学生信息的遍历，要求按学生年龄由大到小的次序输出学生信息。

# 十三、观察者模式

## 1.模式定义

> 观察者模式（**Observer Pattern**）,定义一种定义对象间的一种一对多依赖关系，使得每当一个对象状态发生改变时，其相关依赖对象皆得到通知并被自动更新。观察者模式又叫做发布﹣订阅（ Publish / Subscribe ）模式、模型﹣视图（ Model / View ）模式、源﹣监听器（ Source /Lisetner）模式或从属者（Dependents）模式。

其定义如下：

*Wikipedia says : The observer pattern is a software design pattern in which an object, called*

*the subject, maintains a list of its dependents, called observers, and notifies them automatically*

*of any state changes, usually by calling one of their methods.*

*观察者模式是一种软件设计模式，其中一个称为主体的对象维护其依赖项列表，称为观察者，并*

*通常通过调用其方法之一自动将任何状态更改通知它们。*

*Define a one-to-many dependency between objects so that when one object changes state, all its*

*dependents are notified and updated automatically.*

*定义对象之间的一种一对多的依赖关系，使得每当一个对象状态发生改变时其相关依赖对象都得*

*到通知并被自动更新。*

## 2.模式结构

![image-20230525142412717](./images/image-20230525142412717.png)

在观察者模式结构图中包含如下几个角色：

**Subject（目标）**：目标又称为主题，它是指被观察的对象。在目标中定义了一个观察者集合，一

个观察目标可以接受任意数量的观察者来观察，它提供一系列方法来增加和删除观察者对象，同时

它定义了通知方法notify()。目标类可以是接口，也可以是抽象类或具体类。

**ConcreteSubject （具体目标）**：具体目标是目标类的子类，通常它包含有经常发生改变的数

据，当它的状态发生改变时，向它的各个观察者发出通知；同时它还实现了在目标类中定义的抽象

业务逻辑方法。如果无须扩展目标类，则具体目标类可以省略。

**Observer（观察者）**：观察者将对观察目标的改变做出反应，观察者一般定义为接口，该接口声

明了更新数据的方法update()，因此又称为抽象观察者。

**ConcreteObserver （具体观察者）**：在具体观察者中维护一个指向具体目标对象的引用，它存

储具体观察者的有关状态，这些状态需要和具体目标的状态保持一致；它实现了在抽象观察者

Observer中定义的update()方法。通常在实现时，可以调用具体目标类的attach()方法将自己添加

到目标类的集合中或通过detach()方法将自己从目标类的集合中删除。

## 3.模式应用

1.利用观察者模式实现股票信息接收。实例说明:某在线股票软件需要提供如下功能:当股票购买者所购买的某支股票价格变化幅度达到 5%时，系统将自动发送通知(包括新价格)给购买该股票的股民。现使用观察者模式设计该系统，绘制类图并编程模拟实现。

# 十四、装饰器模式

## 1.模式定义

> 装饰模式（ DecoratorPattern ）,动态地给一个对象增加一些额外的职责 Responsibility )，就增加对象功能来说，装饰模式比生成子类实现更为灵活。其别名也可以称为包装器（ Wrapper )，与适配器模式的别名相同，但它们适用于不同的场合。根据翻译的不同，装饰模式也有人称之为"油漆工模式"。

其定义如下：

*Wikipedia says : In object-oriented programming, the decorator pattern is a design pattern*

*that allows behavior to be added to an individual object, either statically or dynamically, without*

*affecting the behavior of other objects from the same class. The decorator pattern is often useful*

*for adhering to the Single Responsibility Principle, as it allows functionality to be divided between*

*classes with unique areas of concern.*

*在面向对象编程中，装饰模式是一种设计模式，**它允许将行为静态或动态地添加到单个对象中，***

***而不会影响同一类中其他对象的行为。装饰器模式对于遵守单一责任原则通常是有用的，因为它***

***允许将功能划分到具有独特关注区域的类之间**。*

*Attach additional responsibilities to an object dynamically. Decorators provide a flexible*

*alternative to subclassing for extending functionality.*

*动态的给一个对象增加一些额外的职责。就扩展功能而言，装饰器模式提供了一种比使用子类更*

*灵活的方式。*

## 2.模式结构

![image-20230525142213053](./images/image-20230525142213053.png)

在装饰模式结构图中包含如下几个角色：

**Component（抽象构件）**：它是具体构件和抽象装饰类的共同父类，声明了在具体构件中实现的业务

方法，它的引入可以使客户端以一致的方式处理未被装饰的对象以及装饰之后的对象，实现客户端的透

明操作。

**ConcreteComponent （具体构件）**：它是抽象构件类的子类，用于定义具体的构件对象，实现了在抽

象构件中声明的方法，装饰器可以给它增加额外的职责（方法）。

**Decorator（抽象装饰类）**：它也是抽象构件类的子类，用于给具体构件增加职责，但是具体职责在其

子类中实现。它维护一个指向抽象构件对象的引用，通过该引用可以调用装饰之前构件对象的方法，并

通过其子类扩展该方法，以达到装饰的目的。

**ConcreteDecorator（具体装饰类）**：它是抽象装饰类的子类，负责向构件添加新的职责。每一个具

体装饰类都定义了一些新的行为，它可以调用在抽象装饰类中定义的方法，并可以增加新的方法用以扩

充对象的行为。

## 3.模式应用

1.某图书管理系统中，书籍类（ Book ）具有借书方法 borrowBook (）和还书方法 returnBook ()。现需要动态给书籍对象添加冻结方法 freeze (）和遗失方法 lose ()。使用装饰模式设计该系统。

# 十五、模板方法模式

## 1.模式定义

> 模板方法模式（ TemplateMethodPattern ）定义：定义一个操作中算法的骨架，而将此步骤延迟到子类中，模板方法使得子类可以不改变一个算法的结构即可重定义该算法的某些特定步骤。

其定义如下：

*Wikipedia says : The template method is a method in a superclass, usually an abstract*

*superclass, and defines the skeleton of an operation in terms of a number of high-level steps.*

*These steps are themselves implemented by additional helper methods in the same class as the*

*template method.*

*模板方法是超类（通常是抽象超类）中的一种方法，并定义了一个对一系列高层步骤的操作框*

*架。这些步骤本身是由与模板方法相同的类中的其他帮助程序方法实现的。*

*Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template*

*Method lets subclasses redefine certain steps of an algorithm without changing the algorithm's*

*structure.*

*定义一个操作中算法的框架，而将一些步骤延迟到子类中。模板方法模式使得子类可以不改变一*

*个算法的结构即可重新定义该算法的某些特定步骤。*

## 2.模式结构

![image-20230525141342359](./images/image-20230525141342359.png)

在模板方法模式结构图中包含如下几个角色：

**AbstractClass （抽象类）**： 会声明作为算法步骤的方法， 以及依次调用它们的实际模板方法。 

算法步骤可以被声明为抽象类型， 也可以提供一些默认实现。

**ConcreteClass （具体类 ）**： 可以重写所有步骤， 但不能重写模板方法自身。

## 3.模式应用

1.某银行软件的利息计算流程如下：系统根据账号查询用户信息；根据用户信息判断用户类型：不同类型的用户使用不同的利息计算方式计算利息（如活期账户 CurrentAccount 和定期账户 SavingAccount 具有不同的利息计算方式）；显示利息。现使用模板方法模式来设计该系统。

# 十六、策略模式

## 1.模式定义

> 策略模式（ StrategyPattern ）,定义一系列算法，将一个算法封装起来，并让它们可以相互替换。策略模式让算法独立于使用它的客户而变化，也称为政策模式（ Policy )。
>

其定义如下：

*Wikipedia says : In computer programming, the strategy pattern (also known as the policy*

*pattern) is a behavioral software design pattern that enables selecting an algorithm at runtime.*

*在计算机编程中，策略模式（也称为政策模式）是一种行为软件设计模式，可以在运行时选择算*

*法。*

*Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy*

*lets the algorithm vary independently from the clients that use it.*

*定义一系列算法，将每一个算法封装起来，并让它们可以相互替换。策略模式让算法可以独立于*

*使用它的客户端而变化。*

## 2.模式结构

![image-20230529131442833](./images/image-20230529131442833.png)

在策略模式结构图中包含如下几个角色：

**Context（环境类）**：环境类是使用算法的角色，它在解决某个问题（即实现某个方法）时可以采

用多种策略。在环境类中维持一个对抽象策略类的引用实例，用于定义所采用的策略。

**Strategy（抽象策略类）**：它为所支持的算法声明了抽象方法，是所有策略类的父类，它可以是

抽象类或具体类，也可以是接口。环境类通过抽象策略类中声明的方法在运行时调用具体策略类中

实现的算法。

**ConcreteStrategy （具体策略类）**：它实现了在抽象策略类中声明的算法，在运行时，具体策

略类将覆盖在环境类中定义的抽象策略类对象，使用一种具体的算法实现某个业务处理。

## 3.模式应用

1.设计一个网上书店，该系统中所有的计算机类图书（ ComputerBook ）每本都有10%的折扣，所有的语言类图书（ LanguageBook ）每本都有2元的折扣，小说类图书( NovelBook ）每100元有10元的折扣。现使用策略模式来设计该系统，绘制类图并编程实现。
