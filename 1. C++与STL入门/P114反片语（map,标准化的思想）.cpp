#include<bits/stdc++.h>
using namespace std;

map<string,int> words;//������ӳ��Ϊ���� 
vector<string> tmp;//


//Ȼ���׼������ 
string standard(const string & s)//const����ֻ����&�������ã���ֹ�ռ��˷ѣ� 
{
	
	string ans=s;
	
	for(int i=0;i<ans.length();i++)
	{
		ans[i]=tolower(ans[i]);
	}//ת��ΪСд 
	
	sort(ans.begin(),ans.end());//Ȼ�����򣬱�׼�� 
	
	return ans;
}

int main()
{
	string s;
	
	while(cin>>s){
		
		if(s=="#")  break;//�˳���������ѭ�� 
		
		tmp.push_back(s);// 
		string same=standard(s);//���õ��ʱ�׼�� 
		
		if(!words.count(same)) words[same]=0;//����ڵ���ӳ���У�û�������׼�����ʣ�������Ϊ0������һ��Ϊ1�� 
		words[same]++;//����о�+1; 
	}
	
	vector<string> output;//������������� 
	
	for(int i=0;i<tmp.size();i++)
	{
	    if(words[standard(tmp[i])]==1) 
		    output.push_back(tmp[i]);//����׼������ӳ����ֵΪ'1',˵����������������push; 
	}
	
	sort(output.begin(),output.end());//�ֵ������� 
	
	//����vector�ı��� 
	for(vector<string>::iterator it=output.begin();it!=output.end();++it)
	{
		cout<<*it<<endl;
	}
	for(int i=0;i<output.size();i++)
	{
		cout<<output[i]<<endl;
	}
	
	return 0;
}









