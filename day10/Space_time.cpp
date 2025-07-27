/*
Space & Time complexity in C++

SCENARIO
Imagine you give your lucky pen to one of your friends.
Now your exams are approaching , so you would like your pen back.

SPACE COMPLEXITY
Space Complexity is the amount of memory space required by an algorithm to run to completion.
It is the total space required by the algorithm to run to completion.
It includes both the space required by the input values and the auxiliary space used by the algorithm.
Auxiliary space is the extra space or temporary space used by an algorithm.

TIME COMPLEXITY
Time Complexity is the amount of time required by an algorithm to run to completion.
It is the total time taken by the algorithm to process the input and produce the output.
Time Complexity is usually expressed as a function of the size of the input.

In our scenario we are looking at time complexity that can be represented in the approach you 
take in finding out who has your pen. However, in computer science ,
this typically means how much time the processes and data structures in our codebase/functions take up to achieve their goal.
Time complexity however is an umbrella term for the different types of time complexities that 
we can calculate. From fastest to slowest they are:
1. Constant Time Complexity - O(1)

2. Logarithmic Time Complexity - O(log n)

3. Linear Time Complexity - O(n)

4. Linearithmic Time Complexity - O(n log n)

5. Quadratic Time Complexity - O(n^2)

6. Cubic Time Complexity - O(n^3)

7. Exponential Time Complexity - O(2^n)

8. Factorial Time Complexity - O(n!)

Example of Complexity Function
● O(n²): You ask one friend if they have the pen. You also ask them if the other 99
friends have the pen. Afterwards move on to the next friend and repeat the process.
● O(n): You ask each friend one by one if they have the pen.
● O(log n): You divide the friends into two rooms and ask if the person with the pen is
in room 1 or room 2. Depending on which group has the pen, split them up into the
two rooms and repeat until there is one person in the right room with the pen.
● O(1): You remember who has the pen and you go to them directly.

\-> You should Know : Something that is important to note is that the Time/ Space Complexity 
of algorithm/code is not in fact actual time or space that is required to execute a particular code 
but the number of times a statement executes. Meaning the function 
is not a measure of time/or space but a measure of what the code is actually doing.

# SUMMARY 
There are multiple solutions that can be written for the same problem . WE need to learn how
to the performance of different algorithms and choose the best one to solve a particular 
problem. While analyzing an algorithm, we mostly consider time complexity and space complexity.

Time complexity is the time taken by the algotithm to execute each set ofinstruction. 
It is always better to select the most efficient algorithm when a simple problem can be solved with different methods. 

Similarly, Space complexity of an algotithm is the amoout of space or memory taken by an 
algorithm to run as a fuction of the length of the input.

Time and space complexity depends on lots of things like hardware, operating system,
processors, etc. However we don't consider any of these factors while analyzing the algorithm.
We will only consider the execution time of an algorithm.


*/