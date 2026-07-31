# Lexical Analyzer in C

## 📌 Overview
This project implements a simple Lexical Analyzer in C, which is the first phase of a compiler. It reads a source code file and breaks it into meaningful tokens such as keywords, identifiers, constants, operators, and symbols.

## 🚀 Features
- Identifies C keywords
- Detects identifiers
- Recognizes numeric constants
- Detects operators
- Recognizes special symbols
- Reads source code from a text file

## 🛠 Technologies Used
- C Programming
- GCC Compiler
- File Handling
- Standard C Libraries

## 📂 Project Structure

```
Lexical-Analyzer-in-C/
│── main.c
│── lexer.c
│── lexer.h
│── input.txt
│── Makefile
│── README.md
```

## ▶️ Compilation

```bash
make
```

or

```bash
gcc main.c lexer.c -o lexer
```

## ▶️ Run

```bash
./lexer input.txt
```

## 📥 Sample Input

```c
int main()
{
    int a = 10;
    return 0;
}
```

## 📤 Sample Output

```
Keyword : int
Identifier : main
Symbol : (
Symbol : )
Symbol : {
Keyword : int
Identifier : a
Operator : =
Constant : 1
Constant : 0
Symbol : ;
Keyword : return
Constant : 0
Symbol : ;
Symbol : }
```

## 📖 Concepts Covered
- Lexical Analysis
- Compiler Design Basics
- Tokenization
- File Handling
- String Handling
- Character Classification

## 🎯 Learning Outcome
This project helped me understand how a compiler performs lexical analysis by scanning source code character by character and classifying it into different token types.

---
Developed as part of my learning journey in C Programming and Compiler Design.
