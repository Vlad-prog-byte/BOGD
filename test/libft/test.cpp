#include<iostream>
#include<string>
#include<cstdlib>


using namespace std;



/*
ft_substr:     [FAILED] [FAILED] [OK] [FAILED] [FAILED] [OK] [FAILED] [OK] {not protected}[FAILED] 
[fail]: your substr does not work with valid input
Test code:
	char *str = "i just want this part #############";
	size_t size = 22;
	char *ret = ft_substr(str, 0, size);

	if (!strncmp(ret, str, size))
	{
		free(ret);
		exit(TEST_SUCCESS);
	}
	free(ret);
	exit(TEST_FAILED);

Diffs:
      substr: |i just want this part|
   ft_substr: |i just want this part|

[fail]: your substr does not work with valid input
Test code:
	char *str = "i just want this part #############";
	size_t size = 20;
	char *ret = ft_substr(str, 5, size);

	if (!strncmp(ret, str + 5, size))
	{
		free(ret);
		exit(TEST_SUCCESS);
	}
	free(ret);
	exit(TEST_FAILED);

Diffs:
      substr: |t want this part ###|
   ft_substr: |t want this part ##|

[fail]: your substr did not allocate the good size so the \0 test may be false
Test code:
	char *str = "i just want this part #############";
	size_t size = 10;
	int ret_size;

	ft_substr(str, 5, size);
	ret_size = get_last_malloc_size();
	if ((int)size + 1 == ret_size)
	{
		exit(TEST_SUCCESS);
	}
	exit(TEST_FAILED);

Diffs:
      substr: |11|
   ft_substr: |10|

[fail]: your substr does not set \0 to the end of the string
Test code:
	char str[] = "i just want this part #############";
	size_t size = 20;

	char *ret = ft_substr(str, 5, size);
	str[size + 5] = 0;
	if (!memcmp(ret, str + 5, size + 1))
	{
		free(ret);
		exit(TEST_SUCCESS);
	}
	free(ret);
	exit(TEST_FAILED);

Diffs:
      substr: |t want this part ###|
   ft_substr: |t want this part ##|

[fail]: your substr does not work for a whole string
Test code:
	char *s = "all of this !";
	size_t size = strlen(s);
	char *ret = ft_substr(s, 0, size);

	if (!strcmp(s, ret))
	{
		free(ret);
		exit(TEST_SUCCESS);
	}
	free(ret);
	exit(TEST_FAILED);

Diffs:
      substr: |all of this !|
   ft_substr: |all of this |

[fail]: your substr does not work when start >= ft_strlen(s)
Test code:
	char *str = "01234";
	size_t size = 10;
	char *ret = ft_substr(str, 10, size);

	if (!strncmp(ret, "", 1))
	{
		free(ret);
		exit(TEST_SUCCESS);
	}
	free(ret);
	exit(TEST_FAILED);

Diffs:
      substr: ||
   ft_substr: | strjoin |

*/


static size_t ft_Size(char const *s, unsigned int start, size_t len)
{
    size_t  kol;

    kol = 0;
    while (s[start + kol] && kol < len - 1)
        kol++;
    return (kol);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  kol;
    char    *chast;
    int     flag;

    if (s == NULL)
        return (NULL);
    flag = 0;
    kol = ft_Size(s, start, len);
    chast = (char *)malloc(kol + 1);
    if (chast == 0)
        return (0);
    while (flag < kol)
    {
        chast[flag] = s[start + flag];
        flag++;
    }
    chast[flag] = '\0';
    return (chast);
}

//ft_substr(str, 0, size);

int main(void)
{
    string s = "i just want this part #############";
    size_t size = 22;
    cout << s[10] << "\n\n";
    string chast = s.substr(0, size);
    cout << chast << "\t\t" << chast.size() << endl;
    //ft_substr(str, 0, size);
    char* copy = ft_substr("i just want this part #############", 0, size);
    cout << copy << ft;
}