This repository contains my personal implementations of common design
patterns.

Motivation
==========

Design patterns are a set best practices used to solve common software
design problems in a flexible, elegant, and ultimately reusable way.
They can be applied immediately to design problems without wasting time
rediscovering them.

Catalogue
=========

<table>
<caption>Patterns</caption>
<colgroup>
<col style="width: 25%" />
<col style="width: 25%" />
<col style="width: 25%" />
<col style="width: 25%" />
</colgroup>
<tbody>
<tr class="odd">
<td><p>Name</p></td>
<td><p>Description</p></td>
<td><p>Type</p></td>
<td><p>Source</p></td>
</tr>
<tr class="even">
<td><p>Singleton</p></td>
<td><p>Ensure a class only has one instance, and provide a global point of access to it.</p></td>
<td><p>Creational</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Abstract Factory</p></td>
<td><p>Provide an interface for creating families of related or dependent objects without specifying their concrete classes.</p></td>
<td><p>Creational</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Builder</p></td>
<td><p>Separate the construction of a complex object from its representation so that the same construction process can create different representations.</p></td>
<td><p>Creational</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Factory Method</p></td>
<td><p>Define an interface for creating an object, but let subclasses decide which class to instantiate. Factory Method lets a class defer instantiation to subclasses.</p></td>
<td><p>Creational</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Lazy initialization</p></td>
<td></td>
<td><p>Creational</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Multiton</p></td>
<td></td>
<td><p>Creational</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Object pool</p></td>
<td></td>
<td><p>Creational</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Prototype</p></td>
<td><p>Specify the kinds of objects to create using a prototypical instance, and create new objects by copying this prototype.</p></td>
<td><p>Creational</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Adapter (or Wrapper or Translator)</p></td>
<td><p>Convert the interface of a class into another interface clients expect. Adapter lets classes work together that couldn’t otherwise because of incompatible interfaces.</p></td>
<td><p>Structural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Bridge</p></td>
<td><p>Decouple an abstraction from its implementation so that the two can vary independently.</p></td>
<td><p>Structural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Composite</p></td>
<td><p>Compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions of objects uniformly.</p></td>
<td><p>Structural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Decorator</p></td>
<td><p>Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.</p></td>
<td><p>Structural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Facade</p></td>
<td><p>Provide a unified interface to a set of interfaces in a subsystem. Facade defines a higher-level interface that makes the subsystem easier to use.</p></td>
<td><p>Structural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Front Controller</p></td>
<td></td>
<td><p>Structural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Flyweight</p></td>
<td><p>Use sharing to support large numbers of fine-grained objects efficiently.</p></td>
<td><p>Structural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Proxy</p></td>
<td><p>Provide a surrogate or placeholder for another object to control access to it.</p></td>
<td><p>Structural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Blackboard</p></td>
<td></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Chain of Responsibility</p></td>
<td><p>Avoid coupling the sender of a request to its receiver by giving more than one object a chance to handle the request. Chain the receiving objects and pass the request along the chain until an object handles it.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Command</p></td>
<td><p>Encapsulate a request as an object, thereby letting you parameterize clients with different requests, queue or log requests, and support undoable operations.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Interpreter</p></td>
<td><p>Given a language, define a represention for its grammar along with an interpreter that uses the representation to interpret sentences in the language.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Iterator</p></td>
<td><p>Provide a way to access the elements of an aggregate object sequentially without exposing its underlying representation.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Mediator</p></td>
<td><p>Define an object that encapsulates how a set of objects interact. Mediator promotes loose coupling by keeping objects from referring to each other explicitly, and it lets you vary their interaction independently.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Memento</p></td>
<td><p>Without violating encapsulation, capture and externalize an object’s internal state so that the object can be restored to this state later.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Null object</p></td>
<td></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Observer (or Publish/Subscribe)</p></td>
<td><p>Define a one-to-many dependency between objects so that when one object changes state, all its dependents are notified and updated automatically.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Servant</p></td>
<td></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Specification</p></td>
<td></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>State</p></td>
<td><p>Allow an object to alter its behavior when its internal state changes. The object will appear to change its class.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Strategy</p></td>
<td><p>Define a family of algorithms, encapsulate each one, and make them interchangeable. Strategy lets the algorithm vary independently from clients that use it.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="odd">
<td><p>Template Method</p></td>
<td><p>Define the skeleton of an algorithm in an operation, deferring some steps to subclasses. Template Method lets subclasses redefine certain steps of an algorithm without changing the algorithm’s structure.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
<tr class="even">
<td><p>Visitor</p></td>
<td><p>Represent an operation to be performed on the elements of an object structure. Visitor lets you define a new operation without changing the classes of the elements on which it operates.</p></td>
<td><p>Behavioural</p></td>
<td><p>GoF</p></td>
</tr>
</tbody>
</table>

License
=======

All source code is made available under the MIT license. You can freely
use and modify the code, without warranty, so long as you provide
attribution to the authors. See [LICENSE](./LICENSE) for the full
license text.

References
==========

1.  Gamma, Erich, Richard Helm, Ralph Johnson, Ralph E. Johnson, and
    John Vlissides. Design patterns: elements of reusable
    object-oriented software. Pearson Deutschland GmbH, 1995.
