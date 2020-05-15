# operating-systems
Notes from OSTEP third edition on operating systems && Linux Kernel Development. </br>
Just jotting down key words and phrases. Chapters are read out of order. 


### OSTEP
- [x] Chapter 2: Introduction to Operating Systems 
   * trap handler
   * kernel mode
   
- [x] Chapter 4: The Abstraction: The Process
   * virtualizing 
   * time sharing
   * mechanisms
   * policies 
   * scheduling policies 
   * machine state
   * program counter / instruction pointer
   * mechanism to how as policy to which 
   * paging / swapping 
   * ready to running -> scheduled 
   * running to ready -> descheduled
   * procces list / task list / process control block
   * register context 
   * final state exited but not cleaned : zombie 
   
### Linux Kernel Developement 
- [x] Chapter 1: Introduction to Linux Kernel 
   * user space 
   * kernel space
   * monolithic kernel design
   * microkernel design 
   * system calls
   
- [x] Chapter 5: System Calls 
   * unix posix standard
   * sys calls (perror(),  getpid())
   * sys call number 
   * sys call table 
   * context switch (user to kernel, kernel to user) $0x80 
   * parameter passing with registers
   * verifying parameters in sys calls 
   * sys call implementaion, sys call context, binding (add to tail in sys table)
   
 - [x] Chapter 2: Process Management
   * processes & threads
   * virtualized proccess, virtualized memory
   * fork, exec, wait4, waitpid, exit,
   * task list (doubly linked list)
   * slab allocator 
   * pid_t (PID)
   * process state (5 possible states)
   * ptrace 
   * process context
   * copy on write pages
   * fork, vfork, _clone
   * clone() -> do_fork() -> copy_process() -> copy_flags()
   * vfork() - page tables not copied
   * kernel threads (do not have an adress space) linux/kthread.c
   * do_exit() kernel/exit.c
   * ipc semaphore 
   * release_task()
   * orphan processes (child exits)
   * ptraced list 
