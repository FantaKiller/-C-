#include<bits/stdc++.h>
using namespace std;

set<string> dict;//����set 

int main(){
	string s,buf;
	while(cin>>s)//������ 
	{
		for(int i=0;i<s.length();i++)//set�ĳ�����length() 
		{
			if(isalpha(s[i])) s[i]=tolower(s[i]);//���������ĸ��ʱ�򣬽���ת��ΪСд��ĸ����׼���� 
			else
			s[i]=' ';
		}
		
		stringstream ss(s);//��s����ss; 
		while(ss>>buf) dict.insert(buf);//ssһ������һ����Ч���� 
	}
	for(set<string>::iterator it=dict.begin();it!=dict.end();++it)//������ 
	{
		cout<<*it<<endl;
	}
	return 0;
}

//�س�+(Ctrl+Z)+�س����������� 
