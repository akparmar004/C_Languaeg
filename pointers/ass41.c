    #include<stdio.h>
           void main()
	  {
		char *ptr1 = "abcdef";
		ptr1 = ptr1+(strlen(ptr1)-1);
		printf("%c", --*ptr1--);
		printf("%c",--*--ptr1);
		printf("%c",--*(ptr1--));
		printf("%c",--*(--ptr1));
		printf("%c",*ptr1);
	}
            
