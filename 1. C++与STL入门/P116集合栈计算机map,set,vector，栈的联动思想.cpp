#include<bits/stdc++.h>
using namespace std;

#define all(x) x.begin(),x.end()
#define ins(x) inserter(x,x.begin())//���������� 

typedef set<int> Set;//�����ǶԼ��ϵĲ����������Ͽ���һ����Ԫ�ؾͺ� 

map<Set,int> Idcache;//������ӳ��Ϊ����ID,����ʹ��ջ����

vector<Set> Setcache;//�ò������������Ŵ���ͬ��id 

int Id(Set x){
	if(Idcache.count(x)) return Idcache(x);//����ҵ��ˣ��ͷ��ؼ���xӳ�������id 
	Setcache.push_back(x);//���û���ҵ����ͽ�x�������� 
	return Idcache[x]=Setcache.size()-1;//����ID����������� 
}

int main()
{
	stack<int> s;
	int n;
	cin>>n;//
	
	for(int i=0;i<n;i++){
		string op;
		cin>>op; 
		if(op[0]=='P') s.push(Id(Set()));//Set()��ʾһ���ռ�,���ռ���ID��ջ 
		else if(op[0]=='D') s.push(s.top());
		else
		{
			Set x1=Setcache[s.top()];s.pop();
			Set x2=Setcache[s.top()];s.pop();//��idȡset��Ȼ��pop 
			Set x;
			if(op[0]='U') set_union(all(x1),all(x2),ins(x));
			if(op[0]='I') set_intersection(all(x1),all(x2),ins(x));//set_union��set_intersection��stl�����ò��� 
			
			if(op[0]='A') 
			{
				x=x2;x.insert(x1);
			}
			
			s.push(Id(x));//��ջ 
		}
		cout<<Setcache[s.top()].size()<<endl;
	}
}
