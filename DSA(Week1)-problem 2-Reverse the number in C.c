/*
Reverse The Number Problem Code: FLOW007
Problem:

Given an Integer N, write a program to reverse it.
Input

The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.
Output

For each test case, display the reverse of the given number N, in a new line.
Constraints

    1 ≤ T ≤ 1000
    1 ≤ N ≤ 1000000

Example

Input
4
12345
31203
2123
2300
Output
54321
30213
3212
32
*/

#include<stdio.h>
int main()
{
  int t,i;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
      int n,r=0;
      scanf("%d",&n);
      while(n>0)
      {
          r=r*10+n%10;
          n=n/10;
      }
      printf("%d\n",r);
}
}
