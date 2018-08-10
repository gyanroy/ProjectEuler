#include<iostream>

using namespace std;

int find(int num,int upto)
{
  for(i=upto;i>=upto-num;i--)
  {
    if(i%num==0)
      return i;
  }
return 0;
}

int main(int argc, char const *argv[]) {

  int num1=3,num2=5;
  cin >> num1 >> num2;
  int upto=1000;
  cin >> upto;
  int num = num1*num2;
  int sum_num1=0,sum_num2=0; 
  int sum_union=0,sum=0;
  
  int n1=0,n2=0,n=0;
  
  //largest no. below upto divided by num1,num2,num1*num2 
  n1 = find(num1,upto)/num1;
  n2 = find(num2,upto)/num2;
  n3 = find(num,upto)/num;
  
  //sum of no. less than upto divited by num1, num2, num1*num2
  sum_num1 = num1 * ( (n1*(n1+1))/2 );
  sum_num2 = num2 * ( (n2*(n2+1))/2 );
  sum_union = num * ( (n*(n+1))/2 );

  //required soln
  sum = sum_num1 + sum_num2 - sum_union;

  cout << "Sum = " <<sum<<endl;
  return 0;
}
