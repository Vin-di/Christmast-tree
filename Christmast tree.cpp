#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
	int h_tree,h_trunk;
	
	do
	{
	  cout<<"Enter height of tree between 3 and 20: ";
	  cin>>h_tree;
	  if(h_tree<3 || h_tree>20)
		cout<<"Wrong input! Enter height of tree between 3 and 20!!!"<<endl;
	}while(h_tree<3||h_tree>20);

	if(h_tree<=5) h_trunk=3;
	else
		if(h_tree<=15) h_trunk=4;
		else h_trunk=5;
	//for to create tree
	for(int r=1; r<=h_tree; r++)
	{
		for(int space=0; space<ha-r; space++) cout<<" ";
		for(int asterix=0; asterix<2*r-1; asterix++) cout<<"*";
		cout<<endl;
	}
	
	//for to create trunk
	for(int t=1; t<=ht; t++)
	{
		for(int space=0; space<ha-1; space++) cout<<" ";
		cout<<"*";
		cout<<endl;
	}
	system ("Pause");
	return 0;
}
