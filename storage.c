#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_ITEMS 50

typedef struct{
    char name[100];
    int id;
    int qantity;
}item;
item items[MAX_ITEMS];
int itemcount=0;
void add(){
    if(itemcount<MAX_ITEMS){
         printf("Enter Item name:");
        scanf("%s",items[itemcount].name);
        printf("Enter item Id:");
        scanf("%d",&items[itemcount].id);
        printf("Enter Qantity:");
        scanf("%d",&items[itemcount].qantity);
        itemcount++;
        printf("Item added successfully!!\n");
    }
    else
    printf("Storage is full!\n");
       
}
void delete(){
    int removeid;
    printf("Enter the Id to Remove:");
    scanf("%d",&removeid);
    
    for(int i=0;i<itemcount;i++){
        if(items[i].id==removeid){
            for(int j=i;j<itemcount-1;j++){
                items[j]=items[j+1];
            }
           itemcount--;
           printf("Item removed successfully!!\n");
           return;
        }
    }
    printf("Item not found!!\n");
}

void display(){
    if(itemcount == 0){
        printf("Inventory is empty!\n");
        return;
    }

    printf("--Current Inventory--\n");
    printf("Name\tID\tQantity\n");
    for(int i=0;i<itemcount;i++){
        printf("%s\t%d\t%d\n",items[i].name,items[i].id,items[i].qantity);
    }
}


int main(){
    int choice,a,id;
    char itm[100];

   while(1){
     printf("~~~~~Storage System~~~~~\n");
    printf("1.Add Item\n2.Menue\n3.Remove Item\n4.Exit\nEnter the option:");
    scanf("%d",&choice);

    switch(choice){
    case 1:{
        add();
        
        break;
    }
        
    case 2:{
        display();
        break;
    }   
    
        case 3:{
            
            delete();
           
            break;
        }

        case 4:{
            exit(1);
            break;
        }
    }
   }
}