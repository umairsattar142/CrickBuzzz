#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// abstract class
class player {       
protected:
	string name;
	int shirt;
	double average;
	int ranking[3];
	int totalruns;
	int experience;
	int wickets;
public:
	
	 void addplayer(player**players,int playerpostion,int i,string playername);
	 void removeplayer(player** players,string playername);
	 bool searchplayer(player**player,string playername);
	 void updateplayer(player** player,string playername);
	 void getplayer(ifstream& teamfile, player** players, int& i, int& j);
	 void displayplayer(player** players, int& i, int& j);

};
class team :public player {
protected:
	string name;
	int ranking[3];
	int noplayers;
	int won;
	int lost;
	string captain;
	string coach;
	string adminusername;
	int password;
public:
	team() {
		adminusername = "1";
		password = 1;
	}

	void getteams(ifstream& teamfile, team teams[], int& i);
	void addplayer();
	void removeplayer();
	bool searchplayer();
	void updateplayer();
	void displaymatches();
	void updatecaptain(team teams[],int& i );
	void updatecoach(team teams[],int &i);
	void displayteam(team teams[], int& i);
	string getusername() {
		return adminusername;
	}
	int getpass() {
		return password;
	}
	string getname(int i) {
			if (i == 0) {
				return "Pakistan";
			}
		    if (i == 1) {
			return "India";
			}
			if (i == 2) {
				return "England";
			}
			if (i == 3) {
				return "Austrailia";
			}
			if (i == 4) {
				return "S.Africa";
			}
			if (i == 5) {
				return "Srilanka";
			}
			if (i == 6) {
				return "Bangladesh";
			}
			if (i == 7) {
				return "Windies";
			}
			if (i == 8) {
			 return "Afganistan";
				}
			if (i == 7) {
				return "NewZealand";
					}
	}

};
class match {
protected:
	string team1;
	string team2;
	string date;
	string venue;
	string matchtype;
	string tournamentname;
	string commentators;
	string umpires;
	string matchstatus;
public:
	void conductmatch();
	void schedulematch();
	void updateworldrecords();
	void upateteamranking();
	void updateplayerranking();
	void isplayupcomingmatches();
	void displayrecentmatches();

};
void starting(); 
void login();
void add();
void found();
void remove();
void update();
void captain();
void coach();
void t1();
void t2();
void t3();
void t4();
void t5();
void t6();
void t7();
void t8();
void t9();
void t10();
void m1();
void m2();
void m3();
void m4();
void m5();
void m6();
void m7();
void m8();
void m9();
void m10();