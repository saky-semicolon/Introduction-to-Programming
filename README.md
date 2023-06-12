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
* [<b>Chapter 05 - Classification of Programming Languages</b>](#chapter-05)
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

# chapter-02
## Conputational Thinking
To ex
# chapter-05
## Classification of Programming Languages

Programming languages are basically classified into two main categories – Low- level language and High-level language. Every programming language belongs to one of these categories and sub-category.
1.	High-level language: to write application programs. Ex: BASIC, COBOL, FORTRAN.
2.	Middle-level language: to write applications and system programs. Ex: C.
3.	Low-level language: mostly used to write system programs. Ex: Assembly language. 

Machine Language (also referred as machine code): This is a sequence of instructions written in the form of binary numbers consisting of 1’s or 0’s to which the computer responds directly.
a.	Advantage of machine language: As computers only understands 0/1, binary numbers, when we write any language. e.g., C. we need a translator program to translate it into computer understandable binary numbers. Machine language itself understands 0/1 directly. Therefore, the computer directly starts executing the machine language instructions, and it takes less execution time.
b.	Disadvantage of machine language:  It is difficult to understand and develop a program using machine language. It is Machine dependent and Difficult to debug and modify.
Examples: 		0011	1100 	Load A register with value 7
		0000	0111
Assembly Language: When symbols such as letters, digits, or, special characters are employed for the operation, operand and other parts of the instruction code, the representation is called an assembly language. Such representations are known as mnemonic codes; they’re used instead of binary codes. A program written with mnemonic codes forms an assembly language program. 
a.	Advantages: Writing a program in assemble language is more convenient and readable than writing one in machine language. Instead of binary sequence, as in machine language, a program in assembly language is written in the form of symbolic instructions.
b.	Disadvantages: It is machine dependent and designed for a specific make and model of a microprocessor that’s why assembly language programs written for one processor won’t work on a different processor. So, it’s not portable and difficult.
Example: 		LD A, 7	Load register A with 7
High-level Languages: These languages have instructions that are similar to human languages and have a set of grammar that makes it easy for a programmer to write programs and identify and correct errors in them. To illustrate this point, a program written in BASIC, to obtain the sum of two numbers, is shown below.
	Stmt. No.		Program statement	Comments
	10		LET X=7		Put into X
	20		LET Y=10		Put 10 into Y
	30		LET SUM = X+Y	Add values in X and Y and put in SUM
	40		PRINT SUM	Output the Content in SUM
High-level languages are classified as procedural and non-procedural and problem-oriented languages. High-level languages are easy to prepare and debug and they’re not machine oriented when Low-level languages are machine oriented.
1. Procedural Languages: -	a. Algorithmic Languages: C, COBOL and FORTRAN.
	b. Object-oriented Languages: C++, Java
2. Non-procedural Languages: -
3. Problem-oriented Languages: - These are designed for developing a convenient expression of a given class of problems.
The Process of Programming:
1.	Understand the problem to the solved.
2.	Think and design the solution logic.
3.	Write the program in the chosen programming languages.
4.	Translate the program to machine code.
5.	Test the program with simple data.
6.	Put the program into operation.
Translators: Suppose two people are trying to communicate with each other. One knows Hindi and another one knows English. So how they will communicate. They can communicate if they have a translator who can convert Hindi to English and English to Hindi. A translator or programming language processor that converts a computer program from language to another. It takes a program written in source code to converts into machine code There are 3 types of translators-
1.	Assembler: The assembler is used to translate the program written in assembly language into machine level language. The source program written in the assembly language is given as the input to the assembler. The output generated by assembler is the object code or machine code understandable by the computer. 
FAP – Fortran Assembly Program
MAP – Macro Assembly Program
2.	Compiler: The compiler will read the complete source program written in high level language, if the code is error free then it will convert into machine level language. The compiler specifies the errors at the end of compilation, if there are any errors in the source code. The errors must be removed before the compiler can successfully recompile the source code again.
COBOL – Common Business Oriented Language
3.	Interpreter: Just like compiler, interpreter is used to convert high-level language to machine level language. It converts one at a time and reports errors detect once, while doing conversion. With this it is easier to detect errors than in a compiler. An interpreter is faster than a compiler as it immediately executes the code upon reading the code.
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
