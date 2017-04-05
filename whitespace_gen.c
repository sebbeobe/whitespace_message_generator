#include<stdio.h>    	    		
#include<stdlib.h>	
#include<string.h>      		 		  
	
void padbin(char *bin_num)    		  	 	
{	
int len=9-strlen(bin_num);char new[len];    			 		 
	
for(int i=0;i<len-1;i++) new[i]='0';    		  	 	
strcat(new,bin_num);	
strcpy(bin_num,new);      			  	 
}	
       	 		  
	
int main()      	     
{	
FILE *fp;char message[100]; char whitespace[1600]=""; char binary[9];		   		
	
printf("Write your message here (max 100 characters):\n");		 		  
gets(message);	
for(int i=0;message[i]!=0;i++)     		  	 	
{	
strcat(whitespace,"   ");   			 		 
itoa(message[i],binary,2);	
padbin(binary);      		  	 	
	
for(int j=0;binary[j]!=0;++j)     			  	 
{	
if(binary[j]=='1')strcat(whitespace,"\t"); else strcat(whitespace," ");    	     
}	
strcat(whitespace,"\n\t\n  ");    		  			
	
}      		 	  	
strcat(whitespace,"\n\n\n");	
      			  	 
fp=fopen("whitespace_code_file","w");	
fputs(whitespace,fp);      		 		  
fclose(fp);	
return 0;      	    	
	
}  


