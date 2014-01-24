#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int prime_frq [2] [3600];
 
int produce_number (char a [])
{
    int length = strlen (a);
    int i = 0;
    int j = 0;
    int k = 0;
    char ch [10];
    int number [1000];
 
    while ( i < length ) {
        if ( a [i] == ' ' ) {
            ch [j] = ' ';
            number [k++] = atoi (ch);
            j = 0;
        }
 
        else
            ch [j++] = a [i];
        i++;
    }
 
    ch [j] = ' ';
    number [k++] = atoi (ch);
 
    i = 0;
    int sum = 1;
    while ( i < k ) {
        sum *= pow (number [i], number [i+1]);
        i += 2;
    }
 
    return sum;
}
 
 
int is_prime (int x)
{
    int length = (int) sqrt (x);
 
    for ( int i = 2; i <= length; i++ ) {
        if ( x % i == 0 )
        return 0;
    }
    return 1;
}
 
 
void produce_prime ()
{
    int i;
 
    prime_frq [0] [0] = 2;
    int k = 1;
 
    for ( i = 3; i < 32768; i += 2 ) {
        if ( is_prime (i) )
        prime_frq [0] [k++] = i;
    }
}
 
 
void frequency (int x)
{
    for ( int i = 0; i < 3512; i++ )  {
        if ( prime_frq [0] [i] == x ) {
            prime_frq [1] [i] ++;
            return;
        }
    }
}
 
 
int main(int argc, char **argv)
{
    char a [10000];
    int i;
 
    produce_prime ();
 
    while ( gets (a) ) {
 
        for ( i = 0; i < 3600; i++ )
            prime_frq [1] [i] = 0;
 
        if ( ! atoi (a) )
        return 0;
 
        int x = produce_number (a);
        printf("%d",x);
        x--;
 
        if ( is_prime (x) )
        printf("%d %d", x, 1);
 
        else {
            int divisor = 1;
            while ( x > 1 ) {
                divisor++;
                while ( x % divisor == 0 ) {
                    frequency (divisor);
                    x /= divisor;
                }
            }
        }
 
        int flag = 0;
        for ( i = 3511; i >= 0; i-- ) {
            if ( prime_frq [1] [i] != 0 ) {
                if ( flag )
                    printf(" %d %d", prime_frq [0] [i], prime_frq [1] [i]);
                else
                printf ("%d %d", prime_frq [0] [i], prime_frq [1] [i]);
                flag = 1;
            }
        }
        printf("\n");
 
    }
    return 0;
}
