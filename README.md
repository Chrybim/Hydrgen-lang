# Hshbrwn

A programming language that I decided to make for multiple reasons, but some of them are
  1. I was very bored and wanted something to do.
  2. I am programming a game as of right now June 24th, 2025, and I am making this to help program that.
  3. To make other people's lifes easier and has an opersource hobby project (Note: probably should've includes the life easier part in the description).

My plans for this programming language are so,
  1. For it to become useful for many people who are new to programming or maybe have some experience in programming.
  2. For it to actually help me with my game programming adventure.
  3. It to be simple and easy to understand.
  4. Actually readable unlike some Pythons I can mention (depends on how complex the code is in Python, obviously).
  5. It to be compiled and also bootstrapped
  6. The programming lang to be really fast and efficient.
  7. To be useful in graphics situations.

## Pipeline

The overall pipeline of **Hshbrwn** is pretty normal just with a few differences.

  1. Firstly, there is the preprocessing stage of the compiler not out of the ordinary pretty normal does all the preprocessing like for macros.
  2. Secondly, there is the actual lexing stage to get the tokens which is implemented standardly with Regular expression also known as Regex and with Enum, of course for the token types.
  3. Thirdly, here comes the parsing stage or syntactic analysis, the parser is made how you expect it to be.
  4. Fourthly, we have the semantic analyzer stage of the entire programming language, which as its name suggests checks for correct semantics. It does typical stuff like type checks.
  5. Fifth, this is the IR generator, here the IR or intermediate representation is generated. The IR is not completed yet because,
  6. Sixthly, going with the IR generator we have the optimizer. The optimizer uses optimization techniques like rapid folding to, well optimize the IR for more efficiency and speed, which are both goals for this language.
  7. Seventhly, finally we have the code generator, the coder generator as it suggests generates code, but not just any code, but instead **assembly** code. This "**assembly code**" is basically an intermediate between machine code and a low level programming language. it      is just a human-readable version of machine code.
  8. This part is done manually, but after the compiler. The user, you, runs a command, which is hshcom standing for hashbrown-compile. You could also use hashbrown-compile. Anyway when you run command a couple things happen.
     1. The assembly code is assembled.
     2. Then the object file is linked with all of its libraries.
     3. This file is now an executable and can be ran.

## Basics/How to start

First familiarize yourself with the hshcom command, not too hard though. You can use it like this "*hshcom -c myhshbrwnfile.hsb -o mycompiledhshbrwnfile.exe*" if output file name not specified defaults to the filename just with the .exe extension instead .hsb, and also you can use --compile instead of -c or --output instead of -o.

Second learn the basics to the language such as control flow and variable declaration.

This language is strongly typed which is important to know so be careful with that when you are declaring a variable.

Here is the structure of an if statement

### Stage 0

#### Statements

if condition {
    code
} elsif condition {
    code
} else {
    code
}

There is also the while statement

while initialization; condition; {
  code
}


For statement

for initialization; condition; {
  code
}

Probably should've done this first but data types.

#### signed integers

si8 8bitsignedinteger = 255;
si16 16bitsignedinteger = -65,535;
si32 32bitsignedinteger = 4,294,967,295;
si64 64bitsignedinteger = -18446744073709551615;
si128 128bitsignedinteger = 170,141,183,460,469,231,731,687,303,715,884,105,727;

#### unsigned integers

ui8 8bitsunsignedinteger = 255;
...
ui128 128bitsunsignedinteger = 170,141,183,460,469,231,731,687,303,715,884,105,727;

#### other data types and operators

str mystr = "Hello World!"

+, -, *, /, //, %, &&, ||, !, &, |, ^, ~, >, <, <=, >=, ==
