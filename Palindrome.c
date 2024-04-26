#include <stdio.h>

int main() 
{
    // Palindrome S1
    
    int num, temp, count=0, dig, left, right, tenl, tenr;
    scanf("%d", &num);
    
    // Count number of digits
    temp = num;
    while(temp!=0)
    {
        temp /= 10;
        //printf("%d ", temp);
        count += 1;
    }
    printf("%d \n", count);
    
    // Compare digits
    for(dig=count; dig>count/2; dig--)
    {
        // Extract digits from the left 
        tenl = pow(10, dig);
        left = (num % tenl) / (tenl/10);
        //printf("%d ", left);
        
        //Extract digits from the right
        tenr = pow(10, count-dig+1);
        right = (num % tenr) / (tenr/10);
        //printf("%d ", right);
        
        if(left == right)
        {
            continue;
        }
        
        else
        {
            break;
        }
    }
    
    if(dig==count/2)
    {   
        printf("Palindrome");
    }
    else
    {
        printf("Not a palindrome");
    }
    
    return 0;
}
