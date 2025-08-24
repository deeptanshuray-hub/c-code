#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int num_dig(int x)
{int t=10; int c=1;while(x/t!=0){t=t*10;c++;}
return c;
}
int* split(int n)
{ int c=num_dig(n);
  int* a = (int*)malloc(c * sizeof(int));
  for(int i=0;i<c;i++)
  { a[i]=n/(int)pow(10,c-i-1);
  n=n/10;
  }
  return a;
}
int main() {
    int n=0,count=1,sum=0,val=1;
    printf("Enter something\n");
    scanf("%d",&n);
    while(count<=n)
    {int dig=num_dig(val); int* a=split(val);
    
     for(int i=0;i<num_dig(val)&& count<=n;i++) 
     {
         sum+=a[i];count++;
         if(count>=n)goto out;
     }
     val++;
    }
    out:
    printf("%d",sum);
 return 0;
}
