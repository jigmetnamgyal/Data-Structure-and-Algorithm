# C++ Language
- cpp is good for direct control of the hardware. (It is very fast)
- game uses cpp extensively (Unity and other game engine all uses cpp)
- cpp is a native language that can be used for almost everything
- C# and Java runs on VM, code get compiled to intermediate language first and VM will compile into machine language.
- cpp will directly convert to machine code and no intermediate language is produced.
 
## How Cpp works

- anything that begins with the '#' is called preprocessor. The compiler will preprocess the preprocessor first of all. 
- Code that begins with # is Preprocessor Directive, which happens before Compilation:
- We are including the following code, so that we can use std::cout and similar Input/Output functions
- include - literally means to include the header file.

- << - is a function like "print()"

- inorder to use the function from other c file, we need declaration. 
- Declaration  - statement that says this symbol/function exists.
- Definition - This is what the function is. The body of the function.
- And the two file is connected with a Linker.

## How c++ compiler works

- c++ compiler is responsible for converting the text form to executable binary.
- In doing so two operation involves : 1) Compiling 2) Linking

## a) Compiling

- we take the source file and then create an intermediate format called as object file. 

- In order to create an obj file it: 

1)  preprocess the code (all the # thing is being preprocessed )

2) Tokenization and parsing and basically sorting source code to an intermediate language than an compiler can understand. 

- The final job of the compiler is to convert all our source code to either 1) constant data and 2) instructions. Then it is changed to machine code.
## preprocessor 

1) include 

2) define

3) if and endif

4) pragma

## b) Linker 

- Once our file have been compiled (obj) linker will find the definition of the function and wire up to the function declaration. If the Linker can't find the definition it will produce a Linker error. 

- Each file is compiled as a separate as an object file as a translational unit and they dont have any relation. So in order to relate each other we need to link. That is what Linker does. 

## Linking error

1) unresolved external error - when definition of the function declaration is not found.

2) duplicate symbols. (same name and same signature) - the linker doesnt know which one to link. 
## static

- if you want to use the function only for the single file then we use static. 

- so even if we did not use the function we will not get the linker error. else it will assume that your function could be used in other file and only not in this file.

- can be used to solve linker error.
