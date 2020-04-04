#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int inword = 0;			//在单词中为1否则为0
    int words = 0;			//单词数
    int count = 0;			//字符数

    printf("Please enter some words:\n");
    while ((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
            chars++;
        if (!isspace(ch) && !ispunct(ch) && !inword)
        {
            inword = 1;
            words++;
        }
        if (isspace(ch) || ispunct(ch) && inword)
            inword = 0;
    }
    printf("一共有%d个单词，%d个字母\n",words, count);
    printf("平均每个单词中有%.2f个字母。",((double)chars / (double)words));

    return 0;
}
