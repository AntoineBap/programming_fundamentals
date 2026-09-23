/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaptist <abaptist@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-05-28 08:37:13 by abaptist          #+#    #+#             */
/*   Updated: 2026-05-28 08:37:13 by abaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*read_until_newline(int fd, char *full_content, char *read_buffer)
{
	char	*prev_str;
	int		bytes_read;

	bytes_read = 1;
	while (!(full_content && ft_strchr(full_content, '\n')) && bytes_read > 0)
	{
		bytes_read = read(fd, read_buffer, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(full_content);
			return (NULL);
		}
		read_buffer[bytes_read] = '\0';
		prev_str = full_content;
		full_content = ft_strjoin(full_content, read_buffer);
		free(prev_str);
	}
	return (full_content);
}

char	*load_full_line(int fd, char *full_content)
{
	char	*read_buffer;

	if (full_content && ft_strchr(full_content, '\n'))
		return (full_content);
	read_buffer = malloc(BUFFER_SIZE + 1);
	if (!read_buffer)
		return (NULL);
	full_content = read_until_newline(fd, full_content, read_buffer);
	free(read_buffer);
	return (full_content);
}

char	*extract_line(char *full_content)
{
	int		i;
	char	*current_line;

	i = 0;
	if (!full_content || full_content[0] == '\0')
		return (NULL);
	while (full_content[i] && full_content[i] != '\n')
		i++;
	current_line = ft_strndup(full_content, i + (full_content[i] == '\n'));
	return (current_line);
}

char	*extract_leftover(char *full_content)
{
	int		i;
	int		j;
	char	*leftover;

	i = 0;
	while (full_content[i] && full_content[i] != '\n')
		i++;
	if (!full_content[i])
		return (NULL);
	i++;
	leftover = malloc(ft_strlen(full_content) - i + 1);
	if (!leftover)
		return (NULL);
	j = 0;
	while (full_content[i])
	{
		leftover[j++] = full_content[i++];
	}
	leftover[j] = '\0';
	return (leftover);
}

char	*get_next_line(int fd)
{
	char		*full_content;
	static char	*leftover;
	char		*current_line;

	full_content = load_full_line(fd, leftover);
	if (!full_content)
	{
		leftover = NULL;
		return (NULL);
	}
	current_line = extract_line(full_content);
	leftover = extract_leftover(full_content);
	free(full_content);
	return (current_line);
}
/* 
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
} */
