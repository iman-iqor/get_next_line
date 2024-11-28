#include "get_next_line.h"

char *ft_extract_line(char *str)
{
    char	*line;
	int 	i;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] && str[i] == '\n')
		i++;
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	if (str[i] && str[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

int fined_nl(char *str, char c)
{
	int i ;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

char *clean_buffer(char *buff)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (buff[i] && buff[i] != '\n')
		i++;
	if (buff[i] && buff[i] == '\n')
		i++;
	if (buff[i] == '\0')
	{
		free(buff);
		return (NULL);
	}
	str = malloc((ft_strlen(buff) - i) + 1);
	if (!str)
		return (NULL);
	j = 0;
	while (buff[i])
		str[j++] = buff[i++];
	str[j] = '\0';
	free(buff);
	return (str);
}

char *get_next_line(int fd)
{
    static char *save;
    char *buff;
    char *line;

    int readed = 1;
	buff = (char *)malloc(BUFFER_SIZE * sizeof(char) + 1);
    while (readed != 0)
    {
		readed = read(fd,buff,BUFFER_SIZE);
		if (readed == -1)
		{
			free(buff);
			return NULL;
		}
        buff[readed] = '\0';
        save = ft_strjoin(save, buff);
		if (fined_nl(buff,'\n'))
			break ;
    }
	free(buff);
    if (!save)
        return NULL;
    line = ft_extract_line(save);
	save = clean_buffer(save);
	if (!line)
		free(buff);
    return line;
}

int main()
{
    int fd1 = open("txt1.txt", O_RDONLY);
    char *s;
    // s = get_next_line(fd1);
    while (1)
	{
		s = get_next_line(fd1);
		printf("%s",s);
		if (!s)
			break ;
		free(s);
	}
}

