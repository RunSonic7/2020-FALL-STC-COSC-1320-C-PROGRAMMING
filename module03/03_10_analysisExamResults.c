#include <stdio.h>

/* Function main begins program execution */
int main(void)
{
    int passes = 0;     /* number of passes */
    int failures = 0;   /* number of failures */
    int student = 1;    /* student counter */
    int result;         /* one exam result */

    /* Process 10 students using counter-controlled loop*/
    while(student <= 10)
    {
        /* Prompt user for input and obtain value from user */
        printf("Enter result ( 1=pass, 2=fail ): ");
        scanf("%d", &result);

        /* If result 1, increment passes */
        if (result == 1) {
            passes = passes + 1;
        } /* end if */
        else 
        {   /* otherwise, increment failures */
            failures = failures + 1;
        } /* End else */

        student = student + 1;  /* Increment student counter */
    } /* End while */

    /* Termination phase; display number of passes and failures */
    printf("Passed %d\n", passes);
    printf("Failed %d\n", failures);

    /* If more than eight students passed, print "raise tuition" */
    if (passes > 8) 
    {
        printf("Raise tutition\n");
    } /* End if */

    return 0; /* Indiciate program ended successfully */
} 

