#include <iostream>
using namespace std;
int main()
{   int k=1;
	int n,m;
	cin>>n>>m;
while(n!=0 && m!=0)
{   
	char arr[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr[i][j]=='*')
				continue;
			
				int temp=0;
			if(i+1<n && arr[i+1][j]=='*')
				temp++;
			if( i + 1 < n && j + 1 < m && arr[i + 1][j + 1] == '*' )
                    ++temp;
                if( j + 1 < m && arr[i][j + 1] == '*' )
                    ++temp;
                if( i - 1 >= 0 && j + 1 < m && arr[i - 1][j + 1] == '*' )
                    ++temp;
                if( i - 1 >= 0 && arr[i - 1][j] == '*' )
                    ++temp;
                if( i - 1 >= 0 && j - 1 >= 0 && arr[i - 1][j - 1] == '*' )
                    ++temp;
                if( j - 1 >= 0 && arr[i][j - 1] == '*' )
                    ++temp;
                if( i + 1 < n && j - 1 >= 0 && arr[i + 1][j - 1] == '*' )
                    ++temp;
              arr[i][j]=temp+'0';
		}
	}
	//cout<<endl;
	cout<<"Field #"<<k<<":"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<arr[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	cin>>n>>m;
	k++;

}
}