al#include <map>
#include "TwitterData.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    // Schema: UserName, Last, First, Email, NumTweets, MostViewedCategory
    string raw_data[5][6] = {{"rangerPower", "Smit", "Rick", "smitRick@gmail.com", "1117", "power lifting"},
                             {"kittyKat72", "Smith", "Kathryn", "kat@gmail.com", "56", "health"},
                             {"lexi5", "Anderson", "Alexis", "lexi5@gmail.com", "900", "education"},
                             {"savage1", "Savage", "Ken", "ksavage@gmail.com", "17", "president"},
                             {"smithMan", "Smith", "Rick", "rick@hotmail.com", "77", "olympics"}};
    TwitterData *twitter_data = new TwitterData[5];
    for (int i = 0; i < 5; ++i)
    {
        twitter_data[i].setUserName(raw_data[i][0]);
        twitter_data[i].setActualName(raw_data[i][2] + " " + raw_data[i][1]);
        twitter_data[i].setEmail(raw_data[i][3]);
        twitter_data[i].setNumTweets(stoi(raw_data[i][4]));
        twitter_data[i].setCategory(raw_data[i][5]);
    }


    //
    // Your code goes here
    //
    map<string, string> first;
    for (int i = 0, i < 5, ++i){
       first.insert(pair<string, string> (twitter_data[i].getUserName(),  twitter_data[i].getActualName + " " + twitter_data[i].getEmail() + " " twitter_data[i].getCategory() + " " + twitter_data[i].getNumTweets
    };

    for (map<string, string>::iterator i = first.begin(); i != first.end(); ++i) {
        cout << (*first).first + " " + (*first).second << endl;
    }
    cout << "savage1" + " " + first["savage1"] << endl;
    first.erase("savage1");;

    map<string, string> second;
    for (int i = 0, i < 5, ++i){
       first.insert(pair<string, string> (twitter_data[i].getEmail(),  twitter_data[i].getUserName() + " " + twitter_data[i].getActualName + " " twitter_data[i].getCategory() + " " + twitter_data[i].getNumTweets
    };

    for (map<string, string>::iterator i = second.begin(); i != second.end(); ++i) {
        cout << (*second).first + " " + (*second).second << endl;
    }
    cout << "kat@gmail.com" + " " + second["kat@gmail.com"] << end1;
    second.erase("kat@gmail.com");
};

    return 0;
