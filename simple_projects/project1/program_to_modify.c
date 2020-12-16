//this program is supposed to be modified in this little project
#include<stdio.h>


int main()
{
    int a = 20;
    int b = 30;

    if(a == b)
    {
        printf("Everything works!!!\n");
    }

    return 0;
}

//gcc -o binary_to_modify program_to_modify.c    
//objdump -S --section=.text binary_to_modify       