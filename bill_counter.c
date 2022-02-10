/******************************************************************************

                            Coded By Synyster // WanZ

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int discount[5] = {}; 
    char username[100];
    char the_discount[255];
    int bill, company;
    
    
    printf("1. UTILITIES\n2. INTERNET\nEnter bill type: ");
    scanf("%d", &bill);
    
    while (bill != 1 && bill != 2)  {
        printf("1. UTILITIES\n2. INTERNET\nEnter bill type: ");
        scanf("%d", &bill);
    }
    
    if (bill == 1)  {
        printf("1. TNB\n2. SYABAS\nEnter company: ");
        scanf("%d", &company);
        if (company == 1)   {
            discount[0] = 5;
        }   else    {
            discount[0] = 10;
        }
    }   else    {
         printf("1. DIGI\n2. UNIFI\n3.MAXIS FIBER\nEnter company: ");
        scanf("%d", &company);
        discount[0] = 5;
    }
    
   
    
    printf("Enter your name: ");
    scanf("%s", username);
    printf("Discount: %d percent", discount[0]);
    

    return 0;
}
