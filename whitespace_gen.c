#include<stdio.h>    	    		
#include<string.h>	
int main()     		 		  
{	
FILE *fp; char message[100]; char whitespace[1600]=""; 		  	 	
	
printf("Write your message here (max 99 characters):\n");			 		 
fgets(message,100,stdin);	
for(int i=0;message[i]!=0;i++)     		  	 	
{	
strcat(whitespace,"   ");   			  	 
	
for(int j=7;j>-1;--j)      	     
{	
      		  			
if(message[i]&(1<<j))strcat(whitespace,"\t");	
else strcat(whitespace," ");    		 	  	
}	
strcat(whitespace,"\n\t\n  ");    			  	 
	
}      		 		  
	
strcat(whitespace,"\n\n\n");       	    	
fp=fopen("whitespace_code_file","w");	
fputs(whitespace,fp);         	 	 
fclose(fp);	
return 0; 


}
