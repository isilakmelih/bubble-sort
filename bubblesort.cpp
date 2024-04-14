

#include<iostream>
using namespace std;
#include<math.h>
int main()
{    char w,z,q;
	int i,a,b,c,x,s,y,n=10,d[11];
	int g[] = {11,22,33,44,55,66,77,88,90,99};
 z:    cout <<" verilen dizinin yazdýrýlmasý   " << endl;
	for(i=0;i<n;i++){                  
	
	cout<< g[i]<< "  " ;d[i+1]=g[i];
                                
	} 
    s=0;  
	cout<< "\n " << endl;
	cout <<"Enter the wanted data? ";cin>> x;
	a=0; b=n+1;
 q:	 if(abs(a-b)== 1){goto w;}
	 else
	{ c=int((a+b)/2);
	  if( d[c]<x ){a=c;goto q;}
	  else
	  if( d[c]>x ){b=c;goto q;}
	  else
	  {s++;goto w;}
   }
 w:   if ( s==0)
	   {cout << "There arn't  in the array the wanted data." <<endl;}
      else
       {cout << "The wanted data of the array " << c << " .is element"<< endl;}
       cout << "Are you going to make another process? YES= 1/ NO=0 ";
       cin>>y;
       if (y == 1) {goto z;}
       system ("\n pause");
}
