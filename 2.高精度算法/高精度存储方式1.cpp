#include<bits/stdc++.h>
using namespace std;

const int num=100;//���λ�� 

int main(){
	int a[num+1];//a[0]�洢λ�� 
	
	string s1;
	cin>>s1;//�����ַ������룬һλ����һ���ַ�����������һ�οո�һ�� 
	
	memset(a,0,sizeof(a));//����aȫ��Ԫ����0 
	a[0]=s1.length();//string������ 
	
	for(int i=1;i<=a[0];i++)
	{
		a[i]=s1[a[0]-i]-'0';//��ȥ'0'�ǽ��ַ�ת��Ϊ���֣�λ����i����s1[a[0]-1]��s1[0]���պõ��� 
	}
	
	return 0;
	
}
