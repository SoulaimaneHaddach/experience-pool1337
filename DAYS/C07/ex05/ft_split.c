#include <unistd.h>
#include <stdlib.h>

int	is_sep(char c, char *charset)
{
    int i;

    i = 0;
    while(charset[i])
    {
        if(c == charset[i])
            return(1);
        i++;
    }
    return(0);
}
int	count_words(char *str, char *charset)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while(str[i])
    {
        if(!is_sep(str[i], charset) &&
        (i == 0 || is_sep(str[i - 1], charset)))
            count++;
        i++;
    }
    return(count);
}
char	*get_word(char *str, char *charset, int start)
{
    char *word;
    int i;
    int len;

    len = 0;
    while(str[start + len] && !is_sep(str[ start + len] ,charset))
        len++;
    word = (char *)malloc(len + 1);
    if(!word)
        return(0);
    i = 0;
    while(i < len)
    {
        word[i] = str[start + i];
        i++;
    }
    word[i] = '\0';
    return(word);
}
char	**ft_split(char *str, char *charset)
{
    char ** result;
    int words;
    int i;
    int j;

    words = count_words(str , charset);
    result = (char **)malloc((words + 1) * sizeof(char *));
    if(!result)
        return(0);
    i = 0;
    j = 0;
    while(str[i])
    {
        if(!is_sep(str[i], charset))
        {
            result[j] = get_word(str, charset, i);
            if(!result[j])
                return(0);
            j++;
            while(str[i] && !is_sep(str[i], charset))
                i++;
        }
        else
        i++;
    }
    result[j] = 0;
    return(result);
}