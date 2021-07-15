# Automatic and dynamic allocation, malloc and free
The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.
When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.
This project focuses on allocating some memory spaces to:
1. Create stings.
2. returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
3. concatenate array of chars (string)
4.  returns a pointer to a 2 dimensional array of integers.
5. frees a 2 dimensional grid previously created .


