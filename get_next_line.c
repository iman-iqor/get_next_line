#include "get_next_line.h"

char *ft_extract_line(char *str)
{
    int i = 0;
    int j;
    char *line;

    while (str[i] && str[i] != '\n')
        i++;

    line = malloc(i + 2);
    if (!line)
        return NULL;

    j = 0;
    while(j < i)
    {
        line[j] = str[j];
    }
    if (str[i] == '\n')
        line[i++] = '\n';
    line[i] = '\0';

    return line;
}

char *get_next_line(int fd)
{
    static char *save;
    char buff[BUFFER_SIZE + 1];
    char *line;

    int readed;
    while ((readed = read(fd, buff, BUFFER_SIZE)) > 0)
    {
        buff[readed] = '\0';
        save = ft_strjoin(save, buff);
    }
    if (!save)
        return NULL;
    line = ft_extract_line(save);
    return line;
}

int main()
{
    int fd1 = open("txt1.txt", O_RDONLY);
    char *s;
    s = get_next_line(fd1);
    printf("%s", s);
}
