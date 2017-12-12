#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>

int main ()
{

	DIR *namedir ;
	char Way[1000];
	getcwd (Way, 1000);
	struct dirent *WDIR;
	namedir = opendir(Way);
	WDIR = readdir(namedir);
	while ((WDIR = readdir(namedir)) != NULL)
		printf (" %s\n", WDIR->d_name);
}

