/*Polynomial intigration*/
#include <tgmath.h>
#include <math.h>  
#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>
using namespace std;
double function(double x, double polynomial){
  int m;
  cin>>m;
if (m>10)
int a[m];
cout<<"The number is out of limit";

else if (m<=10)
  
    for(int i = 0; i <m; i++) {
      cin>>a[i];
    polynomial=a[i]*(pow(x,i));
    polynomial++;
    }
 return polynomial;
}

double sum(double lowlimit, int n, double dx){
  double ssum=0;
  for (int i=0;i<n;i++){
    double xi=lowlimit+i*dx;
    double functionValue=function(xi);
    double integral=functionValue*dx;
    ssum+=integral;
  }
  return ssum;
}
  int main(){
   double lowlimit=0;
   double uplimit=1;
   int n=10000;
   double dx=(uplimit-lowlimit)/n;
   double result=sum(lowlimit,n,dx);
  }
  
