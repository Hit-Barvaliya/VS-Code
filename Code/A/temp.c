#include <stdio.h>
#include <unistd.h>
#include <sys/utsname.h>
#include <sys/sysinfo.h>

int main()
{
    struct utsname u;
    struct sysinfo s;

    printf("PID  : %d\n", getpid());
    printf("PPID : %d\n", getppid());

    if (uname(&u) == -1)
    {
        perror("uname");
        return 1;
    }

    printf("System       : %s\n", u.sysname);
    printf("Hostname     : %s\n", u.nodename);
    printf("Kernel       : %s\n", u.release);
    printf("Machine      : %s\n", u.machine);

    if (sysinfo(&s) == -1)
    {
        perror("sysinfo");
        return 1;
    }

    printf("Uptime       : %ld seconds\n", s.uptime);
    printf("Total RAM    : %lu MB\n",s.totalram / (1024 * 1024));
    printf("Free RAM     : %lu MB\n",s.freeram / (1024 * 1024));
    printf("Total Swap   : %lu MB\n",s.totalswap / (1024 * 1024));
    printf("Free Swap    : %lu MB\n",s.freeswap / (1024 * 1024));

    return 0;
}