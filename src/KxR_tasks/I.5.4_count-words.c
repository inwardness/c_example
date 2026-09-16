#include <stdio.h>

#define IN 1  /*inner words*/
#define OUT 0 /*outer the words*/

/*counting words and symbols*/
int main()
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)

    {
            ++nc;
        if (c == '\n')
            ++nl;
        else if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if
            (state == OUT)
            {
                state = IN;
                ++nw;
            }
    }
    printf("new_string:%d\nnew_words:%d\nnew_symbols:%d\n", nl, nw, nc);
}