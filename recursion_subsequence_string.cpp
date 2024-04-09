#include<iostream>
using namespace std;
/*First method:
             Include 
             .
             .
             .
             Exclude */
void findsubsequences(string str, string output, int index){

    if(index>=str.length()){   //base case
        cout<<"->"<<output<<endl;  //at this stage the output becomes completely done for print .
        return ;

    }

    char ch=str[index];


      output.push_back(ch);    //include process
      findsubsequences(str, output,index+1);  //recursive relation

      output.pop_back();  //exclude process
      findsubsequences(str,output, index+1); //recursive relation
}

/*Second Method :
              Exclude
              .
              .
              Include */
// void findsubsequences(string str, string output, int index){

//     if(index>=str.length()){    //Base case
//         cout<<"->"<<output<<endl;
//         return ;
//     }

//     char ch=str[index];

//     findsubsequences(str,output, index+1); //Recursive relation

//     output.push_back(ch);
//     findsubsequences(str, output, index+1);//Recursive relation

// }
int main(){
    string str="abc";
    string output="";
    int index=0;

    findsubsequences(str, output, index);
    return 0;
}
