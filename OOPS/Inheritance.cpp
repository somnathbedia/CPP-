#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	//string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
    protected:
    string OwnerName;
public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubscribersCount++;
	}
	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
};
class CookingYouTubeChannel:public YouTubeChannel {
public:
    CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name,ownerName){

    }
    void practice(){
        cout<<OwnerName<<" Is practicing Cooking,learn new recipes,Experimenting with spices.."<<endl;
    }
};

int main()
{
     CookingYouTubeChannel cookingChannel("Priya's Kitchen","Priya");
    cookingChannel.PublishVideo("Mutton Biryani");
    cookingChannel.PublishVideo("Choclate cake");
    cookingChannel.Subscribe();
    cookingChannel.Subscribe();
    cookingChannel.GetInfo();
    cookingChannel.practice();


    //return 0;
    system("pause>0");

}
   
	

