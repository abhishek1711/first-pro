#include <iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
    if(n!=0)
    cout<<"Printing order for "<<n<<" pages:"<<endl;
	if(n==0)
	return 0;
else if (n==1)
{
cout<<"Sheet 1, front: Blank, 1"<<endl;
}
	else
	{   
		if(n%4==0)
		{    int o=0,t=1;
			int sht=(n/4);
			int k=4*sht;
        int arr[k];
        for(int i=0;i<k;i++)
        	arr[i]=i+1;
        while(t!=sht+1)
        {
       cout<<"Sheet "<<t<<", front: "<<arr[k-1]<<", "<<arr[o]<<endl;
       cout<<"Sheet "<<t<<", back : "<<arr[o+1]<<", "<<arr[k-2]<<endl;
        t++;
        k=k-2;
        o=o+2;
        }
		}
		else
		{  int o1=0,t1=1;
          int sht1=(n/4)+1;
          int s=4*sht1;
          int arr1[s];
          for(int i=0;i<n;i++)
          	arr1[i]=i+1;
          for(int i=n;i<s;i++)
          	arr1[i]=0;
           if(n%4==3){
            cout<<"Sheet "<<t1<<", front: "<<"Blank"<<", "<<arr1[o1]<<endl;
            cout<<"Sheet "<<t1<<", back : "<<arr1[o1+1]<<", "<<arr1[s-2]<<endl;
            t1++;
            s=s-2;
        o1=o1+2;
          while(t1!=sht1+1)
        {
        	
       cout<<"Sheet "<<t1<<", front: "<<arr1[s-1]<<", "<<arr1[o1]<<endl;
       cout<<"Sheet "<<t1<<", back : "<<arr1[o1+1]<<", "<<arr1[s-2]<<endl;
        t1++;
        s=s-2;
        o1=o1+2;
        }
}
else if(n%4==2)
{
  cout<<"Sheet "<<t1<<", front: "<<"Blank"<<", "<<arr1[o1]<<endl;
            cout<<"Sheet "<<t1<<", back : "<<arr1[o1+1]<<", "<<"Blank"<<endl;
            t1++;
            s=s-2;
        o1=o1+2;
          while(t1!=sht1+1)
        {
          
       cout<<"Sheet "<<t1<<", front: "<<arr1[s-1]<<", "<<arr1[o1]<<endl;
       cout<<"Sheet "<<t1<<", back : "<<arr1[o1+1]<<", "<<arr1[s-2]<<endl;
        t1++;
        s=s-2;
        o1=o1+2;
        }
}
else 
{
  cout<<"Sheet "<<t1<<", front: "<<"Blank"<<", "<<arr1[o1]<<endl;
            cout<<"Sheet "<<t1<<", back : "<<arr1[o1+1]<<", "<<"Blank"<<endl;
            t1++;
            s=s-2;
        o1=o1+2;
         cout<<"Sheet "<<t1<<", front: "<<"Blank"<<", "<<arr1[o1]<<endl;
       cout<<"Sheet "<<t1<<", back : "<<arr1[o1+1]<<", "<<arr1[s-2]<<endl;
       t1++;
            s=s-2;
        o1=o1+2;
          while(t1!=sht1+1)
        {
          
       cout<<"Sheet "<<t1<<", front: "<<arr1[s-1]<<", "<<arr1[o1]<<endl;
       cout<<"Sheet "<<t1<<", back : "<<arr1[o1+1]<<", "<<arr1[s-2]<<endl;
        t1++;
        s=s-2;
        o1=o1+2;
        }
}
		}
	}
	}
	return 0;
}