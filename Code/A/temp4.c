#include <stdio.h>

struct Process
{
    int pid, at, bt;
    int ct, tat, wt;
};

int main()
{
    int n, i, j;
    struct Process p[20];
    struct Process temp;
    float avgWT = 0, avgTAT = 0;
    int time = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        p[i].pid = i + 1;

        printf("P%d Arrival Time: ", i + 1);
        scanf("%d", &p[i].at);

        printf("P%d Burst Time: ", i + 1);
        scanf("%d", &p[i].bt);
    }

    /* Sort by Arrival Time */
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(p[i].at > p[j].at)
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        if(time < p[i].at)
            time = p[i].at;

        time += p[i].bt;

        p[i].ct = time;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;

        avgWT += p[i].wt;
        avgTAT += p[i].tat;
    }

    printf("\nPID\tAT\tBT\tCT\tTAT\tWT\n");

    for(i = 0; i < n; i++)
    {
        printf("P%d\t%d\t%d\t%d\t%d\t%d\n",
               p[i].pid,
               p[i].at,
               p[i].bt,
               p[i].ct,
               p[i].tat,
               p[i].wt);
    }

    printf("\nAverage Waiting Time = %.2f\n", avgWT/n);
    printf("Average Turnaround Time = %.2f\n", avgTAT/n);

    return 0;
}