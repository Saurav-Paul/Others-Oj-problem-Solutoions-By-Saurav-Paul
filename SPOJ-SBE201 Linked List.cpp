#include<stdio.h>
#include<stdlib.h>

struct node{
	int value ;
	struct node * next;
	
} *root;

void del (int indx){
	
	if(indx == 0){
		if(root ->next )
		root  = root->next;
		return ;
	}
	else{
		int cnt = 0;
		
		struct node * curr = root -> next;
		while(curr->next != NULL && cnt < indx-1)
			cnt ++ , curr= curr->next;
		
		if(curr -> next==NULL) return ;
		
		curr -> next = curr -> next -> next;
		
	}
	
}

void insert(int value ,int indx){
	
	struct node * temp = (struct node*) malloc(sizeof(struct node));
	temp ->value = value;
	temp ->next = NULL;
	if(indx == 0 || root ->next == NULL){
		temp -> next = root->next;
		root->next = temp;
		return ;
	}
	else{
		int cnt = 0;
		struct node * curr = root -> next ;
		while(curr->next != NULL && cnt < indx-1){
			cnt ++;
			curr = curr->next;
		}
		temp ->next = curr->next;
		curr ->next = temp;
		
	}
}

void print(){
	struct node * info = root ->next;
	if(info == NULL)
		puts("empty");
	else{
		while(info != NULL){
			printf("%d ",info->value);
			info = info -> next;
		}
		puts("");
	}
}
int main(){
	
	root = (struct node*) malloc(sizeof(struct node));
	root ->value = 0;
	root -> next = NULL;
	char op;
	
	while(scanf("%c",&op)==1 && op != 'q'){

		if(op == 'r'){
			del(0);
		}
		else if(op=='f'){
			int value ;
			scanf("%d",&value);
			insert(value,0);
		}
		else if(op == 'd'){
			int indx; 
			scanf("%d",&indx);
			del(indx);
		}
		else if(op=='i'){
			int value , indx ;
			scanf("%d%d",&indx,&value);
			insert(value,indx);
		}
		else
			printf("Error\n");
		
		getchar();
		print();
		
	}
	
	
	return 0;
}
