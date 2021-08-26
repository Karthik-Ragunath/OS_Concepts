#include "/home/013/k/kx/kxa200005/apue.2e/include/apue.h"
#include <dirent.h>
//#include <stdio.h>
int main(int argc, char *argv[])
{
	//printf("check apue availability\n");
	DIR *dp;
	struct dirent *dirp;
	if(argc != 2)
	{
		//err_quit("dir name not given");
		printf("dir name not given");
	}
	if((dp = opendir(argv[1])) == NULL)
	{
		//err_sys("cant open folder location");
		printf("cant open file location");
	}
	while((dirp = readdir(dp)) != NULL)
	{
		printf("%s\n", dirp -> d_name);
	}
	closedir(dp);
	exit(0);
 	//return 0;
}
