The documents in this reposistory explore how the Linux, FreeBSD, and Windows operating systems approach: 
* _WR-1_:  Processes and Threads. This section takes a look at what is considered a process and what is considered a thread, as well as CPU scheduling. 
* _WR-2_: Devices. This section analyzes the devices each operating system offers, the development resources, and I/O scheduling.
* _WR-3_: Memory Management. This section is responsible for examining how each operating system handles memory, specifically virtual memory. 
* _WR-4_: File Systems. This section explores two popular file systems from each operating system.
* _Composition_: This document is the combination of the above.

## Notes To Run ##
There are two Makefiles in this reposistory.
_Makefile_ contains a _BUILD_DIR_ variable where one can explicitly locate the directoy which holds the LaTex packages needed to build the documents. For this option simply type ```make```
_mkForLocal_ doesn't have the _BUILD_DIR_ variable. Instead, it assumes the PATH of the system knows where they are. For this option simply type ```make -f mkForLocal```