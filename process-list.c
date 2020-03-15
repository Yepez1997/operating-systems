/* simple process list for xv6 kernel */


// registers xv6 kernel will store 
struct context {
    int eip;
    int esp;
    int ebx;
    int ecx;
    int edx;
    int esi;  
    int edi;
    int ebp;
}


// differennt states a process can be in 
enum proc_state = {
    USUSED, EMRYO, SLEEPING,
    RUNNABLE, RUNNING, ZOMBIE
}

// info exv6 keeps track of 
struct proc {
    char *mem; 
    uint size;
    char *kstack;
    enum proc_state state; // process state
    int pid; // process id 
    struct proc *parent;
    void chan; 
    int killed;
    struct file *ofile[NOFILE];
    struct inode *cwd;
    struct context context;
    struct trapframe *tf; 
}

int main() {

}
