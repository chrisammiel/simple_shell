#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t pid;
    printf("before fork\n");
    
    pid = fork();

    if (pid == -1)
    {
       perror("unsuccessful fork\n");
        return 1;
    }
    printf("after fork\n");
    return 0;
}