#include <iostream>

using namespace std;


int main()
{
    int Students=10;  
    int Passes[10]={0,}; 
    int Failures[10]={0};    
    int Grade;
    int NumOfPass=0;
    for (int no=0;  no < Students; ++no)
    
    {
        cout<<" enter the marks " <<no+1<<" : "; 
        cin>>Grade;
        
        if (Grade > 50 ) {                                 
            
            Passes[no]=Grade;
            
           }
        else {                                           
            Failures[no]=Grade;
            
        }
    }
           for(int Pass=0; Pass< 10; ++Pass)
    {                       
       
        if (Passes[Pass] > 0)
        { 
        NumOfPass=NumOfPass+1;      
        cout << "Student No. " << Pass+1<< " student pass with "<< Passes[Pass] <<" score" << endl;
      
      
        }
      
    }
              for (int Fail=0; Fail< 10; Fail++)
     {                        
        if (Failures[Fail] > 0)
        {   
        cout << " total no" << Fail+1 << " student fail with "<< Failures[Fail] <<" score" << endl;
         
        }
    } 
     if (NumOfPass > 7)                      

    {
        
        cout <<"raise tution" <<endl;
       
    }
    
    
    return 0;  
    
}