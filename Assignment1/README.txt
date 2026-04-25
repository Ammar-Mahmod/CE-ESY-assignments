Circular Buffer Implementation (C Language)
Description
This project is an implementation of a Circular Buffer (also known as a Ring Buffer) data structure in C. It was developed as part of the CE-ESY26 course assignments to demonstrate an understanding of memory management, pointers, and buffer overflow/underflow handling.

How It Works
A Circular Buffer uses a fixed-size array and two main pointers:

Head (Write Pointer): Points to the next position where data will be written.

Tail (Read Pointer): Points to the next position from which data will be read.

Count: Keeps track of the current number of elements to easily identify Full or Empty states.

When the pointers reach the end of the array, they "wrap around" to the beginning, making efficient use of the allocated memory.

Features
Initialization: Sets up the buffer structure, resetting all pointers and counters.

Write Operation: Adds a character to the buffer. Includes Overflow protection (prevents writing if the buffer is full).

Read Operation: Retrieves a character from the buffer. Includes Underflow protection (prevents reading if the buffer is empty).

Circular Logic: Uses the modulo operator or manual reset to ensure the buffer behaves circularly.

How to Run
Compile the source code using any C compiler (e.g., gcc Assignment1.c -o Assignment1).

Run the executable.

Enter your name when prompted.

The program will append " CE-ESY" to your name, store the result in the circular buffer, and then read it back to display it on the screen.

Note on Testing: To test the Buffer Overflow logic, I manually decreased the Buffer_Size to a value smaller than the input string length (e.g., 5) to verify that the program correctly identifies and reports the overflow.

Author
AMMAR MAHMOD - Student at CE-ESY