#include<iostream>
using namespace std;

const int N =1e6+10;
int q[N];
int n;

void quicksort(int q[],int l,int r){
    if(l>=r){return;}
    //1.选一个数
    int x = q[(l+r)/2];
    int i = l-1,j = r+1;
    
    while(i<j){
    do i++; while(q[i]<x);
    do j--; while(q[j]>x);
    if(i<j){
    swap(q[i],q[j]);
        }
    }
    
    
    quicksort(q,l,j);
    quicksort(q,j+1,r);
    
    
   
    
    
    
    
    
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&q[i]);
    }
    //右边界数组下标为n-1
    quicksort(q,0,n-1);
    for(int i=0;i<n;i++){printf("%d ",q[i]);}
    return 0;
    
    
    
    
    
}