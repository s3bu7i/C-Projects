#include<stdio.h>
#include<conio.h>
#include<windows.h>


int main()
{
    int i = 0;
    while(i<18){
         ShellExecuteA(NULL,"open","www.youtube.com",NULL,NULL,SHOW_FULLSCREEN);
        i++;



    }
    
    return 0;
}
