#include <iostream>
using namespace std;

void funName(string name)        // here create a function ---> returntype function_Name(input parameters)
{                                //                              {
    for (int i = 0; i < 10; i++) //
    {                            //                                  ------->   logic or code
        cout << name << endl;    //
    }                            //
} //                                    }
  // below line are function calling
int main()                     //                                             int main()          ------> main function
{                              //                                        {
    funName("Abhinesh singh"); //                                                function_Name();
    return 0;                  //                                                 return 0;
} //                                           }
