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
    int ContentQuality;
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
    void CheckAnalytics(){
        if(ContentQuality<5)
        cout<<Name<<" has bad quality content."<<endl;
        else
        cout<<Name<<" has a great  content." <<endl;
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

class SingerYouTubeChannel:public YouTubeChannel {
public:
    SingerYouTubeChannel(string name, string ownerName):YouTubeChannel(name,ownerName){

    }
    void practice(){
        cout<<OwnerName<<" Is taking singing class,learn new songs,learning dance.."<<endl;
    }
};

int main()
{
    CookingYouTubeChannel cookingChannel("Priya's Kitchen","Priya");
    SingerYouTubeChannel  singerytchannel("Anim Sings","Anand");

    cookingChannel.practice();
    cookingChannel.practice();
    cookingChannel.practice();
    cookingChannel.practice();
    cookingChannel.practice();
    cookingChannel.practice();
    singerytchannel.practice();
    singerytchannel.practice();

    YouTubeChannel* yt1 = &cookingChannel;
    YouTubeChannel* yt2 = &singerytchannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();


    return 0;
    //system("pause>0");

}
   
	

