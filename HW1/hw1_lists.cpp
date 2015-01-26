
#include <fstream>
#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <cstdlib>


using namespace std;

struct Item {
  Item(int v, Item* n) { val = v; next = n; }
  int val;
  Item* next;
};


Item* concatenate(Item* head1, Item* head2);  // returns head pointer to new list
void removeEvens(Item*& head);//removes the even numbers in the linklist
double findAverage(Item* head);// average of the linklist

void printList(std::ostream& ofile, Item* head);// prins the list in the outfile.txt
void readLists(Item*& head1, Item*& head2, int*list1,int* list2);//read in the elements to the list from a text file 
//for the read list function i addad the 2 arrays that hols the nnumbers from the text file.
Item* concatenate(Item* head1, Item* head2){


}

void removeEvens(Item*& head){


}

double findAverage(Item* head){


}

void printList(std::ostream& ofile, Item* head)
{
  if(head == NULL)
    ofile << std::endl;
  else {
    ofile << head->val << " ";
    printList(ofile, head->next);    
  }
}

/*void readlist(Item*& head, int valuse[],int place)
{
Item* functionhead;// =new Item;


functionhead->val = valuse[place];
functionhead->next=NULL;
cout<<"doop";
if(listPtr ==NULL){

head = functionhead;


}else{
  Item* temporary= head;
  while(sizeof(valuse)>place){//temporary->next){
   
temporary->val= valuse[++place];
temporary= temporary->next;
  }
  temporary->next = functionhead;


}*/
 
int main(int argc, char* argv[]){

	Item* listItems1;//linked list

  Item* listItems2;
  Item* listItems3;

string holdnumbers[3];

int counter=0;
int holder=0;

//int numberholder1[40];
//int numberholder2[40];
string midman;

//inputing atat into a link list for test
/*Item* testlist;
for(int i=0;i<5;i++){
testlist->val=(i+1);
testlist = testlist->next;
}
listItems1->next=testlist;

ifstream out(argv[2]);

printList(out, &listItems1);//print out the linklist for a test
out.close();
*/
ifstream file(argv[1]);
int k=0;

if(file.is_open())//takes in lines from the text file
{
 while(getline(file, holdnumbers[k])){
  k++;
 }

}  

cout<<holdnumbers[0]<<endl;//test out puts

cout<<holdnumbers[1]<<endl;


 int j=0;

 
stringstream ss;
ss<< holdnumbers[0];
while(ss>>holder){//used to mesure the number of elemets in a line to make each of the elemetns 

  counter++;
}
int numberholder1[counter+1];
counter=0;


stringstream rr;
rr<< holdnumbers[1];
while(rr>>holder){//used to mesure the number of elemets in a line to make each of the elemetns 
  counter++;
}
int numberholder2[counter+1];
counter=0;

 while(j<2){

  stringstream ll;
  ll<< holdnumbers[j];
int i=0;
   if(j==0){
    while(ll>>numberholder1[i]){
      i++;
      }
     }else{
     while(ll>>numberholder2[i]){
      i++;
      }
     }
j++;}

//for(int i=0; i<numberholder1.size();i++)
//cout<<numberholder1[i]<endl;

//readlist(listItems1, numberholder1);








 

 
 
// file.close();

 
} 