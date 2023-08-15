#include <iostream>

using namespace std;
int n,q;
const int N = 10000;
int num[N];


void halfsearch(int num[],int key,int n){
   int left=0,right=n;
   while(left<right){
    int mid = n/2;
      if(num[mid]<=key){left = mid;}
      else{right = mid-1;}
   }
    
   if(num[left]==num[right]==key){
    cout<<left<<""<<right<<endl;
   }else{cout<<-1<<""<<-1<<endl;}



}
int main() {
       scanf("%d%d",&n,&q);
       for(int i=0;i<n;i++){
           scanf("%d",&num[i]);
       }
       int key;
       for(int i=0;i<q;i++){
           scanf("%d",&key);
           halfsearch(num,key,n-1);
       }

       return 0;
       



}