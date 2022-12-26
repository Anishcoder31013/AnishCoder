//Anish Coder

#include <stdio.h>
#include <conio.h>
int main(int argc, char *argv[])
{
    textcolor(GREEN);
    char m[12];
    char e[12];
    char n[12];
    int lock;
    for (int i = 0; i < 12; i++)
    {
        m[i] = '0';
    }
    for (int j = 0; j < 12; j++)
    {
        n[j] = '0';
    }
    for (int k = 0; k < 12; k++)
    {
        e[k] = '0';
    }
ab:
    printf("ENTER YOUR PASSWORD TO SAVE IT(PASSWORD SHOULD BE OF 12 OR LESS THEN 12 CHARACTERS):\n");
    scanf("%s", m);
    printf("CONFIRM YOUR PASSWORD:\n");
    scanf("%s", e);
    sleep(1);
    clrscr();

    //
    if (m[0] == e[0] && m[1] == e[1] && m[2] == e[2] && m[3] == e[3] && m[4] == e[4] && m[5] == e[5] && m[6] == e[6] && m[7] == e[7] && m[8] == e[8] &&
        m[9] == e[9] && m[10] == e[10] && m[11] == e[11])

    {
        printf("Password saved\n");
        sleep(1);
        clrscr();
    }

    else
    {
        printf("Password you entered did not match to the password you entered first.PLEASE RETRY\n");
        sleep(3);
        clrscr();
        goto ab;
    }
    //

un:
    printf("ENTER YOUR PASSWORD:\n");
    scanf("%s", n);

    sleep(1);
    clrscr();

    //
    if (m[0] == n[0] && m[1] == n[1] && m[2] == n[2] && m[3] == n[3] && m[4] == n[4] && m[5] == n[5] && m[6] == n[6] && m[7] == n[7] && m[8] == n[8] &&
        m[9] == n[9] && m[10] == n[10] && m[11] == n[11])

    {
        printf("CORRECT PASSWORD DEVICE SUCESSFULLY UNLOCKED!\n");
        sleep(2);
        clrscr();
    }

    else
    {
        printf("Incorrect password.PLEASE RETRY\n");
        sleep(2);
        clrscr();
        goto un;
    }
//

//
mn:

    printf("ENTER 1 TO LOCK THE DEVICE ENTER 2 TO QUIT:\n");
    scanf("%d", &lock);

    if (lock == 1)
    {
        printf("DEVICE LOCKED...\n");
        sleep(1);
        clrscr();

        goto un;
    }
    else if (lock == 2)
    {
        printf("QUITTING THE PROGRAM...\n");
        sleep(1);
        clrscr();
        goto end;
    }
    else
    {
        printf("ENTER 1 OR 2 ONLY!\n");
        sleep(1);
        clrscr();
        goto mn;
    }

    //

end:

    return 0;
}