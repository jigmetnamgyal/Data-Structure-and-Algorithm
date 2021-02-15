#Storage Classes in C++

Storage class defines the scope and the life time of the variable and of a functions within a c++ programs. 
This is usually written in the beginning of the type they modify.

## Types of storage classes in C++:

- _auto_ = is the default storage call for all the type.
- _static_ 
- _register_ = this storage class is used to define the local variable that should be stored in the **Register**  instead of a **RAM**
    
    This means that the variable have a maximum size of the register of the hardware (usually one word) and cannot use unary operator such as & because there is no memory location.
- _mutable_
- _extern_ = This allow us to refer to global variable and functions to other file. When using this storage class we cannot assign the value.
