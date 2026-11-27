#include <stdio.h>
#include <string.h>

int main()
{
    char name[5][20] = {0};//array to store 5 names of 19 characters
    char choice;
    int terminate = 0;
    int n = 0;
    int slno;

    while(terminate == 0)
    {
        printf("1. Add name\n");
        printf("2. Delete name\n");
        printf("3. Show all names\n");
        printf("4. End program\n\n");
        printf("Enter the choice: \n\n");
        scanf(" %c", &choice);
        printf("\n");

        if(choice == '1')//adding name ======================================
        {
            if(n < 5)
            {
                printf("Enter the name: \n");
                scanf("%19s", name[n]);
                printf("\n");
                ++n;
            }
            else
            {
                printf("List is full!!!\n\n");
            }
        }
        else if(choice == '2')//deleting name ===================================
        {
            if(n == 0)
            {
                printf("No names currently\n\n");
            }
            else
            {
                printf("Names:\n");

                for(int i = 0; i < n; ++i)
                {
                    printf("%d. %s\n", (i+1), name[i]);
                }
                printf("Which name you want to delete?\nEnter the Sl.No: \n");
                scanf("%d", &slno);
                printf("\n");
                --slno;
                if((slno < n) && (slno >= 0))
                {
                    for(int i = slno; i < n - 1; ++i)
                    {
                        strcpy(name[i], name[i+1]);
                    }
                    --n;
                }
                else
                {
                    printf("invalid Sl.No!!!");
                }
            }
        }
        else if(choice == '3')//show all names =================================
        {
            if(n == 0)
            {
                printf("No names currently\n\n");
            }
            else
            {
                printf("Names: \n\n");
                for(int i = 0; i < n; ++i)
                {
                    printf("%d. %s\n\n", (i+1), name[i]);
                }
            }
        }
        else if(choice == '4')//terminating the program =========================
        {
            printf("Ending program...\n");
            terminate = 1;
        }
        else
        {
            printf("invalid option!!!\n");
        }
    }

    return 0;
}