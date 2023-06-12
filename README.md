# Introduction-to-Programming

Congratulations on making such a great decision to learn programming. In this repository we will focus on the concepts of programming more than solving problems.
<img src="https://st.depositphotos.com/2065405/4839/i/450/depositphotos_48392531-stock-photo-word-cloud-coding.jpg">

## Table of Contents
* [<i>Preface</i>](#preface)
* [<b>Chapter 0 - An Overview of PC Components</b>](#chapter-0)		              	
* [<b>Chapter 01 - Programs and Programming</b>](#chapter-01)		              	
* [<b>Chapter 02 - Computational Thinking</b>](#chapter-02)
* [<b>Chapter 03 - Translators- Assembler, Compiler, Interpreter</b>](#chapter-03)
* [<b>Chapter 04 - Programming Languages</b>](#chapter-04)
* [<b>Chapter 05 - Problem Solving</b>](#chapter-05)
* [<b>Chapter 06 - Bug & Debug</b>](#chapter-06)
* [<b>Chapter 07 - Computer Software</b>](#chapter-07)
* [<b>Chapter 08 - Structured Programming Concept</b>](#chapter-08)
* [<b>Chapter 09 - Algorithms</b>](#chapter-09)
* [<b>Chapter 10 - Algorithms and Flowcharts</b>](#chapter-10)
* [<b>Chapter 11 : Pseudo Codes</b>](#chapter-11)

# <i>Preface</i>

<img src="https://helios-i.mashable.com/imagery/articles/04mFAKaq7SCZFykWe1X8x7r/hero-image.fill.size_1200x675.v1680014662.png">

Welcome to the fascinating world of programming! In an era where technology is advancing at an unprecedented pace, programming has become an indispensable skill that empowers individuals to shape the digital landscape. Whether you aspire to become a software engineer, a data scientist, a web developer, or simply gain a deeper understanding of the technology that surrounds us, learning to program opens up a world of endless possibilities.

This book serves as a comprehensive introduction to programming, designed for beginners who are taking their first steps into the realm of coding. We understand that starting a new journey can be daunting, especially when entering a field as vast and ever-evolving as programming. That's why this book is carefully crafted to guide you through the fundamental concepts and principles of programming in a clear and approachable manner.

Within these pages, you will embark on a hands-on learning experience, discovering the building blocks of programming and gaining the tools to bring your ideas to life. Starting from the basics of programming logic and problem-solving techniques, we will gradually introduce you to the core concepts of programming languages, syntax, control structures, and data manipulation.

Throughout your journey, you will encounter numerous practical examples and exercises that reinforce your understanding and help you develop your coding skills. We believe that active learning and practice are vital components in mastering programming, so we encourage you to tackle the exercises and experiment with the code snippets provided. By doing so, you will not only strengthen your grasp of the concepts but also foster a sense of creativity and problem-solving abilities that are essential in the programming world.

It's important to note that programming is not just about writing lines of code; it's about developing a mindset and approach to problem-solving. As you progress through this book, you will gain insights into algorithmic thinking, debugging techniques, and best practices for writing efficient and maintainable code. These skills will not only help you in programming but will also be valuable in many other aspects of your life, as they cultivate logical reasoning, attention to detail, and the ability to break down complex problems into manageable tasks.

While this book lays the foundation for programming knowledge, it is merely the beginning of your journey. Programming is a vast field, continuously evolving and expanding. As you master the basics covered in this book, you will find yourself ready to explore more advanced topics and specialize in specific areas of programming that align with your interests and goals.

Remember, learning to program is a process that requires patience, perseverance, and a growth mindset. Mistakes and challenges are natural parts of the learning process, and they offer valuable opportunities for growth. Embrace the joy of discovery, celebrate your achievements, and never hesitate to seek help or collaborate with fellow learners and programmers.

Now, take a deep breath, prepare to embark on an exciting adventure, and let's dive into the world of programming together!

<b><i>Happy coding!</i></b>


# Chapter-0
## An Overview of PC Components

### Input / Output Devices
* <b>Input Devices</b> <br>
  Accepts information from the user and transforms it into digital code that the computer can process <br>
  Example: keyboard, mouse, scanner
* <b>Output Devices</b> <br>
  An interface through which the computer conveys its output to the user <br>
  Example: monitor, printer

### Main Memory
 * A semiconductor device which stores the information necessary for a program to run.
 * 2 types-
    1. ROM (Read Only Memory) <br>
       * Contains information that is necessary for the computer to boot up
       * The information stays there permanently even when the computer is turned off.
    2. RAM (Random Access Memory)
       * Contains instructions or data needed for a program to run
       * Gets erased when the computer is turned off.

### Central Processing Unit (CPU)
 * Does most of the work in executing a program
 * The CPU inside a PC is usually the microprocessor
 * 3 main parts:
    1. Control Unit
      * Fetch instructions from main memory and puts them in the instruction register
    2. ALU (Arithmetic Logic Unit)
      * Executes arithmetic operations
    3. Registers
      * Temporarily stores instructions or data fetched from memory
#### Storage Devices
 * A magnetic, optical, magneto-optical or flash device used to store a large amounts of information.
 * Stores the software components or data needed for the computer to execute its tasks.
 * Can be “read only” or “writable”.
  * Example: Hard drive, DVD-ROM, DVD-RW, USB flash drive

### Network Devices
  * Connects a computer to other computers.
  * Enables users to access data or execute programs remotely.
  * Example: modem, router, switch, Ethernet card

# Chapter 01
## Programs and Programming 
* <b>Programs:</b> A Program is a set of logically related instructions that is arranged in a sequence that directs the computer in solving a problem. Computer programs are one component of software, which also includes documentation and other intangible components. A computer program in its human-readable form is called source code.
* <b>Programming:</b> The process of writing a program is called programming. Computer programming is the process of performing a particular computation, usually by designing and building an executable computer program. Programming involves tasks such as analysis, generating algorithms, profiling algorithms' accuracy and resource consumption, and the implementation of algorithms.

Here in this repository we will start programming with C. Let's write our first code in C that prints something like Hello World!

    #include<stdio.h>
    int main()
    {
      printf("Hello World!\n");
      return 0;
    }

<b>Output:</b>

      Hello World!
<b>C Programs Syntax:</b>

<img src="media_files/C%20syntax.jpeg">


# chapter-02
## Conputational Thinking
Computational thinking is a problem-solving approach that draws on concepts and techniques used in computer science and programming. It involves breaking down complex problems into smaller, more manageable parts and developing a logical and systematic approach to solving them.

At its core, computational thinking involves four key components:

1. Decomposition: Breaking down a complex problem or task into smaller, more manageable sub-problems or steps. This helps in understanding the problem's structure and identifying its key components.

2. Pattern recognition: Identifying common patterns, similarities, or regularities within a problem. This involves recognizing similarities between different instances of a problem and leveraging those patterns to develop general solutions.

3. Abstraction: Creating generalized models or representations of a problem or system, focusing on the essential details while ignoring unnecessary complexity. Abstraction helps in simplifying a problem and making it easier to solve.

4. Algorithmic thinking: Developing step-by-step instructions or algorithms to solve a problem. This involves designing a logical sequence of operations or actions that can be followed to achieve the desired outcome.

<img src="https://www.nordangliaeducation.com/bsn-nanjing/-/media/bsn-nanjing/news-events/computational-thinking-unplugged/computing.jpg?rev=dcf3b33a11544bde9daab93c50b6a592&hash=D4F68D589A5B0ABF749B6C80CF5AB0AB">

Computational thinking is not limited to computer science or programming; it can be applied to a wide range of disciplines and real-life situations. It helps in developing problem-solving skills, logical reasoning, and the ability to think critically and analytically. Computational thinking can be beneficial in fields such as mathematics, engineering, science, data analysis, and even everyday problem-solving tasks.

By applying computational thinking, individuals can approach complex problems more effectively, devise efficient solutions, and understand the underlying principles that govern those solutions. It promotes a systematic and structured approach to problem-solving, which can lead to improved decision-making and innovation in various domains.

# chapter-03
## Translators- Assembler, Compiler, Interpreter
Translators are software programs that convert high-level programming languages or human-readable code into machine-readable code or executable instructions that can be understood and executed by a computer. There are three types of translators: assemblers, compilers, and interpreters. Let's explore each of them:
<img src="https://logicmojo.com/assets/dist/new_pages/images/diff-compiler.jpg">

1. Assembler:
   - An assembler is a translator specifically designed for low-level programming languages, such as assembly language.
   - It converts assembly language code, which is a mnemonic representation of machine instructions, into machine code directly executable by the computer's processor.
   - Assemblers perform a one-to-one mapping between assembly instructions and machine instructions, usually with a one-to-one correspondence.
   - The output of an assembler is typically an object file or executable file that can be directly loaded and executed by the computer.

2. Compiler:
   - A compiler is a translator that converts high-level programming languages (e.g., C, C++, Java) into machine code.
   - It analyzes the entire source code and translates it into an equivalent executable form, without the need for re-translation during subsequent executions.
   - The compilation process consists of several stages, including lexical analysis, syntax analysis, semantic analysis, code generation, and optimization.
   - The output of a compiler is usually an executable file or a binary that can be run directly on the target machine architecture.

3. Interpreter:
   - An interpreter is a translator that translates and executes high-level programming languages one line or instruction at a time.
   - It reads the source code, interprets it, and executes it line by line or statement by statement.
   - Unlike compilers, interpreters do not produce a standalone executable; they directly execute the source code.
   - Interpreters often perform additional tasks like runtime error checking and dynamic memory management.
   - Interpreted languages, such as Python and JavaScript, use interpreters to execute their code.

The choice between using an assembler, compiler, or interpreter depends on the programming language, the target platform, and the desired trade-offs between execution speed, portability, and development flexibility. Assemblers are typically used for low-level programming and specific hardware optimizations, compilers are used for efficient code execution, and interpreters offer flexibility and ease of use at the cost of reduced performance.

# Chapter-04

## Programming Languages

Programming languages are basically classified into two main categories – Low- level language and High-level language. Every programming language belongs to one of these categories and sub-category.
1.	High-level language: to write application programs. Ex: BASIC, COBOL, FORTRAN.
2.	Middle-level language: to write applications and system programs. Ex: C.
3.	Low-level language: mostly used to write system programs. Ex: Assembly language. 

### Machine Language (also referred as machine code): 
This is a sequence of instructions written in the form of binary numbers consisting of 1’s or 0’s to which the computer responds directly.

    * Advantage of machine language: As computers only understands 0/1, binary numbers, when we write any language. e.g., C. we need a translator program to translate it into computer understandable binary numbers. Machine language itself understands 0/1 directly. Therefore, the computer directly starts executing the machine language instructions, and it takes less execution time.
    * Disadvantage of machine language:  It is difficult to understand and develop a program using machine language. It is Machine dependent and Difficult to debug and modify.
      * Examples: 

            Load A register with value 7
            0000	0111

### Assembly Language: 
When symbols such as letters, digits, or, special characters are employed for the operation, operand and other parts of the instruction code, the representation is called an assembly language. Such representations are known as mnemonic codes; they’re used instead of binary codes. A program written with mnemonic codes forms an assembly language program. 

    * Advantages: Writing a program in assemble language is more convenient and readable than writing one in machine language. Instead of binary sequence, as in machine language, a program in assembly language is written in the form of symbolic instructions.
    * Disadvantages: It is machine dependent and designed for a specific make and model of a microprocessor that’s why assembly language programs written for one processor won’t work on a different processor. So, it’s not portable and difficult.
    * Example: 		LD A, 7	Load register A with 7

### High-level Languages: 
These languages have instructions that are similar to human languages and have a set of grammar that makes it easy for a programmer to write programs and identify and correct errors in them. To illustrate this point, a program written in BASIC, to obtain the sum of two numbers, is shown below.

            Stmt. No.		Program statement	Comments
            10		LET X=7		Put into X
            20		LET Y=10		Put 10 into Y
            30		LET SUM = X+Y	Add values in X and Y and put in SUM
            40		PRINT SUM	Output the Content in SUM

High-level languages are classified as procedural and non-procedural and problem-oriented languages. High-level languages are easy to prepare and debug and they’re not machine oriented when Low-level languages are machine oriented.

1. Procedural Languages:
    * Algorithmic Languages: C, COBOL and FORTRAN.
	  * Object-oriented Languages: C++, Java
2. Non-procedural Languages:
3. Problem-oriented Languages: - These are designed for developing a convenient expression of a given class of problems.

### The Process of Programming:
1.	Understand the problem to the solved.
2.	Think and design the solution logic.
3.	Write the program in the chosen programming languages.
4.	Translate the program to machine code.
5.	Test the program with simple data.
6.	Put the program into operation.

# Chapter-05
## Problem Solving

# Chapter-07
## Computer Software 

It can be broadly classified into two categories:
1.	System Software: An operating system that manages the computer’s resources effectively, takes care of scheduling multiple jobs for execution, and manages the flow of data and instructions between the input/output units and the main memory. (ex: windows 7, windows 10, Linux, Mac. etc.)
  * Language Translator
  * Operating System
  * Utilities
  * Special Purpose Program

2.	Application Software: Application software is written to enable the computer to solve a specific data processing task. (ex: Database management software, Spreadsheet software, multimedia software. Etc.)
  * Pre-written software
  * User-written application programs.




Python
Structured Programming Concept: A better way of programming – a systematic way to organize programs called structured programming.
Algorithms: According to the computer scientist Niklaus Wirth stated that- PROGRAM = ALGORITHMS + DATA
An algorithm is a part of the plan for the computer program and an effective procedure for solving a problem in a finite number of steps. Algorithm may be represented in various ways. These are four ways of stating algorithms-
•	Step-form: The procedure of solving a problem is stated with written statements. Each statement solves a part of the problem and these together complete the solution. The step-form uses normal language to define each procedure.
•	Pseudo-code: The pseudo-code is a written form representation of the algorithm but it differs from the step-form as it uses a restricted vocabulary to define its action of solving the problem.
•	Flowchart & Nassi-Schneiderman: These two are graphically oriented representation forms. They use symbols and language to represent sequence, decision and repetition actions.
Algorithms show these three features:
1.	Sequence (also known as process): Sequence means that each step or process in the algorithm is executed in the specific order.
2.	Decision (also known as selection): (if…. then, if…. then…. else…) In algorithms the outcome of a decision is either true or false; there is no state in between. 
If proposition 
          then process1 
else process2
This is the if… then… else… form of the decision. This means that if the preposition is true then execute process1, else, or otherwise,     execute process2.
3.	Repetition (also known as iteration or looping): repeat and while. repeat loop, while loop, if… then go to ... loop. The repeat loop is used to iterate or repeat a process or sequence of processes until some condition becomes true. It has the general form:
      Syntax:					Example:
Repeat					Repeat
         Process1				Fill water in kettle
         Process2				until kettle is full
         ……….……				
         ProcessN				
         Until proposition				

While preposition				while kettle is not full
Begin					fill water in kettle
Process1
Process2
……………
ProcessN
end

If … then goto … is:
         Process1				Fill some water in kettle
         Process2				if kettle not full then goto 1
         ……………
         ProcessN
         If proposition then goto Process1

Constant and Variable: Constant is a fixed value that can’t be changed. On the other hand, the variable is a container for a value that may vary during the execution of the program. For example, in the tea-making algorithm, the cup and kettle are constant whether the water level, water temperature and quantity of tea leaves are variable.
Developing algorithms using step-form:
1.	START and STOP
2.	INPUT or READ
3.	PRINT
4.	Operators-
a.	Arithmetic Operators: ←; The expression X←6 means that a value 6 is assigned to the variable X. Examples: +, -, *, /, %
b.	Relational Operators
