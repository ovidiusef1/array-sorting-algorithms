#include <stdio.h>
static void Sort(int v[],int n)
{
int i,j,k=0;
	for(i=0;i<n-1-i;i++)
		if(v[i]>v[i+1])
		{
			k=v[i];
			v[i]=v[i+1];
			v[i+1]=k;
		}
}
int main()
{
	return 0;
}
