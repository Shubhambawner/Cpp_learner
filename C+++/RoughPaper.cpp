/*
#include<iostream>
using namespace std;

class rollno{
    public:
    int Rollno;
    rollno(){

    }
    rollno(int a){
        this->Rollno=a;
    }
};

class name{
    public:
    string Name;
    name(){

    }
    name(string n){
        this->Name=n;
    }
};
class grade{
    public:
    char Grade;
    grade(){

    }
    grade(char c){
        this->Grade=c;
    }
};

rollno ar[]={rollno(),rollno(),rollno()};
name an[3]={name(),name(),name()};
grade ag[3]={grade(),grade(),grade()};
int i=0;
void fill(string Name, int Rollno, char Grade){

    name n(Name);
    rollno r(Rollno);
    grade g(Grade);

    ar[i]=r;
    ag[i]=g;
    an[i]=n;
    i++;
};
void printStudents(){
    while (i-->0)
    {
        cout<<ar[i].Rollno<<'\t';
        cout<<ag[i].Grade<<'\t';
        cout<<an[i].Name<<'\t'<<'\n';
    }
    
};


int main(){
    fill("name1",23,'a');
    fill("name2",24,'b');
    fill("name3",22,'f');

    printStudents();

}
*/

/*
#include<iostream>
using namespace std;

int divide(int a , int b){
    if (b==0)
    {
        throw b;
    }else{
        return a/b;
    }   
}

int main(){
    try{
        divide(2,0);
    }catch(int a){
        cout<<"division by 0\n";
    }
}
*/