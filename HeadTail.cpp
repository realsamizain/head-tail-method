
#include <iostream>
using namespace std;


 main()

{
	int arr1[5];
	int arr2[5];
	int *swap1[5];
	int *swap2[5];
			
	for(int i=0;i<5;i++)
	{
cout<<"Enter the value of ARR1= ";
		cin>>arr1[i];
		swap1[i]= &arr1[i];
	}
		

	for(int j=0;j<5;j++)
	{
		cout<<"Enter the value of ARR2= ";
		cin>>arr2[j];
		swap2[j]= &arr2[j];
	}



	int *temp;
	int j=4;
	for(int i=0;i<5;i++)
	{
		temp = swap1[i];
		swap1[i]= swap2[j];
		swap2[j]=temp;
		j--;
     
}
cout<<endl;
int h=4;
for(int i=0; i<5;i++)
{
	cout<<"array["<<i<<"]elment="<<*swap1[i]<<"\t"<<"array2["<<i<<"] elment="<<*swap2[i]<<"\n";
h--;
}
   
}
