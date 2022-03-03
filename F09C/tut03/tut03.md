# COMP1511 22T1 - Tutorial 03

### STRUCTS
1. What is a struct? How is it different from integers, doubles and characters? How are they related?

2. We want to hold the information about a particular time in the day. We need to know the hour, minute and whether or not it is AM or PM. (`structs.c`)

    - How do we define the struct that can hold this info?
    - How do we declare and initialise it?
    - How do we print the hour of the time from our struct?
    - How do we print all our info in the format: hh:mm [ap]m?

## WHILE LOOPS
3. What is a While Loop? Why is the word 'while' used?

4. What are the three most important things that should happen in (almost) every while loop?

5. Write a while loop that prints out "hello" ten times (`while.c`)

6. Discuss the errors in these while loops (`bad_while.c`)

7. Write a C program `count_up.c` which reads an integer `n` and then prints the integers `1...n` one per line

### TWO-DIMENSIONAL WHILE LOOPS

8. Write a program that reads in an integer and prints out that many asterisks, each on a new line. How would you convert it to printing out a square rather than a line? (`square.c`)

```
$ ./square
Enter size: 5
*****
*****
*****
*****
*****
```

9. Now modify so it prints the following pattern (`triangle.c`):

```
$ ./triangle
Enter number: 5
*----
**---
***--
****-
*****
```