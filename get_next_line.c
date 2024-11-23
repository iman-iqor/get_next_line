#include"get_next_line.h"

char* read_line(char* buff,char* line)
{
    
}

char *get_next_line(int fd)
{
    static char line[BUFFER_SIZE+1];
    ssize_t i;
    int j;
    char *buff;
    buff = malloc(BUFFER_SIZE+1);
    if(!buff)
        return NULL;
    j = 0;
    i = read(fd,buff,BUFFER_SIZE+1); 
f    if(i == -1)
        return NULL;
    
    while(buff[j] && buff[j] != '\n')
    {
        read_line(buff,line);
    }
}