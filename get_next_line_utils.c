#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	i = -1;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!p)
		return (NULL);
	while (++i < len_s1)
		p[i] = s1[i];
	i = -1;
	while (++i < len_s2)
		p[i + len_s1] = s2[i];
	p[len_s1 + len_s2] = '\0';
	return (p);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	char	*start;

	if (!src)
		return (NULL);
	start = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return (start);
}

char	*ft_strdup(const char *s)
{
	size_t	src_len;
	char	*arr;

	src_len = ft_strlen(s) + 1;
	arr = (char *)malloc(sizeof(char) * src_len);
	if (!arr)
		return (NULL);
	arr = ft_strcpy(arr, s);
	return (arr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	else if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

