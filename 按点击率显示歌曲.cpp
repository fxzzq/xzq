#include <iostream>
using namespace std;
class song
{
public:
	friend istream & operator >> (istream &,song &);
	friend void max(song s1,song s2,song s3,song s4,song s5);
	friend void max(song & s1,song & s2);
	friend ostream & operator << (ostream &,song &);
private:
	char name[30];
	char singer[30];
	int rate;
};
istream & operator >> (istream & input,song & c)
{
	input>>c.name>>c.singer>>c.rate;
	return input;
} 
ostream & operator << (ostream & output,song & c)
{
	output<<c.name<<' '<<c.singer<<' '<<c.rate;
	return output;
}
void max(song & s1,song & s2)
{
	song s3;
	if(s1.rate<s2.rate)
	{
      	  s3=s2;
		  s2=s1;
		  s1=s3;
	}
}
void max(song s1,song s2,song s3,song s4,song s5)
{
	max(s1,s2);
	max(s1,s3);
	max(s1,s4); 
	max(s1,s5);
	max(s2,s3);
	max(s2,s4); 
	max(s2,s5); 
	max(s3,s4); 
	max(s3,s5); 
	max(s4,s5);
    cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5;
}
int main()
{song s1,s2,s3,s4,s5;
   cout<<"请输入5个歌名 歌手 点击率："<<endl;
	cin>>s1>>s2>>s3>>s4>>s5;
	cout<<"按点击率排列如下：\n" ;
	max(s1,s2,s3,s4,s5);
	return 0;
}
