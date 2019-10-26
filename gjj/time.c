#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int show(int a, const char * time, char blank, char sign);

int main(int argc, char *argv [])
{
    char _time[9];
    time_t t;
    struct tm *m;
    int iter = 0;
    if (argc == 4)
    {
        iter = atoi(argv[1]);
        if (iter < 0)
            exit(1);
    }
    else
    {
        printf("usage: %s [number] [blank] [sign]\neg.\n\t%s 10 \' \' !\n", argv[0], argv[0]);
        return 0;
    }
    do
    {
        t = time(NULL);
        m = localtime(&t);
        if (strftime(_time,sizeof(_time),"%H:%M:%S",m) == 0) 
            exit(1);
        printf("\033c");
        printf("build at: %s\n",__TIME__);
        show(1,_time, argv[2][0], argv[3][0]);
        sleep(1);
    } while(-- iter);
    return 0;
}

int show(int a,const char * time, char blank, char sign)
{
    if (a!=448)
        show(a+1,time,blank,sign);
    a -= 1;
    char b, c;
    char d[] = {63,40,117,121,106,91,95,41,127,123,64,0};
    char *e = ";;;====~$::199";
    char g,h,i,j;
    if (a %64 )
    {
        i = a&2?1:8;
        g = time[7-a/8%8] -48; 
        j = d[g];
        h = e[a*2&8|a/64]/i %8;
        c = j >> h ;
        b = c&1?sign:blank;
    }
    else 
    {
        b = '\n';
    }
    putchar(b);
    return 0;
}
