  
  int compare(int a[],int b[])
  {
  	if(a[0]>b[0]) return 1;//a>b����1 
  	if(a[0]<b[0]) return -1;//a<b����-1 
  	
  	for(int i=a[0];i>0;i--)//��ʱ��ζ�ţ�a,bλ����ͬ ���Ӹ�λ�ȵ���λ 
	  {
  		if(a[i]>b[i]) return 1;
  		if(a[i]<b[i]) return -1;
	  }
	
	return 0;//����ɸѡ��˵��a=b; 
  }
