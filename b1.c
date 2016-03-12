#include<stdio.h>

main()
{
      int n,a[10],i,p,k,min,d;
      printf("utgaa ug\n");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
      printf("a[%d] = ",i);
      scanf("%d",&a[i]);
      }
      i=0;
      k=0;
      while(k<n)
      {
      min=a[k];
      for(i=k;i<n;i++)
                {
                if(a[i]<=min)
                {min=a[i];
                p=i;}

                }
      a[p]=a[k];
      a[k]=min;

      k++;
      }
      d=a[1]-a[0];
      i=1;
      while(i+1<n)
      {
      if(d==a[i+1]-a[i])
      i++;
      else
      {
      printf("\nProgress uusgehgui\n");
      return 0;
      }

      }
      printf("\nProgress uusgene\n");
      return 0;
      }
