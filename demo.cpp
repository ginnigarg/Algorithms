#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

void print(struct node *head){
  struct node * temp = head;
  while(temp){
    printf("%d ",temp->data);
    temp=temp->next;
  }
  printf("\n");
}
int main()
{
	node *f1,*head,*ptr,*s,*head1;
	int n,d,ch,count=1,pos,c;
	cout<<"enter the no of elements"<<endl;
	cin>>n;
	cout<<"enter the elements"<<endl;
	f1=new node;
	//s=new node;
	cin>>d;
	f1->data=d;
	f1->next=NULL;
	head=f1;
	ptr=head;
	head1=head;
	for(int i=0;i<n-1;i++)
	{
		cin>>d;
		f1=new node;
		f1->data=d;
		f1->next=NULL;
		ptr->next=f1;
		ptr=f1;
		count++;
	}
  //print(head);
	cout<<"1: to add element at the begining"<<endl<<"2: to add the element at specific position"<<endl<<"3: to add element at the end of the list"<<endl<<"4: exit"<<endl;
	cin>>ch;
	while(ch!=4)
	{
		switch(ch)
		{
			case 1:
				{
					//ptr=head;
					cout<<"enter the no of elements to be added"<<endl;
					cin>>n;
					for(int i=0;i<n;i++)
					{
						cout<<"enter the element to be added"<<endl;
						cin>>d;
						f1=new node;
						f1->data=d;
						f1->next=head;
					  	head=f1;
						count++;
            					print(head);
					}
					break;
				}
			case 2:
				{
					ptr=head;
					cout<<"Enter the no of elements to be added"<<endl;
					cin>>n;
					for(int i=0;i<n;i++)
					{
            					ptr=head;
						cout<<"enter the element"<<endl;
						cin>>d;
						cout<<"enter the position"<<endl;
						cin>>pos;
            					s=new node;
           					printf("%d %d\n",d,pos);
						if(pos==0){
							s->data=d;
					      		s->next=head;
							head=s;
							count++;
							print(head);
							break;
					    	}
						c=1;
						while(c!=pos && ptr->next!=NULL)
						{
							ptr=ptr->next;
							c++;
						}
						s->data=d;
						s->next=ptr->next;
						ptr->next=s;
						count++;
            					print(head);
					}

					break;
				}
			case 3:
				{
          				ptr=head;
          				while(ptr->next){
            				ptr=ptr->next;
          				}
					cout<<"enter the no of elements to be added"<<endl;
					cin>>n;
					for(int i=0;i<n;i++)
					{
						cout<<"enter the element to be add"<<endl;
						cin>>d;
						f1=new node;
						f1->data=d;
						f1->next=NULL;
						ptr->next=f1;
						ptr=f1;
						count++;
            					print(head);
					}
          				//print(head);
					break;
				}

			default:
				{
					cout<<"enter a right choice"<<endl;
					break;
				}
		}
		cout<<"1: to add element at the begining"<<endl<<"2: to add the element at specific position"<<endl<<"3: to add element at the end of the list"<<endl<<"4: exit"<<endl;
		cin>>ch;
	}
	ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}
	cout<<endl<<"total no of nodes "<<count<<endl;
}
