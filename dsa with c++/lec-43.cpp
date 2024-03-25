// #include<iostream>
// using namespace std;
// class student{
//    //   public:
//    //  protected:
//    private:
//      int rollno;
//      char grade;
//      string name;

   //   string getname(){
   //      cout<<this-> name<<endl;
   //   }
   //   int getrollno(){
   //      cout<<this-> rollno<<endl;
   //   }
   //   char getgrade(){
   //      cout<<this-> grade<<endl;
   //   }
// };

// class malestudent: private student{
//      public:
    //  string name2;

   //not accessible due to private declared in the super class
   
//     string name2;
//     void print(){
//       cout<<"Print the element"<<endl;
//     }
//     int getgrade(){
//       return this->grade;
//     }

//     string getname(){
//       return this->name;
//     }

// // };
// int main(){

//      malestudent ajay;
   //   cout<<ajay.name<<endl;
   //   cout<<ajay.getgrade();
   //   cout<<ajay.getname();

   //   return 0;
//     malestudent ajay;
//     cout<<ajay.name<<endl;
//     cout<<ajay.grade<<endl;
//     cout<<ajay.rollno<<endl;
//     cout<<ajay.name2<<endl;

// }
// }

// #include<iostream>
// using namespace std;
// class animal{
//     public:
//     int age;
//     string colour;
//     void speak(){
//       cout<<"speaking"<<endl;
//     }
// };
// class dog: public animal{

// };
// class ajay: public dog{

// };
// int main(){
//    // dog d1;
//    // d1.speak();
//    ajay d1;
//    d1.speak();
// }


//multiple inheritance
// #include<iostream>
// using namespace std;
// class dog{
//    public:
//    int num;
//    void speak(){
//       cout<<"speacking"<<endl;
//    }
// };
// class cat{
//    public:
//    int num;
//    void crowl(){
//       cout<<"crowling"<<endl;
//    }
// };
// class animal: public cat, public dog{
//    public:
// };
// int main(){
//     animal a;
//     a.crowl();
//     a.speak();
// }

//heirarichical inheritance

// #include<iostream>
// using namespace std;
// class A{
//    public:
//    void fun1(){
//       cout<<"function1"<<endl;
//    }
// };
// class b: public A{
//    public:
//    void fun2(){
//       cout<<"function2"<<endl;
//    }
// };
// class c:public A{
//    public:
//    void fun3(){
//       cout<<"function3"<<endl;
//    }
// };
// int main(){
//    A name;
//    name.fun1();

//    b name2;
//    name2.fun1();
//    name2.fun2();
   
//    c name3;
//    name3.fun1();
//    name3.fun2();
//    name3.fun3();


// }

// hybrid inheritance 
// #include<iostream>
// using namespace std;
// class a{
//    public:
//    void king(){
//       cout<<"kingggggggg"<<endl;
//    }
// };

// class e{
//    public:
//    void king2(){
//       cout<<"kingggggggggggg"<<endl;
//    }
// };
// class b:public a{
//    public:
//    void king3(){
//       cout<<"kinggggggggggggggg"<<endl;
//    }
// };
// class d:public a,public b{
//    public:
//    void king4(){
//       cout<<"kingggggggggggggggggggg"<<endl;
//    }
// };
// class f:public a,public e{
//    public:
//    void king5(){
//       cout<<"kingggggggg"<<endl;
//    }
// };
// int main(){
//    a name;
//    name.king();

//    b name2;
//    name2.king();
//    name2.king3();

//    d name3;
//    // name3.king();
//    name3.a::king();
//    name3.king3();
//    name3.king4();

//    e name4;
//    name4.king2();

//    f name5;
//    name5.king2();
//    name5.king();

// }

//polymorphism

//compile time 
// #include<iostream>
// using namespace std;
// class a{
//    public:
//    int n;
//    void joy(){
//       cout<<"hardwork"<<endl;
//    }
//    void joy(int n){
//       cout<<"smartwork"<<n<<endl;
//    }
//    int joy(int n,int ajay){
//       cout<<"hardwork and smartwork"<<endl;
//       return n;
//    }
// };

// int main(){
//     a ajay;
//     ajay.joy();
// }
 
 //operater overloading
//  #include<iostream>
//  using namespace std;
//  class ajay{
//    public:
//    int a;
//    int b;
//    void operator+ (ajay &obj){
//       int value1 = this->a;
//       int value2 = obj.a;
//       cout<<value1-value2;
//    }
//    void operator() (){
//       cout<<"print obj1"<<endl;
//    }
//  };

//  int main(){
//      ajay obj1,obj2;
//      obj1.a = 4;
//      obj2.a = 7;
//      obj1+obj2;
//      obj1();
//  }


//run time polymorphism
//method overriding
// #include<iostream>
// using namespace std;
// class a{
//    public:
//    void speak(){
//       cout<<"bark";
//    }

// };
// class b: public a{
//    public:
//    // void speak(){
//    //    cout<<"shout";
//    // }
// };

// int main(){
//    b ajay;
//    ajay.speak();
// }