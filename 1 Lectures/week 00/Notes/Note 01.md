## Inside Our First Program and Beyond

**Note:** Nazu

This note explores the concepts introduced in our first C/Scratch program and dive deeper into computer fundamentals.

**Conditional Statements:**

The code snippet demonstrates conditional statements using `if` and `else` keywords. The indented lines within the `if` block only execute if the condition is true. This allows for programmatic decision-making.

**Our First C Program:**

This program simply prints "hello, world" to the screen. While seemingly simple, it showcases the core elements of a program:

- **#include <stdio.h>**: Includes the standard input/output library for functions like `printf`.
- **int main(void)**: Defines the main function, the program's entry point.
- **printf("hello, world\n");**: Prints the specified string to the console.

**From Readable Code to Binary:**

Computers understand instructions in the language of 0s and 1s (binary) due to their electrical nature. Compilers translate human-readable code into machine code (binary) for execution.

**Binary Basics:**

- Binary uses 0s and 1s to represent information.
- Counting in binary follows the same logic as decimal, but with "carrying the 1" after each position (e.g., 10 in binary is 2).
- Common binary representations: 0 (0), 1 (1), 2 (10), 3 (11), 4 (100).

**Bits and Bytes:**

- A bit is the smallest unit of information in a computer, holding a single value (0 or 1).
- A byte is a collection of 8 bits (2^8 = 256 possible values), commonly used to represent characters or small numbers.
- We often hear terms like megabyte (MB), gigabyte (GB), etc., which refer to larger collections of bytes (e.g., 1 MB = 1,048,576 bytes).

**ASCII and Character Representation:**

- ASCII (American Standard Code for Information Interchange) is a standard that assigns binary codes to letters, numbers, and symbols. This allows computers to display text.

![alt text](image.png)

**Example: Converting "HI" to Binary:**

The note provides an example of converting the letters "HI" to their corresponding binary codes using the ASCII chart (image not included).

**From Numbers to Binary:**

The note explains how numbers in decimal are converted to binary through place value and powers of 2.

**Binary Exercises:**

- Try converting the following decimal numbers to binary:
    - 5 (101)
    - 10 (1010)
    - 16 (10000)
- To convert larger numbers, break them down by place value and add the corresponding binary equivalents (e.g., 23 = 16 + 4 + 3 = 10001).

**Scratch: A Visual Programming Tool:**

Scratch allows creating simple programs using drag-and-drop blocks. It's a great introduction to programming concepts like:

- Statements: Instructions given to the computer (e.g., "say").
- Boolean Expressions: Evaluations resulting in true or false (e.g., "touching mouse-pointer?").
- Loops: Repeating a block of code (e.g., meow indefinitely).
- Conditions: Controlling program flow based on certain criteria (e.g., meow only if touched).
- Variables: Storing and manipulating data within a program (e.g., slices_of_bread_left).
- Arrays: Collections of related data (e.g., storing different types of fruit).

**Events:**

In Scratch, Events are used to trigger actions or behaviors when specific conditions are met. Think of Events like "if-then" statements, but more powerful. Here's a breakdown:

* **What is an Event?**: An Event is a trigger that happens when a specific condition is met. For example, when the user clicks a button, the screen is touched, or the timer reaches a certain time.
* **Types of Events in Scratch**: Scratch has several built-in Events, such as:
	+ **Mouse Click**: Triggered when the user clicks a sprite.
	+ **Key Press**: Triggered when the user presses a key on the keyboard.
	+ **Touch**: Triggered when the user touches the screen.
	+ **Timer**: Triggered when the timer reaches a specific time.
	+ **Collision**: Triggered when two sprites collide.
* **How to use Events in Scratch**: To use an Event, you'll need to:
	1. Create a sprite or a backdrop.
	2. Add an Event block to the sprite or backdrop.
	3. Define the condition that triggers the Event (e.g., "when the user clicks this button").
	4. Add the action that should happen when the Event is triggered (e.g., "say 'Hello'").

**Threading:**

In Scratch, Threading refers to the way the program runs multiple tasks simultaneously. Think of it like a multi-tasking robot: it can do many things at the same time!

A computer program these days can do multiple things at once and a slight white lie. It can create the illusion of doing multiple things at once. It's just so much faster than you, the human are, you don't really notice that it's doing a little bit of this, a little bit of this, and repeating so fast that you don't realize that actually it's not all happening at the same time.

But in Scratch we can implement this idea of multiple threads, multiple scripts or multiple sprites executing at the very same time rather than one after the other. And what this allows us to do is write a program like this where two different sprites somehow interact.

Events and Threading are indeed important concepts in computer science, and they can be challenging to grasp at first. But don't worry, I'm here to help you understand them better!

* **What is Threading in Scratch?**: Threading in Scratch allows you to create multiple scripts that run independently of each other. This means you can create multiple tasks, like animation, sound effects, and game logic, that run concurrently.
* **How to use Threading in Scratch**: To use Threading in Scratch, you'll need to:
	1. Create multiple scripts for each task you want to run concurrently.
	2. Use the "forever" loop to make each script run continuously.
	3. Use the "wait" block to pause the script for a specific amount of time or until a condition is met.
	4. Use the "stop" block to stop the script when a condition is met.