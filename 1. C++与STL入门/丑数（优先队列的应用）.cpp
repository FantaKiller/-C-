#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
const int one[3]={2,3,5};//�����������x:2x,3x,5xҲ�ǳ��� 

int main(){
	
	priority_queue<LL,vector<LL>,greater<LL> >pq;//��С��������ȶ��У�ԽС���ȶ�Խ�ߣ� 
	set<LL> s;
	
	pq.push(1); 
	s.insert(1);//�������� 
	
	for(int i=0;;i++){
		
		LL x=pq.top();pq.pop();
		
		if(i==1500){
			cout<<"��1500��������"<<x<<endl;//
			break; 
		}

		for(int j=0;j<3;j++)
		{
			LL x2=x*one[j];//2x,3x,5x;����һ����ɢ�Ĺ��� 
			
			if(!s.count(x2))//���û��x(��ֹ�ظ�) 
			{
				s.insert(x2);
				pq.push(x2);//��� 
			}
		}
	}
	return 0;
}
