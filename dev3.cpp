#include<iostream>
#include<cstdlib> 
using namespace std;
int main()
{
	int x,y,p=1;
	abc:
	if(p==0)
	{
	xyz:
		string r1;
		cout<<"Entered value is invalid, If you want to try again enter (y/Y) else press any key \n";
		cin>>r1;
		if(r1=="y"||r1=="Y")
		goto abc;
		else
		exit(0);
	}
	cout<<"Enter the number of batsman bat";
	cin>>x;
	if(x<0)
	goto xyz;
	string n[x];
	int i;
	float r[x],b[x];
	float s[x];
	for(i=0;i<x;i++)
	{
	  	cout<<"Enter name of the batsman\n";
	  	cin>>n[i];
	  	cout<<"Enter run of the batsman\n";
	  	cin>>r[i];
	  	if(r[i]<0)
	  	goto xyz;
	  	cout<<"Enter ball Played by the batsman\n";
	  	cin>>b[i];
	  	if(b[i]<0)
	  	goto xyz;
	  	s[i]=(r[i]/b[i])*100;
	}
	cout<<"Enter the number of baller ball\n";
	cin>>y;
	string n2[y];
	int q,ball[y],l=0;
	float b2[y],e[y];
	int w[y],r2[y];
	for(i=0;i<y;i++)
	{
		q=0;
		cout<<"Enter the name of the baller\n";
		cin>>n2[i];
		cout<<"Enter the over balled by baller\n";
		cin>>b2[i];
		if(b2[i]<0)
	  	goto xyz;
		q=b2[i]*10;
		ball[i]=(q%10)+(q/10)*6;
		cout<<"Enter the wicket taken by baller\n";
		cin>>w[i];
		if(w[i]<0)
	  	goto xyz;
		l=l+w[i];
		cout<<"Enter the run hit to the baller\n";
		cin>>r2[i];
		if(r2[i]<0)
	  	goto xyz;
		e[i]=r2[i]/b2[i];
	}
	for( i=0;i<25;i++)
	{
		cout<<"--";
	}
	cout<<endl;
	cout<<"Batting Score Card\n";
	cout<<"Name"<<"\t\t"<<"Run"<<"\t"<<"Balls"<<"\t"<<"Strike Rate"<<endl;
	for(i=0;i<x;i++)
	{
		cout<<n[i]<<"\t\t";
		cout<<r[i]<<"\t";
		cout<<b[i]<<"\t";
		cout<<s[i]<<endl;
	}
	
	for( i=0;i<25;i++)
	{
		cout<<"--";
	}
	cout<<endl;
	cout<<"Balling Score Card\n";
	if(l<=10)
	{
		cout<<"Name"<<"\t\t"<<"Run"<<"\t"<<"Overs"<<"\t"<<"Balls"<<"\t"<<"Economy"<<endl;
		for(i=0;i<y;i++)
		{
			cout<<n2[i]<<"\t\t"<<r2[i]<<"\t"<<b2[i]<<"\t"<<ball[i]<<"\t"<<e[i]<<"\n";
		}
	}
	else
	{
		cout<<"Error in Balling Input\n";
		string r;
		cout<<"If you want to try again enter (y/Y)\n";
		cin>>r;
		if(r=="y"||r=="Y")
		goto abc;
	}
}
