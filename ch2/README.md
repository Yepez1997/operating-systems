# Introduction To Operating Systems (Chapter 2)

A program executes instructions, processor fetches instructions from memory, decodes instructionm and executes it 
OS job is to make it easy to run programs, enable them to share memory, allowing them to interact with devices, etc.

---
### Three major themes in OS: 

#### Virtualization 

* OS takes a physical resource and transform -> virtual form. 
* OS provides system calls, standard library to applications.
* OS also know as a **resource manager**.
* Which program should run is answered by **policies**.
* Memory is just an array of bytes and to read the memory specify address.
* Each process has its own virual address space.

#### Concurrency 

* create threads in c with Pthreads_create()
* a **thread** is a function runnign withing the same memory space as other functions, with more than one active simultaneously.
* if a thread does not have a mutex / sync primitive, then strange things can happen. 

#### Persistance
* data in memory should be preservered in some kind of i/o / driver / ssd 
* software that manages the disk -> file system. 
* writing to disk
    1. search disk where data is located 
    2. access low level disk driver with standard lib
 

 

