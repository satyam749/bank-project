#include<iostream>
using namespace std;
class bank
{
	private:int aco[5],bal[5];
	char name[5][23];
	public:void get()
	{
		int x;
		for(x=0;x<=4;x++)
		{
			cout<<"\n enter account no";
			cin>>aco[x];
			cout<<"\n Enter name";
			cin>>name[x];
			cout<<"\n Enter Balance";
			cin>>bal[x];
		}
	}
	void deposit()
	{
		int ac,amt,tot;
		cout<<"\n Enter Account no and amount";
		cin>>ac>>amt;
		for(int x=0;x<=4;x++)
		{
			if(aco[x]==ac)
			{
				tot=bal[x]+amt;
				bal[x]=tot;
			}
		}
		cout<<"\n Total amount="<<tot;
	}
	void withdrawal()
	{
		int ac,amt,x,tot;
		cout<<"\n Enter Account no and amount";
		cin>>ac>>amt;
		for(int x=0;x<=4;x++)
		{
			if(aco[x]==ac)
			{
				tot=bal[x]-amt;
				bal[x]=tot;
			}
		}
		cout<<"\n total amount="<<tot;
	}
	void show()
	{
		int x;
		for(x=0;x<=4;x++)
		{
			cout<<"\n Account no="<<aco[x];
			cout<<" name ="<<name[x];
			cout<<" balance ="<<bal[x];
		 }
	 }
  };
  int main()
  {
  	bank b;
  	int ch,h;
  	do
  	{
  		cout<<"\n main menu";
  		cout<<"\n 1.Add customer";
  		cout<<"\n 2.Deposit amount";
  		cout<<"\n 3.withdrawal amount";
  		cout<<"\n 4.show list";
  		cout<<"\n 5.Enter any choice";
  		cin>>ch;
  		switch(ch)
  		{
  			case 1:b.get();
  			break;
  			case 2:b.deposit();
  			break;
  			case 3:b.withdrawal();
  			break;
  			case 4:b.show();
  			case 5:break;
		  }
		  cout<<"\n continu 1/0";
		  cin>>h;
	}while(h!=0);
	  }
