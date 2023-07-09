    #include <stdio.h>     
    void main()  
    {  
    
    	char s[10],ch;
    	int i,j,l;
    	
    	printf("Enter name : ");
    	scanf("%s",s);
    	
    	printf("Name before : %s\n",s);
    	
    	for(l=0;s[l];l++);
    	
    	for(i=0,j=l-1;i<j;i++,j--)
    	{
    		ch=s[i];
    		s[i]=s[j];
    		s[j]=ch;
    	}
    	
        printf (" The reverse of the original string is: %s \n", s);   
    }  
