#include <unistd.h>

int ft_check(char *str,char c,int pos){

	int i = 0;
	while(i < pos){
		if(str[i] == c){
			return 0;
		}
		i++;
		}
	return 1;
}

void  ft_inter(char *str,char *str1){

	int i ;
	int j;
	i=0;
	while(str[i]){
		j=0;
		while(str1[j]){
			if(str[i] == str1[j]){
				if(ft_check(str,str[i],i) == 1){
					write(1,&str[i],1);
					break;
				}
			}
			j++;

		}
		i++;
	}
	}

int main(int ac ,char **av){

	if(ac == 3){
		ft_inter(av[1],av[2]);
}
write(1,"\n",1);
}
