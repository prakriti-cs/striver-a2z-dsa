
#include <iostream>
using namespace std;
// Pattern 1 
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j << " ";
        }
        cout << endl;
    }
}
// Pattern 2
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << i << " ";

        }
        cout << endl;
    }
}
//Pattern 3
void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
}
//Pattern4
void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
//Pattern 5
void print5(int n){
    for(int i =0;i<n;i++){
        //space
        for(int j =0;j<n-i-1;j++){
            cout << " ";

        }
        //star
        for(int j =0;j<2*i+1;j++){
            cout << "*";
        }
        //space
        for(int j =0;j<n-i-1;j++){
            cout << " ";
        }
        cout << endl;


    }
}
//Pattern6
void print6(int n){
    for(int i =0;i<n;i++){
        //space
        for(int j =0;j<n;j++){
            cout << " ";

        }
        //star
        for(int j =0;j< 2*n-(2*i+1);j++){
            cout << "*";
        }
        //space
        for(int j =0;j<n;j++){
            cout << " ";
        }
        cout << endl;


    }
}
//Pattern 7 *IMPORTANT*(combined star triangles)
void print7(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars =2*n -i;
        for(int j=1;j<=stars;j++){
            cout << "*";
        
        }
        cout << endl;
    }
}
//Pattern 8 (flip 1,0,1,0 with even and odd rows)
void print8(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0) start=1;
        else start = 0;
        for(int j=0;j<i;j++){
            cout<< start;
            start=1-start;
        }
        cout << endl;
    }
    
}
//Pattern 9 (SPACES IMPORTANT)
void print9(int n){
    int space = 2*(n-1);
    for(int i =1; i<=n;i++){
        //numbers
        for(int j=1; j<=i;j++){
            cout << j;
        }
        //space
        for(int j =1; j<=space;j++){
            cout << " ";
        }

        //numbers
        for( int j =i; j>=1;j--){
            cout << j;
        }
        cout << endl;
        space -=2;
        
    }

}
//pattern 10
void print10(int n){
    int num=1;
    for(int i =1;i<=n;i++){
        for(int j =1;j<=i;j++){
            cout<< num << " ";
            num=num+1;
        }
        cout << endl;
    }
}
void print11(int n){
    for(int i =0;i<n;i++){
        for(char ch ='A';ch<='A'+i;ch++){
            cout<< ch;
        }
        cout<< endl;

  }
}
//Pattern 12(symmetry change breakpoimt)
void print12(int n){
    
    for(int i =0;i<n;i++){
        //space

        //letters
        char ch = 'A';
        int breakpoint= (2*i+1)/2;
        for(int j =1;j<=2*i+1;j++){
            cout<< ch;
            if(j<=breakpoint) ch++;
            else ch--;
        }
        //space

        cout << endl;

    }
}


int main(){
    
        print1(5);
        print2(5);
        print3(5);
        print4(5);
        print5(5);
        print6(5);
        print7(5);
        print8(5);
        return 0;
    }


