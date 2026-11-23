#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"


int	main()
{
	int	fd;
	char	*line;


	fd = open("test1.txt", O_RDWR | O_CREAT);
	if (fd < 0)
		return (-1);
	line = get_next_line(fd);
	while (line)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (0);
}
