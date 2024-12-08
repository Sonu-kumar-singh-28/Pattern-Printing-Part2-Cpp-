#include<iostream>
using namespace std;
int main()
{
    int rowscount;
    cout<<" Enter The Rows:";
    cin>> rowscount;

    for( int rows=0; rows<rowscount; rows= rows+1)
    {
        // space print for first part 
        for(int column=0; column<rowscount-rows-1; column= column+1)
        {
            
            cout<<" ";
        }
        for( int column=0; column<2*rows+1; column= column+1)
        {
            if(column == 0  || column==2*rows)
            {
                // first star and last star 
                cout<<"*";
            }
            else 
            // space printing 

            {
                cout<<" ";
            }
        }
          cout<< endl;
    }
 // second part for hollow daimond printing

 for( int rows =0; rows<rowscount; rows= rows+1)
 {
    for( int column=0; column<rows; column= column+1)
    {
        // secong part  space printing 
        cout<<" ";
    }
    for( int column=0; column<2*rowscount-2*rows-1; column= column+1)
    {
        if( column==0 || column==2*rowscount-2*rows-2)
        {
            cout<<"*";
        }
        else 
        {
            cout<<" ";
        }
    }
       cout<< endl;
 }
  
   return 0;
}