#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main(){

    std::string Response[] = {
        "I Heard You!",
        "So, you are talking to me?",
        "Continue, I'm Listening.",
        "Very Intresting Conversation",
        "Tell me More.!"

    };

    srand((unsigned) time(NULL));

    std::string sInput = "";
    std::string sResponse = "";

    while(true){
        cout<<">";
        getline(std::cin, sInput);
        int nSelection = rand() % 5;
        sResponse = Response[nSelection];
        cout<<sResponse<<endl;
    }




    return 0;
}