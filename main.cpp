#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <string>
#include <fstream>
#include <iomanip>
#include "Header.h"
using namespace std;
using namespace sf;
int main() {
	starting();
	team teams [10];
	ifstream teamfile;
	teamfile.open("teams.txt");
	for (int i = 0; i < 10; i++) {
		teams[i].getteams(teamfile, teams, i);
	}
	
	player** players= new player * [10];
	for (int i = 0; i < 10; i++) {
		players[i] = new player [15];
	}
	ifstream playerfile;
	playerfile.open("players.txt");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 11; j++) {
			players[i][j].getplayer(playerfile, players, i, j);
		}
	}
	string id;
	int pass;
	cout << "please enter ID and password to coontinue: ";
	cin >> id;
	cout << "\nenter password: ";
	cin >> pass;
	if (pass == teams[0].getpass() && id == teams[0].getusername()) {
		cout << "you have logged in sucsessfully\n";
		login();
		bool flag = false;
		while (flag == false) {
			int choice;
			string teamname, playername;
			cout << "what do you want to do!\n\t\t\t1 add player \n\t\t\t2 search player \n\t\t\t3 remove player\n\t\t\t4 update player\n\t\t\t5 update captain\n\t\t\t6 update coach\n\t\t\t7 display team\n\t\t\t0 Do nothing !\n";
			cin >> choice;
			int playerposition = 12;
			switch (choice) {
			case 1: {
				cout << "which team ?\n";
				cin >> teamname;
				for (int i = 0; i < 10; i++) {
					if (teams[i].getname(i) == teamname) {
						cout << "please enter player name\n";
						cin >> playername;
						players[i][playerposition].addplayer(players, playerposition, i, playername);
						add();
						cout << playername << " is added in " << teams[i].getname(i) << " team\n";
					}
				}
				break;
			}
			case 2: {
				cout << "please enter the player name for search\n";
				cin >> playername;
				if (players[0][0].searchplayer(players, playername) == true) {
					cout << "player found !!";
					found();
				}
				else cout << "player not found !!\n";
				break;
			}
			case 3: {
				cout << "please enter the player you want to remove\n";
				cin >> playername;
				if (players[0][0].searchplayer(players, playername) == true) {
					cout << "player found !!\n";
					found();
					players[0][0].removeplayer(players, playername);
					remove();
					cout << "player removed success\n";
				}
				else cout << "player not found !!\n";
				break;
			}
			case 4:
			{
				cout << "please enter the name of the player you want to update his stats\n";
				cin >> playername;
				if (players[0][0].searchplayer(players, playername) == true) {
					cout << "player found !!\n";
					found();
					players[0][0].updateplayer(players, playername);
					update();
				}
				else cout << "player not found\n";
				break;
			}
			case 5: {
				cout << "From which team you want to update captain: ";
				cin >> teamname;
				for (int i = 0; i < 10; i++) {
					if (teams[i].getname(i) == teamname) {
						teams[i].updatecaptain(teams, i);
						cout << "captain of " << teamname << " updated successfuly\n";
						captain();
					}

				}
				break;
			}
			case 6: {
				cout << "From which team you want to update coach: ";
				cin >> teamname;
				for (int i = 0; i < 10; i++) {
					if (teams[i].getname(i) == teamname) {
						teams[i].updatecoach(teams, i);
						cout << "couch of " << teamname << " updated successfuly\n";
						coach();
					}

				}
				break;
			}
			case 7: {
				int tchoice;
				cout << "please enter which team you want to see\n1 pakistan\t\t\t\t2 India\n3 England\t\t\t\t4 NewZealand\n5 Australia\t\t\t\t6 Sri Lanka\n7 South Africa \t\t\t\t8 Bangladesh\n9 Afghanistan\t\t\t\t10 Windies\n";
				cin >> tchoice;
				if (tchoice == 1) {
					t1();
				}
				else if (tchoice == 2) {
					t2();
				}
				else if (tchoice == 3) {
					t3();
				}
				else if (tchoice == 4) {
					t4();
				}
				else if (tchoice == 5) {
					t5();
				}
				else if (tchoice == 6) {
					t6();
				}
				else if (tchoice == 7) {
					t7();
				}
				else if (tchoice == 8) {
					t8();
				}
				else if (tchoice == 9) {
					t9();
				}
				else if (tchoice == 10) {
					t10();
				}
				
				else cout << "wrong input\n";
				break;
			}
			case 8: {
				int tchoice;
				cout << "please enter which team schedule you want to see\n1 pakistan\t\t\t\t2 India\n3 England\t\t\t\t4 NewZealand\n5 Australia\t\t\t\t6 Sri Lanka\n7 South Africa \t\t\t\t8 Bangladesh\n9 Afghanistan\t\t\t\t10 Windies\n";
				cin >> tchoice;
				if (tchoice == 1) {
					m1();
				}
				else if (tchoice == 2) {
					m2();
				}
				else if (tchoice == 3) {
					m3();
				}
				else if (tchoice == 4) {
					m4();
				}
				else if (tchoice == 5) {
					m5();
				}
				else if (tchoice == 6) {
					m6();
				}
				else if (tchoice == 7) {
					m7();
				}
				else if (tchoice == 8) {
					m8();
				}
				else if (tchoice == 9) {
					m9();
				}
				else if (tchoice == 10) {
					m10();
				}
				
				else cout << "wrong input\n";

			}
			case 0: {
				flag = true;
			}


			}
			int loop;
			cout << "Enter 1 if you want to do anything else before moving forward\nenter any kry to move forward\n";
			cin >> loop;
			if (loop != 1) {
				flag = true;
			}
		}
		int choice;
		cout << "Cricbuzz allows many features for the user like :-\n\t1. conduct match\n\t2. schedulde match\n\t3. update world records\n\t4. update team ranking\n\t5. update player ranking\n\t6. display upcoming matches\n\t7. display recent matches\n\twhat do you want to do press respected input\n ";
		cin >> choice;
		switch (choice) {
		case 1: {
			cout << "Dear user!\n\tDo you want to conduct an already schedule match or schedule a new match?\m";
			
			break;
		}
		case 2: {
			break;
		}
		case 3: {
			break;
		}
		case 4: {
			break;
		}
		case 5: {
			break;
		}
		case 6: {
			break;
		}
		case 7: {
			break;
		}




		}
	}

	
	return 0;
}