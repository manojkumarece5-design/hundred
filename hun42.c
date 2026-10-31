/*Question 42: Reverse a Number and Check for Palindrome
Problem Statement: Read a positive integer, print the number obtained by reversing its
digits, and then print Palindrome if the reversed number is equal to the original. Otherwise
print Not a palindrome.
Explanation: Leading zeros of the reversed number are not printed. For example, 1230
reverses to 321.
Example 1:
Input
12321
Output
Reversed number: 12321
Palindrome
Example 2:
Input
1230
Output
Reversed number: 321
Not a palindrome*/

#include<stdio.h>
int main(){
    int n,digit,original,reverse=0;
    scanf("%d",&n);
    original=n;
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
       
    }
    printf("%d",reverse);
    printf("\n");
    if(original==reverse){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
    
}
