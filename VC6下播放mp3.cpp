#include<iostream>
#include<cstring>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
int main()
{
	char str[200]="play ";//play后有空格
	char mp3file[300]="C:\\HallofFame.mp3";//文件名没有空格
	//cin>>mp3file;
	strcat(str,mp3file);
	cout<<str;
	mciSendString(str,NULL,0,NULL);
	char a;
	cin>>a;//结束
	return 0;
}

