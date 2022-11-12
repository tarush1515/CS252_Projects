## Running strace for copy-pasting a file

**Note:** <br />
To trace the system calls associated with a file copy-paste operation, make sure you have strace installed locally in your system.
For Ubuntu, use <br />` apt-get install strace ` 

Run the demo.cpp file and make its executable object file. Then simply run
` strace -o OUTPUT_HERE.txt ./demo ` which will write the output of the strace command onto a text file.