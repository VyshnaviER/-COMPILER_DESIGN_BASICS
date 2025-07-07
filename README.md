# -COMPILER_DESIGN_BASICS

COMPANY : CODTECH IT SOLUTIONS

NAME : VYSHNAVI E R

INTERN ID : CITS0D93

DOMAIN : C PROGRAMMING

DURATION : 4 WEEKS

MENTOR : NEELA SANTHOSH

# Program Description – Lexical Analyzer in C

This program is a basic implementation of a lexical analyzer using the C programming language. The task has been carried out as part of a compiler design learning module and serves as an introductory step into the field of compiler construction. The lexical analyzer is responsible for reading source code and breaking it into smaller meaningful units called tokens. These tokens include keywords, identifiers, and operators, which are essential for the next stages of compilation.

# Tools and Technologies Used

Language: C

Compiler: GCC (GNU Compiler Collection)

Text Editor / IDE: Visual Studio Code

Operating System: Windows 10 (compatible with Linux/MacOS as well)

Visual Studio Code was chosen due to its simplicity, lightweight nature, and strong support for C/C++ development through extensions. The GCC compiler was used to compile and run the program via the built-in terminal in VS Code. The project also makes use of the standard C libraries: stdio.h, stdlib.h, string.h, and ctype.h, which provide functions for input/output operations, string manipulation, memory allocation, and character processing.

# Purpose and Application

This program is highly relevant in the context of compiler design, system software, language processing tools, and static code analyzers. It helps learners and developers understand how source code is broken down and interpreted at the lexical level. It is also applicable in areas like:

Educational tools for compiler learning

Building interpreters or parsers

Syntax highlighting tools in IDEs

Early stages of source code analysis in programming languages

The simplified model shown in this project forms the foundation for more advanced language processing applications.

# How the Program Works

The lexical analyzer reads code from an input file named input.c. It scans the file character by character and groups sequences of characters into words. These words are then classified as:

Keywords: Reserved words in the C language like int, if, return, etc.

Identifiers: Names of variables, functions, or user-defined elements.

Operators: Symbols like =, <, +, etc., used for operations.

The program uses a predefined list of 32 C language keywords stored in an array. It includes helper functions isKeyword() and isOperator() to check whether a word or character matches a known keyword or operator. The logic involves reading one character at a time using fgetc() and grouping alphanumeric characters to form words. Once a complete token is formed, it's printed along with its type.

For a simple input code:

int main() {
    int a = 5;
    return a;
}

The output will show:

[Keyword    : int]

[Identifier : main]

[Keyword    : int]

[Identifier : a]

[Operator   : =]

[Identifier : 5]

[Keyword    : return]

[Identifier : a]

# Conclusion

This program provides a clear understanding of how lexical analyzers function.

# Output

![Image](https://github.com/user-attachments/assets/6a982e4c-ddd4-4d3b-b1e1-344c274186a6)
