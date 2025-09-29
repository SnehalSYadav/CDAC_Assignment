#include<iostream>
using namespace std;
int main(){
    int a=5;
    
    for(int i=0; i<a; i++){
        for (int j=0;j<a-i-1;j++){
            cout<<" ";
        }
        int b=1;
        for(int j=0;j<=i;j++){
             cout<<b<<" ";
            b=b*(i-j)/(j+1);
      
    }
cout<<endl;
}

    for(int i=0; i<a; i++){
        for (int j=0;j<a-i-1;j++){
            cout<<" ";
        }
        int b=1;
        for(int j=0;j<=i;j++){
             cout<<"*"<<" ";
           
      
    }
cout<<endl;
}


    for(int i=0; i<a; i++){
        for (int j=0;j<a-i-1;j++){
            cout<<" ";
        }
        int b=1;
        for(int j=0;j<=i;j++){
             cout<<b++<<" ";
           
      
    }
cout<<endl;
}

    for(int i=0; i<a; i++){
        for (int j=0;j<a-i-1;j++){
            cout<<" ";
        }
        static int b=1;
        for(int j=0;j<=i;j++){
             cout<<b++<<" ";
           
      
    }
cout<<endl;
}

char b='A';
    for(int i=0; i<a; i++){
        for (int j=0;j<a-i-1;j++){
            cout<<" ";
        }
       
        for(int j=0;j<=i;j++){
             cout<<b++<<" ";
           
      
    }
cout<<endl;
}

 b='A';
    for(int i=0; i<a; i++){
        for (int j=0;j<a-i-1;j++){
            cout<<" ";
        }
        b='A';
        for(int j=0;j<=i;j++){
             cout<<b++<<" ";
           
      
    }
cout<<endl;
}

 b='A';
    for(int i=0; i<a; i++){
        for (int j=0;j<a-i-1;j++){
            cout<<b++<<" ";
        }
        
        for(int j=0;j<=i;j++){
             cout<<" ";
           
      
    }
cout<<endl;
}






int row;
    for(int i=0; i<row; i++){
        for (int j=0;j<row-i-1;j++){
            cout<<" ";
        }
        b='A';
        for(int j=0;j<=i;j++){
             cout<<b++<<" ";
           
      
    }
cout<<endl;
}
}