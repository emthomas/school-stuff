#include <stdio.h>
#include <string.h>

int main(void)
{
    char *buff = malloc(15);
    int pass = 0;

    printf("\n Enter the password : \n");
    scanf("%s", buff);

    if(pass)
    {
       /* Now Give root or admin rights to user*/
        printf ("\n Root privileges given to the user \n");
    }

    return 0;
}
