#include<iostream>
using namespace std;
class movie{
    
    //protected:
    private:
    string name;
    public:
    static int budget;      //static variables :: do not need to initialze objects 
    movie(){
        cout<<"Constructor called "<<endl;
    }
    int income;
    float rating;
    string getName() {
        return name;
    }
    int setname(string n) {
        name=n; 
    }
    static int funX(){
        return budget;        //static function can just have stic members
    }
    //destructer 
    ~movie(){
        cout<<"Hey I am Destructer "<<endl;;
    }
};
int movie::budget =5000;        //scope reolution operator
int main()
{   
    cout<<movie::funX()<<endl;   //calling a static function
    cout<<movie::budget<<endl;     // calling a static member
    movie batman;
    movie *a=new movie;   //destructer  dont involke automatically for dynamically allocated 
    delete a;

    /*
    cout<<"order of execution"<<endl;
    //dynamic memory allocation
    movie *a=new movie;
    a->setname("The alchemist");
    a->income=1000;
    a->rating=9.1;
    cout<<a->getName()<<"\n"<<a->income<<"\n"<<a->rating<<endl;
    //static memory allocation
    movie batman;
    batman.setname("The Batman");
    batman.income=1200;
    batman.rating=7.9;
    movie b(batman);                            //COPY CONSTRUCTOR 
    b.setname("THE DARK KNIGHT");
    cout<<batman.getName()<<"\n"<<batman.income<<"\n"<<batman.rating<<endl;
    cout<<b.getName()<<"\n"<<b.income<<"\n"<<b.rating<<endl;
    
*/
}