## Running strace for copy-pasting a file

**Note:** <br />
To trace the system calls associated with a file copy-paste operation, make sure you have strace installed locally in your system.
For Ubuntu, use ` apt-get install strace ` 

---

Run the demo.cpp file and make its executable object file. Then simply run
` strace -o log.txt ./demo ` which will write the output of the strace command onto a text file (in this case log.txt).

You can use ` strace -c ./demo ` to view all the system calls made and the number of times each of them is called.
You can also save this to an output file using the method shown above, for ex: `strace -c -o calls.txt ./demo `
