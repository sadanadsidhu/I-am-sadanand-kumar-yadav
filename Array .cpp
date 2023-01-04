#include<iostream>
using namespace std;
int main()
{
	int arr[100][100],i,j;
	cout<<"enter the value of elements:"<<"\n";
	for(i=0;i<3;i++)
    {
        for(j=0;j<100;j++)
        {
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    cout<<"the values stored in array in matric form are:"<<" \n";
    for(i=0;i<100;i++)
    {
      for(j=0;j<100;j++)
        {
        cout<<arr[i][j];
        }
        cout<<"\n";
    }

return 0;
}
