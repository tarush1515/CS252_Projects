## Running strace for copy-pasting a file

**Note:** <br />
To trace the system calls associated with a file copy-paste operation, make sure you have strace installed locally in your system.
For Ubuntu, use ` apt-get install strace ` 

---

Run the demo.cpp file and make its executable object file. Then simply run
` strace -o log.txt ./demo ` which will write the output of the strace command onto a text file (in this case log.txt).

---

## Viewing all system calls
You can use ` strace -c ./demo ` to view all the system calls made and the number of times each of them is called.
You can also save this to an output file using the method shown above, for ex: `strace -c -o calls.txt ./demo `


## Screenshot

![alt text](https://github.com/tarush1515/CS252_Projects/blob/main/Strace/output.png)

![alt text](https://github.com/tarush1515/CS252_Projects/blob/main/Strace/calls.png)


## Implementation

- The program of copying the contents from source file and pasting it to destination file is written in C++ programming language.

- The input file was tocopy.txt from where we copied the contents.

- The output file was destination.txt to which we copied the contents.

- The commands discussed above to compile and run the code in order to perform the copy paste operation.

- Then strace log file is created to keep track of all the system calls made during this operation. 

## List of Some System Calls in this operation

### 1. openat
- Open a file relative to a directory file descriptor

### 2. read
- Reads from a file descriptor

### 3. write
- Writes to a file descriptor

### 4. close 
- Closes a file descriptor

### 5. mmap
- map files or devices into memory

### 6. brk
- change data segment size

### 7. access
- checks whether the calling process can access the file pathname.

### 8. pread64
- read from a file descriptor at a given offset

### 9. mprotect
- set protection on a region of memory

### 10. lseek
- reposition read/write file offset


## References

- C++ code for copy-paste operation -
> https://www.geeksforgeeks.org/cpp-program-to-copy-one-file-into-another-file/

- For understanding system calls- websites like gfg, stackoverflow. OS Concepts mentioned above, Youtube.

-Websites

> https://www.geeksforgeeks.org/introduction-of-system-call/


- For understanding Commands and Syntax- websites like 
> https://www.geeksforgeeks.org/strace-command-in-linux-with-examples/

- For documentation assistance - Varun Tiwari 201ME164