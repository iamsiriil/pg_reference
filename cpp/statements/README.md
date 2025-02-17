# Statements in C++

### Range-for statement

```c++
for (int number : sequence)
```

* The above line can be read as "_for_ each _number_ in _sequence_", which makes it more intuitive.
* The variable _number_ remains within the scope of the for-statement. 
* Range-for loops are a convinient way to iterate over a sequence.

### For Statement
```c++
for (int i = 0; i < max; i++)
```

* The for-statement allows for greater control over the iteration.
* This format has an initializer part, where it is possible to declare and initialize variables; a termination test, that gets evaluated at the begining of each cycle; and an expression that updates the loop variable. 
* If we need to further use the index variable outside the scope of the for-statement,that we must initialize it before the loop.
* The initialization statement can be left empty, if there is no need to initialize a variable; 
* It is also possible to write and infinite loop, by leaving out all three statements: 

```c++
for (;;) {
    // code block.
}
```

### Reference code

Compile and run the program with single argument, 1 or 2, respectively to run range-for statement example, or for statement example. Usage example:
```bash
g++ cpp_forloop_00.cpp && ./a.out 1
```
