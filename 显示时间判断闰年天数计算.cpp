#include<iostream>
using namespace std;
class Date{
	int year,month,day,total,num;
	public:
		int totala();
		void setdate(int yearN,int monthN,int dayN)
		{
			year=yearN;
			month=monthN;
			day=dayN;
		}
		void showdate()
		{
			cout<<year<<"/"<<month<<"/"<<day<<" 此日是"<<year<<"年中的第"<<total<<"天"<<endl;
		}
	 void isleapyear()
		{
			if(year%4==0 && year%100!=0 ||year%400==0)
			num=1;
			else
			num=0;
			if(num==1)
			cout<<year<<"是闰年。"<<endl;
			else
			cout<<year<<"不是闰年。"<<endl;
		}
		
		
		}; 
		int Date::totala()
		{
			int temp=1;
			int sum=0;
			while(temp<month)
			{
				switch(temp)
				{
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
						sum+=31;break;
					case 2:
						if(year%4==0 && year%100!=0 ||year%400==0)
						sum+=29;
						else
						sum+=28;break;
					default:
					sum+=30;
				}
				temp++;	
			}
		     sum+=day;
		     total=sum;
			 return total;	
		}
int main()
{
	 Date thisyear;
	 Date lastyear;
	 Date nextyear;
	 int x,y,z; 
	 cout<<"this year is:"<<endl;
	 cin>>x>>y>>z;
	 thisyear.setdate(x,y,z);
	 thisyear.totala();
	 thisyear.showdate();
	 thisyear.isleapyear();
	 cout<<"last year is:"<<endl;
	 cin>>x>>y>>z;
	 lastyear.setdate(x,y,z);
     lastyear.totala();
	 lastyear.showdate();
     lastyear.isleapyear();
	 cout<<"next year is:"<<endl;
	 cin>>x>>y>>z;
	 nextyear.setdate(x,y,z);
     nextyear.totala();
	 nextyear.showdate();
	 nextyear.isleapyear();
	 return 0;
}

