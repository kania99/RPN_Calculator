# RPN Calculator

RPN Calculator is a project I realized in the first semester of my studies within the Programming Principles course at the Wroclaw University of Technology in the field of Control Engineering and Robotics. The main goal of this task was to implement a stack using a linked list. Then, using the stack, create a calculator that works according to the RPN *(Reverse Polish Notation)*.

## Table of Contents
- [Features](#features)
- [Setup](#setup)
- [Usage](#usage)
- [Concepts I Learned](#concepts-i-learned)
  
## Features

- Perform the following operations on integers:
  - addition
  - subtraction
  - multiplication
  - division
- Perform the following operations related to the stack structure:
  - pop the number from the top of the stack
  - swap two numbers on the top of the stack
  - duplicate number on the top of the stack
  - display number on the top of the stack
  - display full stack
  - clear stack

## Setup
Prerequisites:
* Installed CMake *(minimum VERSION 3.0)*,

Clone repository:

    git clone https://github.com/maciejkaniewski/RPN_Calculator.git

Create `build` directory and launch `CMake`:

    cd RPN_Calculator
    mkdir build
    cd build
    cmake ..

Run `make` command and execute the program:

    make
    ./RPN_Calculator

## Usage

After starting the program, the following text appears in the terminal:

    RPN Caluculator
    For help type "h"

To learn how to use the calculator, enter `h` and a full user manual will appear along with an example of using one of the mathematical operations:

    The calculator performs the following options on integers:

    "+" - addition
    "-" - subtraction
    "*" - multiplication
    "\" - division
    "p" - pop the number from the top
    "s" - swap two numbers on the top of the stack
    "d" - duplicate number on the top of the stack
    "t" - display number on the top of the stack
    "f" - display full stack
    "c" - clear stack
    "q" - quit

    The calculator performs math operations on
    two consecutive numbers at the top of the stack.

    Example:

    1
    6
    3
    f
    Stack:
    3
    6
    1
    A division operation was performed
    f
    Stack:
    2
    1

    The number 6 was divided by the number 3 (6/3).
    The result of this operation has been placed on top of the stack.

Based on the above information, you can perform other mathematical operations as well as operations related to the stack structure itself.

## Concepts I Learned

- The concept of a stack and its representation using a linked list,
- Using pointers in more complex functions,
- Handling memory allocated by pointers.
