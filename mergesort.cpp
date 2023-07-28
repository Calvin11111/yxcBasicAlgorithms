#include <iostream>
using namespace std;
const int N = 1e6+10;
int n;
int q[N],temp[N];

void mergesort(int q[],int l,int r){
if(l>=r) return;
//1.首先确定中点  >>位运算表示向右移动一位 每位的权重是2 比如1111 =15 右移一位变成111 =7 相当于除以2
int mid = l+r>>1;
int k=0,i=l,j=mid+1;
//2.递归的处理左右两边
mergesort(q,l,mid),mergesort(q,j,r);

//3.拼接左右两个数组
while(i<=mid && j<=r){
    if(q[i]<=q[j]) temp[k]=q[i],k++,i++;
    else temp[k]=q[j],k++,j++;
}
 
 //假如有一个数组还有剩下的 就将剩下的数组接到temp数组里去
 while(i<=mid){
    temp[k]=q[i],k++,i++;
 }
while(j<=r){
    temp[k]=q[j],k++,j++;
}
//将temp[]中 的数字装进q
for(i=l,j=0;i<=r;i++,j++){
    q[i]=temp[j];
}

}


int main() {
  scanf("%d",&n);
  for(int i=0;i<n;i++) scanf("%d",&q[i]);
  mergesort(q,0,n-1);
  for(int i=0;i<n;i++) printf("%d ",q[i]);
  return 0;
}