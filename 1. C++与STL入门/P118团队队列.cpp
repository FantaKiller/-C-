#include<bits/stdc++.h>
using namespace std;

const int maxt=1000+10;//�Ŷ������� 

int main(){
	int t,kase=0;
	
	while(scanf("%d",&t)==1&&t)//t���ŶӸ��� 
	{
		printf("����#%d\n",++kase); 
		
	    map<int,int> team;//��ÿ���˱��ӳ��Ϊ�Ŷӱ�� 
	
	    for(int i=0;i<t;i++)
		{
	     	int n,x;
		    scanf("%d",n);//��ǰ�Ŷ����� 
		    while(n--)//����ѭ����� 
			{
			scanf("%d",&x);//����ÿ���˲�ͬ�ı��,x�ᱻ��θ�ֵ 
			team[x]=i;//ӳ��id 
		    }
	    }
	    
	    queue<int> q,q2[maxt];//�������У�q���Ŷӱ�Ŷ��У�q2���Ŷ�i�ĳ�Ա��Ŷ���(����һ������) 
		 
	    for(;;){
	    	int x;
			char cmd[10];
			scanf("%s",cmd);//ָ�� 
			
			if(cmd[0]='S') break;//�˳� 
			
			else if(cmd[0]='D') {
				int t=q.front();//���ҵ����׶��еı�� 
				printf("%d\n",q2[t].front());//���׵��˵ı�� 
				q2[t].pop();//���� 
				if(q2[t].empty()) q.pop();//������Ӻ�Ϊ���Ŷ�Ϊ�գ��ͳ������ 
			}
			
			else if(cmd[0]='E'){
				scanf("%d",&x);//������˱�� 
				int t=team[x];//�������Ŷӱ�� 
				if(q2[t].empty()) q.push(t);//������Ŷ��ڴ󲿶�û�ˣ����Ŷ��������󲿶� 
				q2[t].push(x);//�����˽����Ŷ� 
			}
		}
		cout<<endl;
    }
    return 0;
}


