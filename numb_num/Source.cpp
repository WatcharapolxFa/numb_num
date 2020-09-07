#include <stdio.h>
#include <string.h>
void numbnumber(void);
void sum(void);
struct number
{
    int fa, sum;
    char sumnum;
    char num[50];
}numb;
int main()
{
    int check = 0;
    printf("Input number: ");
    if (scanf_s("%[^\n]",numb.num))
    {
    numb.fa = strlen(numb.num);
    printf("OutPut \n ");
    numbnumber();
    }
   
    

}

void numbnumber()
{
    int  check = 0;
    for (int j = 0; j < numb.fa; j++) {

        numb.sumnum = numb.num[j];

        if (numb.num[j] != ' ' &&(numb.num[j] == '0' || numb.num[j] == '1'|| numb.num[j] == '2' || numb.num[j] == '3' || numb.num[j] == '4' || numb.num[j] == '5' || numb.num[j] == '6' || numb.num[j] == '7' || numb.num[j] == '8' || numb.num[j] == '9'  ))
        {
            numb.sum = 0;


            for (int i = 0; i < numb.fa; i++) {

                if (numb.sumnum == numb.num[i])
                {
                    numb.sum++;
                    numb.num[i] = ' ';
                }

            }
            printf(" \t Number : %c = SumNumber %d number.\n", numb.sumnum, numb.sum);
        }


    }


}
