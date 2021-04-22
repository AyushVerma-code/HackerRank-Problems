using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        if(initialAge<0)
            {cout<<"Age is not valid, setting age to 0."<<endl;
                age=0;
            }
         else if (initialAge>0) {
         age=initialAge;
         }   
       
    
       
               // Add some more code to run some checks on initialAge

    }

    void Person::amIOld(){
        if(age<13)
        cout<<"You are young."<<endl;
        else if(age>=13&&age<18)
        cout<<"You are a teenager."<<endl;
        else if(age>=18)
        cout<<"You are old."<<endl;
        // Do some computations in here and print out the correct statement to the console 

    }

    void Person::yearPasses(){
        age++;
        // Increment the age of the person in here

    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}
