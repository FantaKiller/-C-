#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,x;
	priority_queue<int> pq1;//�Ӵ�С������ 
	priority_queue<int,vector<int>,greater<int> >pq2;//��С���� 
	//�������> >����дһ�𣬻ᱻ����Ϊ��>>����� 
	
	while(scanf("%d",&num)==1){
		int tmp=num,tmp1=num;
		while(num--){
			scanf("%d",&x);
			pq1.push(x);
			pq2.push(x);
		}
		
		while(tmp--){
			printf("%d ",pq1.top());//top()����ֵ,pop()��������ֵ 
			pq1.pop();
		}
		cout<<endl;
		while(tmp1--){
		    printf("%d ",pq2.top());
		    pq2.pop();
		}
		break;
	}
}
