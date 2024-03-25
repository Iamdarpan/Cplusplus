// #include<iostream>
// using namespace std;
// class fruit{
//     //properties
// //    char name[100];
//    int value;
// };
// int main(){
//   //creation of object 
//   fruit mango;
//   cout<<"Size of: "<<sizeof(mango);
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class hero{
//     private:
//     int health;
//     public:
//     char level;
     
//    //default constructor
//     hero(){
//       cout<<"hello hh"<<endl;
//     }


//    //parameterised constructor
//    hero(int health){
//       // cout<<"address of pointer: "<<this<<endl;
//       this -> health = health;
//    }
//    hero(int health,char level){
//       this -> health = health;
//       this -> level = level;
//    }

//    //copy constructor
//    hero(hero& temp){
//       this ->health = temp.health;
//       this ->level = temp.level;
//    }
   
//     void print(){
//       cout<<"health: "<<this->health<<endl;
//       cout<<"level: "<<this ->level<<endl;
//     }

//     int gethealth(){
//         return health;
//     }
//     char getlevel(){
//         return level;
//     }
//     void sethealth( int h ){
//         health = h;
//     }
//     void setlevel( char ch ){
//         level = ch;
//     }
// };
// int main(){
    
//     hero ajay(12,'e');
//     ajay.print();
//    //  ajay.sethealth(70);
//    //  ajay.setlevel('E');
   
//    //copy constructor
//    hero v(ajay);
//    v.print();




   //  hero ab(10);
   //  cout<<"address : "<<&ab<<endl;
   //  cout<<ab.gethealth()<<endl;

   //  hero ajay(10,'u');
   //  cout<<ab.gethealth()<<endl;
   //  cout<<ab.getlevel()<<endl;
   // //  ajay.print();

   // //  dynamically
   //  hero* a = new hero(10);
   // //  a->print();
   // cout<< a -> gethealth();

    /*
    //static allocation
    a.sethealth(34);
    a.setlevel('A');
    cout<<"The health is: "<<a.gethealth()<<endl;
    cout<<"The level is: "<<a.getlevel()<<endl;

    //dynamic allocation
    hero *b = new hero;
   //  (*b).sethealth(32);
   //  (*b).setlevel('A');

   b->sethealth(23);
   b->setlevel('r');


    cout<<"The health is: "<<(*b).gethealth()<<endl;
    cout<<"The level is: "<<(*b).getlevel()<<endl;

    cout<<"The health is: "<<b->gethealth()<<endl;
    cout<<"The level is: "<<b->getlevel()<<endl;

    */


   //   cout<<"Health is: "<<ajay.gethealth()<<endl;
   //   ajay.sethealth(45);
   //   ajay.level = 'A';
   //   cout<<"The health of hero is: "<<ajay.gethealth()<<endl;
   //   cout<<"The level of hero is: "<<ajay.level<<endl;
// }


// #include<iostream>
// using namespace std;
// class man{
//     private:
//        int a;
//        int b;
//     public:
//        void data(int x,int y){
//           a=x; b=y;
//        }
//        void getdata(){
//           cout<<"a : "<<a<<", b : "<<b<<endl;
//        }
//        Complex add(Complex pradeep){
//         Complex temp;
//         temp.a = a + name.a;
//         temp.b = b + name.b;
//         return temp;
//        }
// };
// int main(){
//     man ajay,pradeep,akash;
//     ajay.data(2,3);
//     pradeep.data(3,4);
//     akash = ajay.add(pradeep);
//     akash.getdata();
//     // ajay.getdata();

//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class hero{
    public:
      int health;
      char level;
      char *name;
      static int chard;
    //   hero(){
    //     name = new char[100];
    //   }

      hero(){
        cout<<"constructor called"<<endl;
      }

     //copy constructor
      hero(hero& temp){
        //deep copy
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch, temp.name);
        this->name = ch;
      }

      void print(){
        // cout<<"constructor called"<<endl;

        cout<<endl;
        cout<<"Name: "<<this->name<<" ";
        cout<<"Health: "<<this->health<<" ";
        cout<<"Level: "<<this->level<<" ";
        cout<<endl;
      }

      char getlevel(){
          return level;
      }

      int gethealth(){
          return health;
      }

      void setlevel(char l){
          level = l;
      }

      void sethealth(int h){
          health = h;
      }

      void setname(char name[]){
          strcpy(this->name,name);
      }

      static int random(){
        return chard;
      }

    //   destructor called
      ~hero(){
        cout<<"Destructor called:"<<endl;
      }
};

int hero::chard = 5;

int main(){

    // cout<<hero::chard;

    cout<<hero::random();

    // //bad practice for a static word
    // hero a;
    // cout<<a.chard;







    // hero h1;

    // hero *h2 = new hero();
    // //manually destructor call
    // delete h2;

    // hero aman;
    // aman.setlevel('R');
    // aman.sethealth(55);
    // char name[7] = {"darpan"};
    // aman.setname(name);
    // // aman.print();


    // hero rahul(aman);
    // // rahul.print();

    // aman.name[0] = 'h';
    // aman.print();
    // rahul.print();
    // aman = rahul;
    // aman.print();
    // rahul.print();
}