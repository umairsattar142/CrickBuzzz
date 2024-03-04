#include "Header.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iomanip>
using namespace std;
using namespace sf;
void starting() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("start.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);
		
		window.display();
	}
}
void team::getteams(ifstream& teamfile, team teams[], int& i) {


	teamfile >> teams[i].name >> teams[i].ranking[0] >> teams[i].ranking[1] >> teams[i].ranking[2] >> teams[i].noplayers >> teams[i].won >> teams[i].lost >> teams[i].captain >> teams[i].coach;

}
void player::getplayer(ifstream& playerfile, player **players, int& i, int& j) {
	playerfile >> players[i][j].name >> players[i][j].shirt >> players[i][j].average >> players[i][j].ranking[0] >> players[i][j].ranking[1] >> players[i][j].ranking[2] >> players[i][j].totalruns >> players[i][j].experience >> players[i][j].wickets;
}
void team::displayteam(team teams[], int& i) {

	cout << left << setw(30);
	cout << left << setw(30) << teams[i].name << " " << teams[i].ranking[0] << "    " << teams[i].ranking[1] << "   " << teams[i].ranking[2] << "    " << teams[i].noplayers << "     " << teams[i].won << "     " << teams[i].lost << "              " << teams[i].captain << "          " << teams[i].coach << endl;

}
void player::displayplayer(player** player, int& i, int& j) {

	cout << left << setw(30)<< player[i][j].name << " "<<player[i][j].shirt<<"  "<<player[i][j].average <<"  "<< player[i][j].ranking[0] << "    " << player[i][j].ranking[1] << "   " << player[i][j].ranking[2] << "    " << player[i][j].totalruns << "     " << player[i][j].experience << "     " << player[i][j].wickets << "              " << endl;

}
void player::addplayer(player** player,int playerposition, int i,string playername) {
	player[i][playerposition],name = playername;
}
bool player ::searchplayer(player** players, string playername) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 11; j++) {
			if (playername == players[i][j].name) {
				return true;
			}
		}
	}
}
void player ::removeplayer(player** players, string playername) {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 11; j++) {
			if (playername == players[i][j].name) {
				players[i][j].name ="-";
				players[i][j].shirt = 0;
				players[i][j].average = 0;
				players[i][j].ranking[0] = 0;
				players[i][j].ranking[1] = 0;
				players[i][j].ranking[2] = 0;
				players[i][j].totalruns = 0;
				players[i][j].experience = 0;
				players[i][j].wickets = 0;
			}
		}
	}
}
void player::updateplayer(player** players, string playername) {
	int shirt, avg, r1, r2, r3, run, exp, wic;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 11; j++) {
			if (playername == players[i][j].name) {
				cout << "\nplease enter his new shirt number: ";
				cin >> shirt;
				cout << "player new average: ";
				cin >> avg;
				cout << "player rank in t20: ";
				cin >> r1;
				cout << "player rank in odi: ";
				cin >> r2;
				cout << "player rank in test: ";
				cin >> r3;
				cout << "the total runs " << playername << " has made yet: ";
				cin >> run;
				cout << "enter how many matches has " << playername << " played yet: ";
				cin >> exp;
				cout << "enter total wickets he had taken in his career: ";
				cin >> wic;
				players[i][j].shirt = shirt;
				players[i][j].average = avg;
				players[i][j].ranking[0] = r1;
				players[i][j].ranking[1] = r2;
				players[i][j].ranking[2] = r3;
				players[i][j].totalruns = run;
				players[i][j].experience = exp;
				players[i][j].wickets = wic;
			}
		}
	}
}
void team::updatecaptain(team teams[],int& i) {
	string newcaptain;
	cout << "please enter the new captain: ";
	cin >> newcaptain;
	teams[i].captain = newcaptain;
}
void team::updatecoach(team teams[], int& i) 
{
	string newcoach;
	cout << "please enter the new couch: ";
	cin >> newcoach;
	teams[i].coach = newcoach;
}
void login() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("login.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void add() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("add.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void found() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("found.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void remove() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("remove.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void update() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("update.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void captain() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("captain.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void coach() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("coach.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t1() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t1.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t2() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t2.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t3() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t3.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t4() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t4.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t5() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t5.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t6() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t6.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t7() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t7.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t8() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t8.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t9() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t9.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void t10() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("t10.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m1() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m1.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m2() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m2.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m3() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m3.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m4() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m4.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m5() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m5.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m6() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m6.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m7() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m7.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m8() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m8.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m9() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m9.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}
void m10() {
	RenderWindow window(VideoMode(800, 750), "SFML works!");

	RectangleShape sound_Button(Vector2f(800.0f, 750.0f));
	sound_Button.setPosition(10.0, 20.0);
	Texture sound_ButtonTexture;
	sound_ButtonTexture.loadFromFile("m10.png");
	sound_Button.setTexture(&sound_ButtonTexture);

	while (window.isOpen())
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}

		window.clear();

		window.draw(sound_Button);

		window.display();
	}
}

