# CS-162-Assignment-5
 This assignment contains a recursive fractal pattern program and a linked list program.

Description: This assignment contains a recursive fractal pattern program and a linked list program.
For the recursive fractal pattern program, there are two user inputs required. The first input is the number
of *'s that the pattern will print. The second user input is the number of whitespaces (' ') before printing
the fractal pattern. Once these inputs are entered, the desired fractal will be printed and the program will end.
For the linked list program, there are several tests designed by Roger to make sure the linked lists functions
are properly implemented. To continue to the next test, you can press enter when prompted. When the tests are
finished, the linked list program will end.

Intructions: To compile the recursive fractal program, you can type "make recurse". To compile the
linked list program, you can type "make link". To run the desired program, you can then type "./assign_5"
right after you have compiled the desired program. "./assign_5" will run the compiled program.

Limitations: Only known limitation to either of the programs are in the user inputs for the recursive
fractal program. The program will catch non odd nums and non neg integers however when a char such as
'a' or '$' is entered, the program will be sent into an infinite loop.

Merge Sort (sort_ascending) Time Complexity: this function is O(nlog(n)). the log(n) is because the function
recursively splits itself in half. The n is because the amount of numbers to place in
sorted order linearly increases.

Selection Sort (sort_descending) Time Complexity: this function's time complexity is O(n^2). the first 
n in this function is because for each index, the function iterates through
each value in the list to find max num. the second n is because everytime it
finds the max num, it needs to do it (n - 1) more times.

Prime (count_prime) Time Complexity: its either O(n^2) or O(n * m). O(n^2) because it iterates through
two for loops to find the number of primes; one for counting the prime and one for iterating
through list. possibly O(n*m) because n is a seperate number from m so they wont increase in
the same way together.

Merge Sort (sort_ascending) Explanation: This function works in 3 steps. The first step is to check
that the list to be sorted is not empty or only contain one node, if this is the case, the function will return.
Second, after checking the base case, the function will split the given list into two lists. After the list has been
split into two, each side of the previous list will run through the merge sort again recursively.
This will happen until the original list that is being sorted has been broken down into singular nodes.
Third, after the singular nodes are obtained, the function will take two lists and merge them together.
When being merged, the lists being merged from will already be sorted. Therefore, we only need to
look at the beginning of the list. When the lists are merged, because the lists beign merged from are already sorted,
the merged list will be sorted as well.

Selection Sort (sort_descending) Explanation: This function works in two parts. First, the function will
iterate through the list starting from the first node that has a value. When it finds a new max value in the list,
the function will set a variable equal to it to save the new max value. Once the list is over, the max value found
in the list will be fed into a swap function. Second, this swap function swaps the nodes of the max value and the head
of the linked list being sorted. Once this is done, the function will recursively call itself again using the next value
after the head of the list. Once the next value in the list is NULL, the function will end as only having one value in a
list means the list of length one is already sorted.

Prime (count_prime) Explanation: This function first finds a node that contains a value. When a value is found,
the program will check if the val % i is equal to zero until i is equal to (val / 2) + 1. The '+ 1' is to account
for the fact that dividing integers will round down to the nearest integer. If a val % i is equal to zero,
the for loop will break as this means that the number is not a prime number. After the value of the number is
determined to be prime or not prime, the list will move onto the next value until it reaches the end of the list.
Once the end of the linked list is reached, the function will return the number of prime numbers counted in the list.

NOTE: program headers are located at the beginning of "recursion.cpp" and "test_linked_list.cpp"