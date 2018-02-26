#include <stdio.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;


int main(int argc, char*argv[])
{
	char*name=0;
	int i,j;
	 double time=0;
	 int max=0;
	 int n,m;

    clock_t start,finish;
		
	//array[n][m]
	 if(argc<3 || argc>4 || (n=atoi(argv[1]))<=0)
    {
        printf("Usage: %s <n> <m> [<name>]\n", argv[0]);
        return 1;
    }
    
     if(argc==4)
    {
      
        name=argv[3];
        n=atoi(argv[1]);
        m=atoi(argv[2]);
    }
    if(argc==3)
    {
    	n=atoi(argv[1]);
        m=atoi(argv[2]);
        
	}
		
    
    int **a= new int *[n];
    for(i=0;i<n;i++)
       a[i]=new int [m];
      if(n>m) max=n;
	  else
	  {
	  	max=m;
	   } 
    int *b=new int [max];   
    for(i=0;i<max;i++) b[i]=0;
       
   if(argc==3)
   {
   	 for(i=0;i<n;i++)
   	 {
   	 	for(j=0;j<m;j++)
   	 	{
   	 		a[i][j]=abs(i-j);
		}
   	 	
	 }
   }
   if(argc==4)
    {

        ifstream file;
        file.open(name);
        for(i=0;i<n;i++)
   	  {
   	 	for(j=0;j<m;j++)
   	 	{
   	 		file>>a[i][j];
		}
   	 	
	  }
       file.close();
    }
       

       
       
       
        start =  clock();
        for(i=0;i<n;i++)
        {
        	for(j=0;j<n;j++)
        	{
        		b[i]+=a[i][j];
			}
		}
        
         finish = clock(); // конечное время
   time=(double)(finish-start)/CLOCKS_PER_SEC;
   cout<<"TIME of the summing in the lines: "<<time<<endl;

    
   
	
	
	
	
	
	for(i=0;i<n;i++)
	    delete []a[i];

	
	
	return 0;
}

