#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

struct queue{
int rear=-1;
int front=-1;
int arr[50];
}timefree;


void enqueue(queue &q,int item){
if (q.front==-1){
    q.front++;
}
q.rear+=1;

q.arr[q.rear]=item;
}


int dequeue(queue &q){
    int ret=q.arr[q.front];
    q.front++;
    return ret;
}



int main(){

    cout<<"* * * * * Welcome to Desk Duty Assigner * * * * *"<<endl;



   int studfree[7]={0,0,0,0,0,0,0};

   int n;
   int x=0;
   cout<<"Enter the number of students ";
   cin>>n;
   int assigned[n];
   int timesave[7][n];
   int i;
   int w;
   int freecount[n];
   for (i=0;i<n;i++){
    assigned[i]=0;
    freecount[i]=0;
   }
   int j=0;

   int st_input;
   int studentlist[n][7];     ///array with timings of all students separately




int nine=-1;
int ten=-1;
int eleven=-1;
int two=-1;
int three=-1;
int four=-1;
int five=-1;
int ff=9;
int gg=2;




int maxi=0;
int in=0;
int finalarr[7];

for(i=0;i<7;i++)
{
    for(j=0;j<n;j++)
       timesave[i][j]=0;
}

for(i=0;i<n;i++)
{
    for(j=0;j<7;j++)
       studentlist[i][j]=0;
}


///*Taking user input for each student to know his free time slots*/

for(i=0;i<n;i++){
     cout<<"Enter details of student "<<i+1<<": "<<endl;
     j=0;
     st_input=1;
     while (st_input!=0){
        cin>>st_input;
        if(st_input!=0){
            studentlist[i][j]=st_input;
            j+=1;

        }
     }
     enqueue(timefree,j);
    }


///*Taking input ends here*/


 for(i=0;i<n;i++){
    w=dequeue(timefree);
    for(j=0;j<w;j++)
    {                                                     /*saving students to time array*/

        if (studentlist[i][j]==9){
                timesave[0][++nine]=i+1;
                freecount[i]++;
        }

        else if (studentlist[i][j]==10){
                timesave[1][++ten]=i+1;
                freecount[i]++;
        }

        else if (studentlist[i][j]==11){
                timesave[2][++eleven]=i+1;
                freecount[i]++;
        }

        else if (studentlist[i][j]==2){
                timesave[3][++two]=i+1;
                freecount[i]++;
        }

        else if (studentlist[i][j]==3){
                timesave[4][++three]=i+1;
                freecount[i]++;
        }

        else if (studentlist[i][j]==4){
                timesave[5][++four]=i+1;
                freecount[i]++;
        }

        else if (studentlist[i][j]==5){
                timesave[6][++five]=i+1;
                freecount[i]++;
        }

        }
    }



studfree[0]=nine+1;
studfree[1]=ten+1;
studfree[2]=eleven+1;
studfree[3]=two+1;
studfree[4]=three+1;
studfree[5]=four+1;
studfree[6]=five+1;


cout<<"TImesave"<<endl;
for(i=0;i<7;i++)
{
    for(j=0;j<n;j++)
        cout<<timesave[i][j]<<" ";
    cout<<endl;
}

cout<<"Studentlist"<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<7;j++)
        cout<<studentlist[i][j]<<" ";
    cout<<endl;
}

cout<<"Student free at particular slot"<<endl;
for(j=0;j<7;j++)
{
    cout<<studfree[j]<<" ";

}
cout<<endl;

cout<<"Student free  "<<endl;
for(j=0;j<n;j++)
{
    cout<<timefree.arr[j]<<" ";

}
cout<<endl;

for (i=0;i<7;i++)
{

    maxi=timefree.arr[timesave[i][0]];
    cout<<maxi<<"  is maxi for i= "<<i<<endl;
    for (j=0;j<studfree[i];j++)
    {

        in= timesave[i][j];
        x=in;
        if (maxi< timefree.arr[in-1])
        {
            x = in ;
            maxi=timefree.arr[in-1];
        }
        cout<< "Maxi : "<< maxi<<"  timefree.arr :"<<timefree.arr[in-1]<<" STUDENT and in is:"<<x<<" "<<in<<endl;
    }
    finalarr[i]= x;
    timefree.arr[in-1]=timefree.arr[in-1]-1;
    cout<<"Now Final is : "<< x<<"Free slot is: "<<timefree.arr[in-1]<<endl;
    cout<<"Student free  "<<endl;
for(j=0;j<n;j++)
{
    cout<<timefree.arr[j]<<" ";

}
cout<<endl;
}

cout<<"Student Duty"<<endl;
for(j=0;j<7;j++)
{
    cout<<finalarr[j]<<" ";

}
cout<<endl;

for(i=0;i<3;i++){
    cout<<"From"<<ff<<" to "<<ff+1<<": "<<"Student "<<finalarr[i]<<endl;
    ff+=1;
}

for(i=3;i<7;i++){
    cout<<"From"<<gg<<" to "<<gg+1<<": "<<"Student "<<finalarr[i]<<endl;
    gg+=1;
}
}

