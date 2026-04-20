#include<stdio.h>
#include<string.h>

struct sigrecord {
    int signum;
    char signame[20];
    char sigdesc[100];
} sigline, *sigline_p;

int main()
{
    sigline.signum = 9;
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Signal");
    printf("%d\n", sigline.signum);
    puts(sigline.signame);
    puts(sigline.sigdesc);
}
