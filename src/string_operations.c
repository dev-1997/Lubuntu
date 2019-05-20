#include <stdio.h>

wchar_t *my_wstrchr(wchar_t *ws, wchar_t wc)
{
while(*ws)
{
if (*ws==wc)
return ws;
++ws;
}
return NULL;
}

size_t my_strlen(const char *s)
{
char *p = s;
while (*p)
++p;
return (p - s);
}

char *my_strcopy(char *t, char *s)
{
char *p=t;
while(*t++ = *s++);
return p;

}
void strcat(){
	printf("heea;e");
}

size_t my_w_strlen(const wchar_t *s)
{
const wchar_t *p =s;

while(*p)
++p;
return (p - s);
}

int main(void)
{
int i;
char *s[] = {
"Git tutorials",
"Tutorials Point"
};
for (i = 0; i < 2; ++i)
printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
return 0;
}
