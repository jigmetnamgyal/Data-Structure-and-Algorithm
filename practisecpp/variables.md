# Variables in C++

_Programming is all about data. We manipulate data. Variable is like a container that stores the value._

when we create a variable it's going to be stored in memory, one of two places 
1) The stack memory
2) The heap memory

## Primitive Data Types in C++

It is the building blocks of any kind of data we store in program.

**1a) int**

Size: _4 bytes_

Range(value): _-2^31 **_to_** 2^31 - 1_ 

4 bytes. 1 bytes = 8bits. so total bits in int = 8 * 4 = 32 bits.

Since the type is signed one bit is for sign (-ve or +ve) which only leaves 31 bits.

**1b) Unsigned int**

**Size**: _4 bytes_

**Range(value)**: _0 **_to_** 2^32_ 

**char = 1 bytes, shorts = 2 bytes, long = usually 4 bytes, long long = 8 bytes**

**float = 4bytes, double = 8bytes of data*, bool = 1bytes either 1(true) or 0(false)**

Boolean data type are expected to store only 1 bits it is technically true since it stores either 1 or 0 but however while storing in the memory there is no way to allocate 1 bits of data hence it consumes 1 byte of space. 

_But we can be smart and store 8 bits in a single boolean data type._


