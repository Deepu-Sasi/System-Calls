#include<stdio.h>
#include<dirent.h>
#include <stdlib.h>

struct dirent *dptr;
int main(int argc,char*argv[])
{
char buff[256];
DIR *dirp;
printf("\n\nEnter the directory name :");
scanf("%s",buff);
if((dirp=opendir(buff))==NULL)
{
printf("Error\n");
exit(1);
}
while(dptr=readdir(dirp))
{
printf("%s\n",dptr->d_name);
}
closedir(dirp);
}
