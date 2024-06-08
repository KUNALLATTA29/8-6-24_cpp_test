3.Find the time complexity of this problem:
for(int i=0;i<i*I;i++)
{
for(j=n;j>1;j=j/2)
{
for(int k=1;k<n;k*=2)
{ .... } .... }..... }


//for first loop;

//it will never execute so complexity 

o(1);

//for second loop 

//   n/2^i<=1
//   n<=2^i
//   logn <= ilog2
//   logn <= i;

o(logn)

//for third loop

// 2^k > n
//  klog2 > logn
//  k > logn

o(logn)

//final complexity is

o((logn)^2)