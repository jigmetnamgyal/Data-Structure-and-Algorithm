# C++ Language
- cpp is good for direct control of the hardware. (It is very fast)
- game uses cpp extensively (Unity and other game engine all uses cpp)
- cpp is a native language that can be used for almost everything
- C# and Java runs on VM, code get compiled to intermediate language first and VM will compile into machine language.
- cpp will directly convert to machine code and no intermediate language is produced.
 
## How Cpp works

- anything that begins with the '#' is called preprocessor. The compiler will preprocess the preprocessor first of all. 
- Code that begings with # is Preprocessor Directive, which happens before Compilation:
- We are including the following code, so that we can use std::cout and similar Input/Output functions
- include - literally means to include the header file.

- << - is a function like "print()"

- inorder to use the function from other c file, we need declaration. 
- Declaration  - statement that says this symbol/function exists.
- Definition - This is what the function is. The body of the function.
- And the two file is connected with a Linker.

## Linker 
- Once our file have been compiled linker will find the definition of the function and wire up to the function declaration. If the Linker can't find the definition it will produce a Linker error. 

## How c++ compiler works

- c++ compiler is responsible for converting the text form to executable binary.
- In doing so two operation involves : 1) Compiling 2) Linking

## a) Compiling

- we take the source file and then create an intermediate format called as object file. 

- In order to create an obj file it: 

1)  preprocess the code (all the # thing is being preprocessed )
2) Tokenization and parsing and basically sorting source code to an intermadiate language than an compiler can understand. 

- The final job of the compiler is to convert all our source code to either 1) constant data and 2) instructions. Then it is changed to machine code.
