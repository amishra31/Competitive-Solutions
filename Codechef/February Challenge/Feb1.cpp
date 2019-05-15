#include <iostream>  
using namespace std; 
// Recursive function to return gcd of a and b  
class gfg 
{ 
 public : int gcd(int a, int b)  
 {  
    // Everything divides 0  
    if (a == 0 || b == 0)  
        return 0;  
   
    // Base case     
    if (a == b)  
        return a;  
   
    // a is greater  
    if (a > b)  
        return gcd(a-b, b);  
    return gcd(a, b-a);  
 } 
  
   
// Function to return LCM of two numbers  
  int lcm(int a, int b)  
 {  
    return (a*b)/gcd(a, b);  
 }  
} ; 