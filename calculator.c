#include<stdio.h>

  void main()
  {    // type declaration
        int S, n, i, sum=0,sub=0,multi=1,a[100];
        
        First:
   printf("select any one:--\n1.Sum\n2.Sub\n3.Multi\n4.DiVi\n choose any one 1,2,3,4  :-- \t");
     scanf("%i",&S);
     if(S==1) // Addition 
  {   
     printf("\nhow many numbers are you added :--  \t");
    scanf("%i",&n);
    printf("\nenter the sum values :--\n");
    for(i=0;i<n;i++)
    scanf("%i",&a[i]);
    for(i=0;i<n;i++)
     sum+=a[i];
     printf("\nTotal of Sum = %i",sum);
  
  }
  else if(S==2) // Substraction
    {  printf("\n how many numbers are you Subtract:-- \t");
       scanf("%i",&n);
       printf("\nenter the Subtract values :--\n");
        for (i=0;i<n;i++)
      scanf("%i",&a[i]);
      for(i=0;i<n;i++)
      if(a[i]>=0)
        sum+=a[i];
        else
       sub-=a[i];
       sub=sum-sub;
      printf("Total of Substraction = %d",sub);
    
    }  // Multiplication 
     
       else if(S==3)
       { 
         printf("\nHow many values are multiple:--\t");
        scanf("%d",&n);
        printf("\nenter Multiplication values:--\n");
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        multi *=a[i];
        printf("Total of Multiplication = %d",multi);
        
       } 
        // Division
    else if (S==4)
    {  float divi, sum, sub; // float declaration  of Division
    
     printf("\n enter Division values:--\n");
      scanf("%f%f",&sum,&sub);
      divi=sum/sub;
      printf("Total of Division = %g",divi);
    } printf("\n\n\n");
    
    
    goto First; // redirect to first line 
    
    
  }
