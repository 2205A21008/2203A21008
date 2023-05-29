/*Write a C program that takes two command line arguments: an integer and a filename. The
 program should read the contents of the given file and print the first 'n' lines, where 
 'n' is the integer provided as a command line argument.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int i,n = atoi(argv[1]);
    fp = fopen(argv[2], "r");
    if (fp == NULL) 
	{
        printf("Could not open file %s", argv[2]);
        return 1;
    }
    for (i=0;i<n;i++) 
	{
        if((read=getline(&line,&len,fp))!=-1) 
		{
            printf("%s", line);
        }
        else {
            break;
        }
    }
    fclose(fp);
    if (line) {
        free(line);
    }
    return 0;
}

