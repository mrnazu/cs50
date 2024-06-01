# Buggy (Week 02)
I think in order to do this topic.. we have to first done the problem set 0 C task :)) {Done}

## `buggy1.c`
There is a `buggy1.c` program, this is indeed a buggy program. It's supposed to print out 10 stars on the screen. But why does it not in fact print 10 stars and what does it actually print?

```
./buggy1
***********
```
Okay so 11. why is that? `int i = 0; i <= 10; i++` we started counting at zero and that is good starting, the probelm is we are counting upto 10 or equal to 10. So if we start from zero untill 10.. then it would be "11"

The sol is just removing the equal sign.. we just need to be less than 10 `int i = 0; i < 10; i++`

> **********

## `buggy2.c`
How about buggy2.c, which is also supposed to print 10 asterisks, one per line, but doesn’t?

The second printf statement is not executed within the scope of the loop because no curly braces are placed around it and the first printf statement! Once we add the curly braces and recompile, we’ll get one asterisk per line as we intended. We could also print out the asterisk and the newline character in a single call to printf to make this cleaner.

## `math1.c`
The following program, though syntactically correct, will not compile. 
Although we correctly computed the sum of x and y, we never actually do anything with it. Hence the “unused variable” error. We fix this error by simply calling printf with the value of z in math2.c

## `math3.c`
math3.c demonstrates a problem with precision.

17/13 will evaluate to a little over 1, so surely the 32 bits of a float will be enough to represent this value. When we print it out, we use the formatting string %.2f to tell printf to display two digits after the decimal point.

When we compile and run math3.c, we get the incorrect value 1.00 printed out. What’s going on? 17 and 13 are both integers, so when we divide them, C defaults to integer division and provides an integer result. The digits after the decimal point are truncated, or chopped off

To solve this problem, we can make use of typecasting, which allows us to convert from one variable type to another. We can explicitly cast 13 to a floating point value by writing (float) 13. Another way to convince the compiler that 13 should be stored as a floating point value is to write it as 13.0. We do this in math4.c and thus get the correct answer to our division problem.

Question: why do we cast 13 but not 17? It suffices to cast only one to a float in order for C to default to floating point division. you can choose any of them.. or just ignore putting (float) stuff and just write is 17.0 and 13.0 just to convince the compiler that the number is float not int.

Question: if the result of dividing 17 by 13 was an integer, how did it get converted to a float in the first place? By assigning it to a variable with type float, it was implicitly cast to a float. Thus, the decimal point was added.

## `nonswitch.c` and `switch1.c`
nonswitch.c demonstrates the use of the “and” operator. Pretty straightforward. we’re telling the user what kind of number he picked. Certainly it works as it’s supposed to, but is there a better way to do this from a style or readability standpoint? You betcha!1 We do so using a switch, as we see in switch1.c

**Question:** is there a way to handle large ranges of numbers with switch statments? No, you would need to use if-else if-else.

## `positive1.c`
One type of loop that we haven’t seen an example of is the do-while loop. do-while loops have a particular use. The while block comes after the do block, and, as you might expect, executes after it as well. This is useful when we want to guarantee that some block of code be executed at least once no matter what. Let’s take a look at an example in `positive1.c`.

Obviously, we want to want to ask the user for his input at least once no matter what. Now we’ll either continue to execute the loop (which will ask the user for input again) if the user didn’t provide the input we were looking for (in this case a positive integer)

It seems a little ugly that we’re declaring the variable n outside the do block, but the reason is that variables declared within blocks of code like this only exist within those blocks of code, not outside of them. This is called scope. If we didn’t declare n outside the loop, it wouldn’t exist when we wanted to print it out at the end of our program and so the compiler would throw an error saying ‘n’ undeclared. We could even declare n outside of the main function so that it would be available to every function in our program. However, this would make it a global variable, which can cause unexpected problems and is generally considered to be bad style.

## `positive2.c`
positive2.c implements the exact same program as positive1.c but with the use of a boolean variable.

## `positive3.c`
positive3.c is a final example that demonstrates the use of the ! or bang operator. This inverts the value of whatever expression comes after it. So if we write while (!thankful), it reads as “while not thankful,” which
actually makes for pretty readable code.

## `progress1.c`
progress1.c demonstrates use of the sleep function as well as a for loop.

This code is a very simple implementation of a progress bar, counting from 0 to 100 over the course of 100 seconds or so. As you might have guessed, the sleep function causes the program to halt execution for some number of seconds, in this case 1. To use this function, we must include the `unistd.h` library.

## `progress2.c`
Let’s make our output a little more visually appealing.

Here, we’re using `\r` instead of `\n`. `\n` specifies a newline, but `\r` specifies a carriage return, meaning that the cursor will be moved all the way to the left on the screen. Unfortunately, there is some inconsistency when it comes to newline characters across different operating systems. Linux and Mac OS use `\r` as the standard newline character, but Windows uses `\r\n`. This can lead to problems with file conversion.

If we compile and run this program, we see that the progress indicator remains on a single line. Using \r causes the next line to overwrite the previous one which gives the appearance of animation since the lines are the same length.

## `progress3.c`
Programmatically, we can achieve the same effect from progress2.c using a while loop instead of a for loop.

We have to be careful to include the update condition i++ within our loop code block somewhere or else our loop will repeat infinitely.

# typecasting
## `ascii1.c`
As ascii1.c demonstrates, you can actually explicitly convert an integer to an ASCII character simply by casting it.

This program simply prints all the letters in the alphabet, both lowercase and uppercase, along with their ASCII mappings to integers.

## `ascii2.c`
In grade school, you may have passed a note to your crush or best friend3 that was written in code. A simple way of encrypting the note would have been to shift each of the letters down by one. So “a” would become “b,” “b” would become “c,” and so on. How do we express this programmatically? If we cast a letter to a number and then add 1, then cast it back to a letter, we would effectively shift it down the alphabet by one. ascii2.c demonstrates that characters and numbers are actually interchangeable in C.

Here we’re simply casting i to a char in order to turn it into its corresponding ASCII character.