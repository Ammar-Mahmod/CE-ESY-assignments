# Circular Buffer Implementation (C Language)

## Description
This project is a manual implementation of a **Circular Buffer** (Ring Buffer) data structure in C. It was developed as part of the **CE-ESY26** course assignments to demonstrate efficient memory management and pointer manipulation.



## How It Works
Unlike a linear buffer, a Circular Buffer connects the end of the array back to the beginning. It uses three main components:
* **Head (Write Pointer):** Tracks where the next character will be stored.
* **Tail (Read Pointer):** Tracks the next character to be retrieved.
* **Count:** A counter used to differentiate between a completely full and a completely empty buffer.

## Features
* **Manual Memory Logic:** Implemented from scratch without high-level libraries.
* **Overflow Handling:** The `Write` function detects when the buffer is full and prevents data corruption by issuing a "Buffer Overflow" warning.
* **Underflow Handling:** The `Read` function ensures that reading stops and notifies the user when the buffer is empty.
* **Circular Wrapping:** Pointers automatically reset to index `0` when they reach the `Buffer_Size`, ensuring continuous operation.

## How to Run
1.  **Compile:** Use a C compiler like GCC:
    ```bash
    gcc Assignment1.c -o Assignment1
    ```
2.  **Execute:** Run the program:
    ```bash
    ./Assignment1
    ```
3.  **Input:** Enter your name. The program will append `" CE-ESY"` to it, store it in the buffer, and then display it back to you character by character.

## Testing Scenarios
* **Normal Case:** When `Buffer_Size` is large (e.g., 200), the full name and suffix are stored and retrieved perfectly.
* **Edge Case (Overflow):** When `Buffer_Size` is set to a small number (e.g., 5), the program correctly identifies that the input exceeds capacity and triggers the "Buffer Overflow" message.

## Author
* **AMMAR MAHMOD** - *Student at CE-ESY*
