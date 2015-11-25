/*仿照date类设计一个time类，设计多个重载的构造函数，可以设置时间，
进行时间的加减运算，按各种可能的格式输出时间。
*/
#include <cmath> 
#include <iostream> 
using namespace std; 
class time
 { 
 private:  
 int hour,minute,second; 
 public:  
  int seccale(); 
  	time(int h=0,int m=0,int s=0);//构造函数 
		  void settime(int h=0,int m=0,int s=0);//时间设置
		  void print_12(); 
		  void print_24();
		  time add(time&);  //+
		  time sub(time&); //-
};  
 time::time(int h,int m,int s)
 {
 	settime(h,m,s);
 } 
 void time::settime(int hh,int mm,int ss)
  {   
  hour=(hh>=0&&hh<=23)?hh:0;  
   minute=(mm>=0&&mm<=59)?mm:0;
     second=(ss>=0&&ss<=59)?ss:0;
	  }  
	  void time::print_24()
	   {  
	    cout<<((hour<10)?"0":"")<<hour<<":"
		<<((minute<10)?"":"")<<minute<<":"
		<<((second<10)?"0":"")<<second;  
		} 
		 void time::print_12()
		  {  
		   int hh=(hour==0||hour==12)? 12:hour%12; 
		     cout<<((hh<10)?"0":"")<<hh<<":"<<((minute<10)?"0":"")
			 <<minute<<":"<<((second<10)?"0":"")
			 <<second<<(hour<12?"AM":"PM");
		  } 
		 int time::seccale()  
		 {
		 	return(hour*60+minute)*60+second;
		 }
		  time time::add(time &t)
		   {   
		 	  	time tmp; 
		    	int ss; 
    			ss=seccale()+t.seccale(); 
	 			tmp.hour=ss/3600%24;
 				tmp.minute=ss%3600/60; 
  				tmp.second=ss%3600%60; 
  			    return tmp;
				  
		   } 
    time time::sub(time&t)
	 {   
	 time tmp;  
	 int ss;  
	 ss=abs(seccale()-t.seccale());
	    tmp.hour=ss/3600%24;  
		tmp.minute=ss%3600/60;  
		tmp.second=ss%3600%60;
		  return tmp;
		   } 
 int main()
{ 
		    
 time t1(8,10,30),t2; 
	  t2.settime(5,15,20); 
	  	   cout<<"t2:"; 
			  t2.print_12();
			     cout<<"\nt2:"; 
				  t2.print_24(); 
				 cout<<"\nt1+t2:"; 
  			t1.add(t2).print_24(); 
  				 cout<<"\nt1-t2:"; 
   				t1.sub(t2).print_24(); 
    return 0;  
}
