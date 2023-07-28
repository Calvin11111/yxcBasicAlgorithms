#include <iostream>

using namespace std;

int main() {
      double n;
      scanf("%lf",&n);
      double l = 0,j = n;

      while((j-l)>1e-8){
      double mid = (l+j)/2;
      if(mid*mid >= n){
          j =mid;
      }else{
          l = mid;
      }
     
      }

      printf("%lf",l);
      return 0;

  
}