/*Question 41: Count and Sum of Digits
Problem Statement: Read a positive integer and print the number of digits it has and the
sum of its digits. Constraint: 1 &lt;= N &lt;= 10^18.
Example:
Input
90817
Output
5 25*/

#include<stdio.h>
int main(){
    int count=0,sum=0,digit;
    long n;
    scanf("%ld",&n);
    while(n>0){
        digit=n%10;
        sum+=digit;
        count++;
        n=n/10;
       
    }
    printf("%d %d",count,sum);
    return 0;
    
}


