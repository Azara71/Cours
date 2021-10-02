#include <my_strlen.c>
#include <my_strlen.h>
#include <string.h>
#include <chaine_aleatoire.c>
#include <time.h>
#include <strangeFunction.c>


int main(){
	int N=100000;
	int i;
	char ** tab_chaine;
	double time_1,time_2,time_3;
	time_t begin_strlen,end_strlen,begin_mystr,end_mystr,begin_strange,end_strange;
	tab_chaine=chaine_aleatoire(N);
	
	time(&begin_strlen);
	for(i=0;i<N;i++)
	{
		strlen(tab_chaine[i]);
	}
	time(&end_strlen);
	
	
	
	time_1=end_strlen-begin_strlen;

	
	time(&begin_mystr);
	for(i=0;i<N;i++)
	{
		my_strenlen(tab_chaine[i]);
	}
	time(&end_mystr);
	time_2=begin_mystr-end_mystr;
	time(&begin_strange);
	
	for(i=0;i<N;i++)
	{
		strange_function(tab_chaine[i]);
	}
	time(&end_strange);
	time_3=begin_strange-end_strange;
	printf("Pour strlen nous avons %f,Pour mystrlen nous avons : %f, Pour strange nous avons : %f",time_1,time_2,time_3);
}
