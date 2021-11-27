#include <stdio.h>

int main()
{
        FILE* p = fopen("code.txt", "r");
        char str[4];
        while(1)
        {
            fgets(str, 4, p);
            getch();
            printf("%s", str);
        }
        return 0;
}
