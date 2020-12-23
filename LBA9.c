#include <stdio.h>
int main ()
{
	FILE *item,*itemA,*itemB;
	int i=0,ii=0;
	char ch,name[50];
	
	item = fopen("code.txt","r");
	itemA = fopen("List of Item A.txt","w");
	itemB = fopen("List of Item B.txt","w");
	
	fprintf(itemA,"List of Item A\n");
	fprintf(itemA,"================\n");
	
	fprintf(itemB,"List of Item B\n");
	fprintf(itemB,"================\n");
	
	//fgets(name,46,item);
	//fscanf(item," %c ",&ch);
	while(!feof(item))
	{
		fgets(name,46,item);
		fscanf(item," %c\n",&ch);
	
	if(ch == 'A')
	{
	fprintf(itemA,"%s %c\n",name,ch);
		i++;
	}
	else if(ch == 'B')
	{
	fprintf(itemB,"%s %c\n",name,ch);
		ii++;
	}
	//printf("%s %c\n",name,ch);
	//fgets(name,46,item);
	//fscanf(item," %c ",&ch);
	}
	fprintf(itemA,"====\n");
	fprintf(itemA,"Total list(s) = %d\n",i);
	fprintf(itemB,"====\n");
	fprintf(itemB,"Total list(s) = %d\n",ii);
	
	
	fclose(item);
	fclose(itemA);
	fclose(itemB);
	
	return 0;
}
