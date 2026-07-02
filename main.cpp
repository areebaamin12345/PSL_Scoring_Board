#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;
using std::cout;
using std::cin;

int main()
{
	system("title ............P A K I S T A N S U P R E M E L E A G U E............");

	////////// FOR ENTERING BOTH TEAMS //////////
	int team1;
	int team2;

	////////// FOR TOSS: BATTING AND BALLING //////////
	char teamtoss;
	char flip;
	char toss;
	int coin;
	int coin2;
	char batball = 'z';

	////////// FOR CONTROLING THE GAME ///////////
	int opener = 0;
	int baller = 0;
	int over = 6;
	int run;
	int total = 0;
	int total2 = 0;
	int playerout = 0;
	int playerout2 = 0;
	int playerout3 = 0;
	int playerout4 = 0;
	int out;
	string x;
	string y;
	string k;
	string o;
	string i;
	string j;
	int out2;
	int numOver = 0;
	int runOver = 0;
	int extras = 0;
	int freeHitOut;
	int c = 1;
	int a = 0;
	int d = 0;
	int b = 1;
	int runBall[6];
	char wideNoball;
	int freehit;

	////////// FOR PLAYERS ON PITCH AND THEIR SWAPPING //////////
	int p1 = 1, p2 = 2;
	int num = 2; //used in loop; changing the player when he is out
	int bating = 1;
	int batsman1Run = 0;
	int batsman2Run = 0;
	int secondBatsman1Run = 0;
	int secondBatsman2Run = 0;
	int century = 0;
	int halfCentury = 0;

	string teams[12][6] = { {"Quetta Gladiators","Islamabad United","Lahore Qalandars","Karachi Kings","Peshawar Zalmi","Multan Sultan"},
							 {"Jason Roy","Rahmanullah Gurbaz","Fakhar Zaman","Joe Clarke","Hazratullah Zazai","Shan Masood"},
							 {"WIll Smeed","Alex Hales","Abdullah Shafique","Babar Azam","Kamran Akmal","Muhammad Rizwan"},
							 {"James Vince","Shadab Khan","Kamran Ghulam","Sharjeel Khan","Haider Ali","Sohaib Maqsoud"},
							 {"Umar Akmal","Asif Ali","Muhammad Hafeez","Qasim Akram","Shoaib Malik","Tim David"},
							 {"Iftikhar Ahmed","Muhammad Akhlaq","Harrry Brook","Rohail Nazir","Sherfane Rutherford","Rilee Rossow"},
							 {"Hassan Khan","azam Khan","Samit Patel","Imad Wasim","Ben Cutting","Khushdil Shah"},
							 {"Naseem Shah","Liam Dawson","Phil Salt","Lewis Gregory","Wahab Riaz","Imran Tahir"},
							 {"Muhammad Irfan","Faheem Ashraf","David Wiese","Tom Lammonby","Usman Qadir","Abbas Afridi"},
							 {"Khurram Shahzad","Hassan Ali","Shaheen Afridi","Umaid Asif","Muhammad Umar","Shahnawaz Dahani"},
							 {"Ashir Qureshi","Muhammad Wasim","Haris Rauf","Usman Shinwari","Saqib Mahmood","Blessing Muzarabani"},
							 {"sarfaraz Ahmed","Zeeshan Zamir","Zaman Khan","Mir Hamza","Salman Irshad","Anwar Ali"} };

	/////////////////////////////////////////////////////////////////////
	////////////////// FOR CHOSING BOTH TEAMS ///////////////////////
	/////////////////////////////////////////////////////////////////////
	cout << "\t\t\t\t\tPAKISTAN SUPREME LEAGUE PSL BOARD\n"
		<< "0 for Quetta Gladiator\n"
		<< "1 for Islamabad United\n"
		<< "2 for Lahore Qalandars\n"
		<< "3 for Karachi Kings\n"
		<< "4 for Peshawar Zalmi\n"
		<< "5 for Multan Sultan\n\n"
		<< "Enter the 1st team: ";
	cin >> team1;
	cout << "Enter the 2nd team: ";
	cin >> team2;
	system("cls");

	/////////////////////////////////////////////////////////////
	/////////////// FOR TOSS... HEAD OR TAIL ///////////////
	////////////////////////////////////////////////////////////
	cout << "It's Toss time....\n"
		<< "Which team calls the toss: " << endl
		<< "A. " << teams[0][team1] << "\nB. " << teams[0][team2] << endl;

	x = teams[0][team1];
	y = teams[0][team2];

	ofstream names;
	names.open("matchrec2.txt");
	names << x << " vs " << y;
	names.close();

	cin >> teamtoss;

	//////////////////////////////////////////////////////////////
	////////////// FOR TEAM 'A' CALLING FOR TOSS ////////////
	//////////////////////////////////////////////////////////////
	if (teamtoss == 'A' || teamtoss == 'a')
	{
		cout << teams[0][team1] << " is calling for toss: "
			<< "Head or Tail\n";
		names.open("matchrec2.txt", ios_base::app);
		names << "\n" << x << " is calling for toss ";
		names.close();
		cout << "H. heads\nT. tails: ";
		cin >> toss;

		if (toss == 'H' || toss == 'h')
		{
			toss = 'h';
		}
		if (toss == 'T' || toss == 't')
		{
			toss = 't';
		}

		////////////////////////////////////////////////////////////
		//////////////// RANDOM TOSS BY EMPIRE /////////////////
		////////////////////////////////////////////////////////////
		cout << "Empire is tossing...\n"
			<< "Head or Tail: ";
		srand(time(0));
		coin = (1 + rand() % 2);

		if (coin == 1)
		{
			flip = 'h';
			cout << "Head\n";
		}
		else if (coin == 2)
		{
			flip = 't';
			cout << "Tail\n";
		}

		/////////////////////////////////////////////////////////////
		//////////// FOR TEAM 'A' WINNING THE TOSS //////////////
		/////////////////////////////////////////////////////////////
		if (flip == toss)
		{
			Sleep(2000);
			system("cls");
			cout << teams[0][team1] << " won the toss.\n";
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << x << " won the toss";
			names.close();
			cout << "Now choose for batting and balling\n";
			cout << "A. Batting\n";
			cout << "B. Bowling\n";
			cin >> batball;

			if (batball == 'a' || batball == 'A')
			{
				cout << teams[0][team1] << " choose batting\n";
				opener = team1;
				baller = team2;
				names.open("matchrec2.txt", ios_base::app);
				names << "\n" << x << " choosed batting ";
				names.close();
			}
			if (batball == 'B' || batball == 'b')
			{
				cout << teams[0][team1] << " choose balling\n";
				opener = team2;
				baller = team1;
				names.open("matchrec2.txt", ios_base::app);
				names << "\n" << x << " choosed bowling ";
				names.close();
			}
		}
		///////////////////////////////////////////////////////////////
		////////////// FOR TEAM 'A' LOSING THE TOSS ///////////////
		///////////////////////////////////////////////////////////////
		else //if(flip =! toss)
		{
			Sleep(2000);
			system("cls");
			cout << teams[0][team1] << " loss the toss.\n"
				<< teams[0][team2] << " will choose for batting or balling\n"
				<< "A. Batting\n"
				<< "B. Bowling\n";
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << x << " lost the toss ";
			names.close();
			cin >> batball;

			if (batball == 'a' || batball == 'A')
			{
				cout << teams[0][team2] << " choose batting\n";
				opener = team2;
				baller = team1;
				names.open("matchrec2.txt", ios_base::app);
				names << "\n" << y << " choosed batting ";
				names.close();
			}
			if (batball == 'B' || batball == 'b')
			{
				cout << teams[0][team2] << " choose balling\n";
				opener = team1;
				baller = team2;
				names.open("matchrec2.txt", ios_base::app);
				names << "\n" << y << " choosed bowling ";
				names.close();
			}
		}
	}

	///////////////////////////////////////////////////////////////
	///////////// FOR TEAM B CALLING FOR TOSS /////////////////
	///////////////////////////////////////////////////////////////
	if (teamtoss == 'B' || teamtoss == 'b')
	{
		cout << teams[0][team2] << " is calling for toss: "
			<< "Head or Tail\n";
		cout << "H. heads\nT. tails: ";
		names.open("matchrec2.txt", ios_base::app);
		names << "\n" << y << " is calling for toss ";
		names.close();
		cin >> toss;

		if (toss == 'H' || toss == 'h')
		{
			toss = 'h';
		}
		else if (toss == 'T' || toss == 't')
		{
			toss = 't';
		}

		/////////////////////////////////////////////////////////////
		////////////// FOR RANDOM TOSS BY EMPIRE ////////////////
		/////////////////////////////////////////////////////////////
		cout << "Empire is tossing...\n"
			<< "Head or Tail: ";
		srand(time(0));
		coin2 = (1 + rand() % 2);

		if (coin2 == 1)
		{
			flip = 'h';
			cout << "Head\n";
		}
		else if (coin2 == 2)
		{
			flip = 't';
			cout << "Tail\n";
		}

		//////////////////////////////////////////////////////////////
		//////////// FOR TEAM 'B' WINNING THE TOSS ///////////////
		//////////////////////////////////////////////////////////////
		if (flip == toss)
		{
			Sleep(2000);
			system("cls");
			cout << teams[0][team2] << " won the toss.\n"
				<< "Now choose for batting and bowling\n"
				<< "A. Batting\n"
				<< "B. Bowling\n";
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << y << " won the toss ";
			names.close();
			cin >> batball;

			if (batball == 'a' || batball == 'A')
			{
				system("cls");
				cout << teams[0][team2] << " choose batting\n";
				opener = team2;
				baller = team1;
				names.open("matchrec2.txt", ios_base::app);
				names << "/n" << y << " choosed batting ";
				names.close();
			}
			if (batball == 'b' || batball == 'B')
			{
				system("cls");
				cout << teams[0][team2] << " choose bowling\n";
				opener = team1;
				baller = team2;
				names.open("matchrec2.txt", ios_base::app);
				names << "/n" << y << " choosed bowling ";
				names.close();
			}
		}
		/////////////////////////////////////////////////////////////////
		///////////// FOR TEAM 'B' LOSING THE TOSS //////////////////
		/////////////////////////////////////////////////////////////////
		else
		{
			Sleep(2000);
			system("cls");
			cout << teams[0][team2] << " loss the toss.\n"
				<< teams[0][team1] << " will choose for batting or balling\n"
				<< "A. Batting\n"
				<< "B. Bowling\n";
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << y << " lost the toss ";
			names.close();
			cin >> batball;

			if (batball == 'a' || batball == 'A')
			{
				system("cls");
				cout << teams[0][team1] << " choose batting\n";
				opener = team1;
				baller = team2;
				names.open("matchrec2.txt", ios_base::app);
				names << "\n" << x << " choosed batting ";
				names.close();
			}
			if (batball == 'B' || batball == 'b')
			{
				system("cls");
				cout << teams[0][team1] << " choose bowling\n";
				opener = team2;
				baller = team1;
				names.open("matchrec2.txt", ios_base::app);
				names << "\n" << x << " choosed bowling ";
				names.close();
			}
		}
	}

	////////////////////////////////////////////////////////////////
	///////////////////// THE MATCH CODE ///////////////////////
	////////////////////////////////////////////////////////////////
	Sleep(2000);
	system("cls");

	if (batball == 'A' || batball == 'a')
	{
		/////////////////////////////////////////////////////////////////
		/////////////// WHEN THE TEAM CHOOSE TO BAT //////////////////
		/////////////////////////////////////////////////////////////////
		cout << "Number of overs: ";
		cin >> numOver;
		names.open("matchrec2.txt", ios_base::app);
		names << "\n" << " Numbers of over :" << numOver;
		names.close();

		///////////////////////////////////////////////////////////////////////
		///////////////////// LOOP FOR TOTAL OVERS ////////////////////////
		///////////////////////////////////////////////////////////////////////
		for (int i = 1; i <= numOver; i++)
		{
			if (playerout >= 9)
			{
				break;
			}

			cout << "\t\t\t\t\tPAKISTAN SUPREME LEAGUE PSL BOARD\n"
				<< "\t\t\t\t " << teams[0][team1] << " VS " << teams[0][team2] << "\n\n"
				<< numOver << " Overs\n";

			///////////////////////////////////////////////////////////////////////
			/////////////////////// FOR EVERY SINGLE OVER //////////////////////
			///////////////////////////////////////////////////////////////////////
			for (int j = 1; j <= 6; j++)
			{
				if (playerout >= 9)
				{
					cout << "All out";
					break;
				}

				cout << "Batsman: " << teams[p1][opener] << " and " << teams[p2][opener] << endl
					<< "\t\t" << teams[p1][opener] << ": " << batsman1Run << endl
					<< "\t\t" << teams[p2][opener] << ": " << batsman2Run << endl;

				if (bating == 1)
					cout << "Bating: " << teams[p1][opener] << endl;
				else if (bating == 2)
					cout << "Bating: " << teams[p2][opener] << endl;

				cout << "\n\tOver." << i << "\tRuns:" << total << "\tExtras:" << extras
					<< "\nBall." << j << ": \n"
					<< "Player is out ?\n"
					<< "Press 1 for yes: ";
				names.open("matchrec2.txt", ios_base::app);
				names << "\n" << "Over." << i << "\n" << "Ball." << j << "=";
				names.close();

				///////////////////////////////////////////////////////////////////////
				////////////////////// WHEN PLAYER IS OUT /////////////////////////
				/////////////////////////////////////////////////////////////////////
				cin >> out;
				if (out == 1)
				{
					names.open("matchrec2.txt", ios_base::app);
					names << "OUT! " << teams[p1][opener] << " made " << batsman1Run;
					names.close();

					srand(time(0));
					out2 = (1 + rand() % 4);

					if (out2 == 1)
						cout << "Player is bold..." << endl;
					else if (out2 == 2)
						cout << "Player is LBW..." << endl;
					else if (out2 == 3)
						cout << "Player is run out..." << endl;
					else if (out2 == 4)
						cout << "Player is catch out..." << endl;

					/*if (freeHitOut == 1)
					{
						cout << "NO player is out because it is free hit...\n";
					}
					*/

					if (bating == 1)
					{
						playerout++;
						batsman1Run = 0;
						for (int a = 1; a < 11; a++)
						{
							if (p1 < p2)
							{
								teams[p1][opener] = teams[++p1][opener];
							}
							else if (p1 >= p2)
							{
								teams[p1][opener] = teams[++p1][opener];
								break;
							}
						}
					}
					else if (bating == 2)
					{
						playerout++;
						batsman2Run = 0;
						for (int z = 1; z < 11; z++)
						{
							if (p2 < p1)
							{
								teams[p2][opener] = teams[++p2][opener];
							}
							else if (p2 >= p1)
							{
								teams[p2][opener] = teams[++p2][opener];
								break;
							}
						}
					}
				}
				/////////////////////////////// PURPOSE END //////////////////////////////////////
				else if (out != 1)
				{
					cout << "Wide or No ball?\n"
						<< "W for wide AND N for no ball: ";
					cin >> wideNoball;

					if (wideNoball == 'w' || wideNoball == 'W')
					{
						cout << "Wide Ball..." << endl;
						j--;
						total++;
						extras++;
						names.open("matchrec2.txt", ios_base::app);
						names << "wide ball";
						names.close();
						continue;
					}
					else if (wideNoball == 'n' || wideNoball == 'N')
					{
						j--;
						total++;
						extras++;
						cout << "Press 1 for free hit: " << endl;
						cin >> freehit;
						names.open("matchrec2.txt", ios_base::app);
						names << " NOBOWL...";
						names.close();

						if (freehit == 1)
						{
							cout << "\t\t\tFREE HIT !!! ---> DONT PRESS 1 FOR OUT\n";
							freeHitOut = 1;
							names.open("matchrec2.txt", ios_base::app);
							names << "FREEHIT!!";
							names.close();
							continue;
						}
						continue;
					}

					cout << "Run(s): ";
					cin >> run;
					names.open("matchrec2.txt", ios_base::app);
					names << run;
					names.close();

					for (int d = 0; d < 6; d++)
					{
						if (b > j)
							b--;
						else if (b < j)
							b++;
					}

					while (b == j)
					{
						runBall[d] = run;
						d++;
						b++;
					}

					total = total + run;
					cout << "Runs: " << total << endl;
					system("cls");

					///////////////////////////////////////////////////////////////////////////////////////
					///////// FOR COUNTING PLAYERS' RUN & TELLING FOR HALF CENTURY OR CENTURY /////////
					///////////////////////////////////////////////////////////////////////////////////////
					if (bating == 1)
					{
						batsman1Run = batsman1Run + run;
						//cout << "Run of " << teams[p1][opener] << ": " << batsman1Run << endl;
						if (batsman1Run >= 50)
						{
							cout << teams[p1][opener] << "has completed half century\n";
							halfCentury++;
						}
						else if (batsman1Run >= 100)
						{
							cout << teams[p1][opener] << "has compeleted his century\n";
							century++;
						}
						/*if (out == 1)
						{
							batsman1Run = 0;
						}*/
					}
					else if (bating == 2)
					{
						batsman2Run = batsman2Run + run;
						//cout << "Run of " << teams[p2][opener] << ": " << batsman2Run << endl;
						if (batsman2Run >= 50)
						{
							cout << teams[p2][opener] << " has completed his half century\n";
							halfCentury++;
						}
						else if (batsman2Run >= 100)
						{
							cout << teams[p2][opener] << "has completed his century\n";
							century++;
						}
						/*if (out == 1)
						{
							batsman2Run = 0;
						}*/
					}

					////////////////////////////////////////////////////////////////////////////////
					//////////////// FOR SWAPPING THE PLAYERS WHEN RUN IS ODD //////////////////
					////////////////////////////////////////////////////////////////////////////////
					if (run % 2 != 0)
					{
						if (bating == 1)
						{
							bating = 2;
						}
						else if (bating == 2)
						{
							bating = 1;
						}
					}
				}

				if (j == 6)
				{
					if (bating == 1)
						bating = 2;
					else if (bating == 2)
						bating = 1;

					cout << " Runs in this Over: " << total << endl;
					names.open("matchrec2.txt", ios_base::app);
					names << "\n" << " RUNS IN " << i << " over = " << total;
					names.close();
					Sleep(3000);
					system("cls");
				}
			}

			for (a = 0; a < 6; a++)
			{
				cout << c << ". ball: " << runBall[a] << endl;
				c++;
			}
			//cout << "Runs in this Over: ";
			/*/while (a < 6)
			{
				cout << c << ". ball: " << runBall[a] << endl;
				a = a + 1;
				c++;
			}*/

			if (num > 9)
			{
				break;
				cout << "All out..." << endl;
			}
		}

		cout << teams[0][opener] << " has make " << total << " runs" << endl;
		names.open("matchrec2.txt", ios_base::app);
		names << "\n" << teams[0][opener] << " made " << total << "runs";
		names.close();
		total++;
		cout << teams[0][baller] << " needs " << total << " runs to win ";
		names.open("matchrec2.txt", ios_base::app);
		names << "\n" << teams[0][baller] << " needs " << total << " runs to win";
		names.close();

		//////////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////// FOR SECOND ENNING ////////////////////////////////
		//////////////////////////////////////////////////////////////////////////////////////
		if (baller == team1)
		{
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << " Numbers of over :" << numOver;
			names.close();

			///////////////////////////////////////////////////////////////////////
			///////////////////// LOOP FOR TOTAL OVERS ////////////////////////
			///////////////////////////////////////////////////////////////////////
			for (int i = 1; i <= numOver; i++)
			{
				if (playerout2 >= 9)
				{
					break;
				}

				cout << "\t\t\t\t\tPAKISTAN SUPREME LEAGUE PSL BOARD\n"
					<< "////////////////////////// SECOND INNING /////////////////////////////: \n"
					<< "\t\t\t\t " << teams[0][team1] << " VS " << teams[0][team2] << "\n\n"
					<< numOver << " Overs\n";

				///////////////////////////////////////////////////////////////////////
				/////////////////////// FOR EVERY SINGLE OVER //////////////////////
				///////////////////////////////////////////////////////////////////////
				for (int j = 1; j <= 6; j++)
				{
					if (playerout2 >= 9)
					{
						cout << "All out...\n"
							<< "Lose the game...";
						break;
					}

					cout << "Batsman: " << teams[p1][baller] << " and " << teams[p2][baller] << endl
						<< "\t\t" << teams[p1][baller] << ": " << batsman1Run << endl
						<< "\t\t" << teams[p2][baller] << ": " << batsman2Run << endl;

					if (bating == 1)
						cout << "Bating: " << teams[p1][baller] << endl;
					else if (bating == 2)
						cout << "Bating: " << teams[p2][baller] << endl;

					cout << "\n\tOver." << i << "\tRuns:" << total << "\tExtras:" << extras
						<< "\nBall." << j << ": \n"
						<< "Player is out ?\n"
						<< "Press 1 for yes: ";
					names.open("matchrec2.txt", ios_base::app);
					names << "\n" << "Over." << i << "\n" << "Ball." << j << "=";
					names.close();

					///////////////////////////////////////////////////////////////////////
					////////////////////// WHEN PLAYER IS OUT /////////////////////////
					/////////////////////////////////////////////////////////////////////
					cin >> out;
					if (out == 1)
					{
						names.open("matchrec2.txt", ios_base::app);
						names << "OUT! " << teams[p1][baller] << " made " << secondBatsman1Run;
						names.close();

						srand(time(0));
						out2 = (1 + rand() % 4);

						if (out2 == 1)
							cout << "Player is bold..." << endl;
						else if (out2 == 2)
							cout << "Player is LBW..." << endl;
						else if (out2 == 3)
							cout << "Player is run out..." << endl;
						else if (out2 == 4)
							cout << "Player is catch out..." << endl;

						/*if (freeHitOut == 1)
						{
							cout << "NO player is out because it is free hit...\n";
						}
						*/

						if (bating == 1)
						{
							playerout2++;
							secondBatsman1Run = 0;
							for (int a = 1; a < 11; a++)
							{
								if (p1 < p2)
								{
									teams[p1][baller] = teams[++p1][baller];
								}
								else if (p1 >= p2)
								{
									teams[p1][baller] = teams[++p1][baller];
									break;
								}
							}
						}
						else if (bating == 2)
						{
							playerout2++;
							secondBatsman2Run = 0;
							for (int z = 1; z < 11; z++)
							{
								if (p2 < p1)
								{
									teams[p2][baller] = teams[++p2][baller];
								}
								else if (p2 >= p1)
								{
									teams[p2][baller] = teams[++p2][baller];
									break;
								}
							}
						}
					}
					/////////////////////////////// PURPOSE END //////////////////////////////////////
					else if (out != 1)
					{
						cout << "Wide or No ball?\n"
							<< "W for wide AND N for no ball: ";
						cin >> wideNoball;

						if (wideNoball == 'w' || wideNoball == 'W')
						{
							cout << "Wide Ball..." << endl;
							j--;
							total++;
							extras++;
							names.open("matchrec2.txt", ios_base::app);
							names << "wide ball";
							names.close();
							continue;
						}
						else if (wideNoball == 'n' || wideNoball == 'N')
						{
							j--;
							total++;
							extras++;
							cout << "Press 1 for free hit: " << endl;
							cin >> freehit;
							names.open("matchrec2.txt", ios_base::app);
							names << " NOBOWL...";
							names.close();

							if (freehit == 1)
							{
								cout << "\t\t\tFREE HIT !!! ---> DONT PRESS 1 FOR OUT\n";
								freeHitOut = 1;
								names.open("matchrec2.txt", ios_base::app);
								names << "FREEHIT!!";
								names.close();
								continue;
							}
							continue;
						}

						cout << "Run(s): ";
						cin >> run;
						names.open("matchrec2.txt", ios_base::app);
						names << run;
						names.close();

						for (int d = 0; d < 6; d++)
						{
							if (b > j)
								b--;
							else if (b < j)
								b++;
						}

						while (b == j)
						{
							runBall[d] = run;
							d++;
							b++;
						}

						total2 = total2 + run;
						cout << "Runs: " << total2 << endl;
						system("cls");

						///////////////////////////////////////////////////////////////////////////////////////
						///////// FOR COUNTING PLAYERS' RUN & TELLING FOR HALF CENTURY OR CENTURY /////////
						///////////////////////////////////////////////////////////////////////////////////////
						if (bating == 1)
						{
							secondBatsman1Run = secondBatsman1Run + run;
							//cout << "Run of " << teams[p1][opener] << ": " << batsman1Run << endl;
							if (secondBatsman1Run >= 50)
							{
								cout << teams[p1][baller] << "has completed half century\n";
								halfCentury++;
							}
							else if (secondBatsman1Run >= 100)
							{
								cout << teams[p1][baller] << "has compeleted his century\n";
								century++;
							}
							/*if (out == 1)
							{
								batsman1Run = 0;
							}*/
						}
						else if (bating == 2)
						{
							secondBatsman2Run = secondBatsman2Run + run;
							//cout << "Run of " << teams[p2][opener] << ": " << batsman2Run << endl;
							if (secondBatsman2Run >= 50)
							{
								cout << teams[p2][baller] << " has completed his half century\n";
								halfCentury++;
							}
							else if (secondBatsman2Run >= 100)
							{
								cout << teams[p2][baller] << "has completed his century\n";
								century++;
							}
							/*if (out == 1)
							{
								batsman2Run = 0;
							}*/
						}

						////////////////////////////////////////////////////////////////////////////////
						//////////////// FOR SWAPPING THE PLAYERS WHEN RUN IS ODD //////////////////
						////////////////////////////////////////////////////////////////////////////////
						if (run % 2 != 0)
						{
							if (bating == 1)
							{
								bating = 2;
							}
							else if (bating == 2)
							{
								bating = 1;
							}
						}
					}

					if (j == 6)
					{
						if (bating == 1)
							bating = 2;
						else if (bating == 2)
							bating = 1;

						cout << " Runs in this Over: " << total2 << endl;
						names.open("matchrec2.txt", ios_base::app);
						names << "\n" << " RUNS IN " << i << " over = " << total2;
						names.close();
						Sleep(3000);
						system("cls");
					}
				}

				for (a = 0; a < 6; a++)
				{
					cout << c << ". ball: " << runBall[a] << endl;
					c++;
				}
				//cout << "Runs in this Over: ";
				/*/while (a < 6)
				{
					cout << c << ". ball: " << runBall[a] << endl;
					a = a + 1;
					c++;
				}*/

				if (num > 9)
				{
					break;
					cout << "All out..." << endl;
				}
			}

			cout << teams[0][opener] << " has make " << total2 << " runs" << endl;
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << teams[0][opener] << " made " << total2 << "runs";
			names.close();
			total2++;
			cout << teams[0][baller] << " needs " << total2 << " runs to win ";
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << teams[0][baller] << " needs " << total2 << " runs to win";
			names.close();
		}
	}

	//////////////////////////////////////////////////////////////////////////////////////
	///////////////////////// WHEN THE TEAM CHOOSE TO BALL ///////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////
	Sleep(2000);
	system("cls");

	if (batball == 'B' || batball == 'b')
	{
		/////////////////////////////////////////////////////////////////
		/////////////// WHEN THE TEAM CHOOSE TO bowl //////////////////
		/////////////////////////////////////////////////////////////////
		cout << "Number of overs: ";
		cin >> numOver;
		names.open("matchrec2.txt", ios_base::app);
		names << "\n" << " Numbers of over :" << numOver;
		names.close();

		///////////////////////////////////////////////////////////////////////
		///////////////////// LOOP FOR TOTAL OVERS ////////////////////////
		///////////////////////////////////////////////////////////////////////
		for (int i = 1; i <= numOver; i++)
		{
			if (playerout3 >= 9)
			{
				break;
			}

			cout << "\t\t\t\t\tPAKISTAN SUPREME LEAGUE PSL BOARD\n"
				<< "\t\t\t\t " << teams[0][team1] << " VS " << teams[0][team2] << "\n\n"
				<< numOver << " Overs\n";

			///////////////////////////////////////////////////////////////////////
			/////////////////////// FOR EVERY SINGLE OVER //////////////////////
			///////////////////////////////////////////////////////////////////////
			for (int j = 1; j <= 6; j++)
			{
				if (playerout3 >= 9)
				{
					cout << "All out...";
					break;
				}

				cout << "Batsman: " << teams[p1][opener] << " and " << teams[p2][opener] << endl
					<< "\t\t" << teams[p1][opener] << ": " << batsman1Run << endl
					<< "\t\t" << teams[p2][opener] << ": " << batsman2Run << endl;

				if (bating == 1)
					cout << "Bating: " << teams[p1][opener] << endl;
				else if (bating == 2)
					cout << "Bating: " << teams[p2][opener] << endl;

				cout << "\n\tOver." << i << "\tRuns:" << total << "\tExtras:" << extras
					<< "\nBall." << j << ": \n"
					<< "Player is out ?\n"
					<< "Press 1 for yes: ";
				names.open("matchrec2.txt", ios_base::app);
				names << "\n" << "Over." << i << "\n" << "Ball." << j << "=";
				names.close();

				///////////////////////////////////////////////////////////////////////
				////////////////////// WHEN PLAYER IS OUT /////////////////////////
				/////////////////////////////////////////////////////////////////////
				cin >> out;
				if (out == 1)
				{
					names.open("matchrec2.txt", ios_base::app);
					names << "OUT! " << teams[p1][opener] << " made " << batsman1Run;
					names.close();

					srand(time(0));
					out2 = (1 + rand() % 4);

					if (out2 == 1)
						cout << "Player is bold..." << endl;
					else if (out2 == 2)
						cout << "Player is LBW..." << endl;
					else if (out2 == 3)
						cout << "Player is run out..." << endl;
					else if (out2 == 4)
						cout << "Player is catch out..." << endl;

					/*if (freeHitOut == 1)
					{
						cout << "NO player is out because it is free hit...\n";
					}
					*/

					if (bating == 1)
					{
						playerout3++;
						batsman1Run = 0;
						for (int a = 1; a < 11; a++)
						{
							if (p1 < p2)
							{
								teams[p1][opener] = teams[++p1][opener];
							}
							else if (p1 >= p2)
							{
								teams[p1][opener] = teams[++p1][opener];
								break;
							}
						}
					}
					else if (bating == 2)
					{
						playerout3++;
						batsman2Run = 0;
						for (int z = 1; z < 11; z++)
						{
							if (p2 < p1)
							{
								teams[p2][opener] = teams[++p2][opener];
							}
							else if (p2 >= p1)
							{
								teams[p2][opener] = teams[++p2][opener];
								break;
							}
						}
					}
				}
				/////////////////////////////// PURPOSE END //////////////////////////////////////
				else if (out != 1)
				{
					cout << "Wide or No ball?\n"
						<< "W for wide AND N for no ball: ";
					cin >> wideNoball;

					if (wideNoball == 'w' || wideNoball == 'W')
					{
						cout << "Wide Ball..." << endl;
						j--;
						total++;
						extras++;
						names.open("matchrec2.txt", ios_base::app);
						names << "wide ball";
						names.close();
						continue;
					}
					else if (wideNoball == 'n' || wideNoball == 'N')
					{
						j--;
						total++;
						extras++;
						cout << "Press 1 for free hit: " << endl;
						cin >> freehit;
						names.open("matchrec2.txt", ios_base::app);
						names << " NOBOWL...";
						names.close();

						if (freehit == 1)
						{
							cout << "\t\t\tFREE HIT !!! ---> DONT PRESS 1 FOR OUT\n";
							freeHitOut = 1;
							names.open("matchrec2.txt", ios_base::app);
							names << "FREEHIT!!";
							names.close();
							continue;
						}
						continue;
					}

					cout << "Run(s): ";
					cin >> run;
					names.open("matchrec2.txt", ios_base::app);
					names << run;
					names.close();

					for (int d = 0; d < 6; d++)
					{
						if (b > j) //not understaND
							b--;
						else if (b < j)
							b++;
					}

					while (b == j)
					{
						runBall[d] = run;
						d++;
						b++;
					}

					total = total + run;
					cout << "Runs: " << total << endl;
					system("cls");

					///////////////////////////////////////////////////////////////////////////////////////
					///////// FOR COUNTING PLAYERS' RUN & TELLING FOR HALF CENTURY OR CENTURY /////////
					///////////////////////////////////////////////////////////////////////////////////////
					if (bating == 1)
					{
						batsman1Run = batsman1Run + run;
						//cout << "Run of " << teams[p1][opener] << ": " << batsman1Run << endl;
						if (batsman1Run >= 50)
						{
							cout << teams[p1][opener] << "has completed half century\n";
							halfCentury++;
						}
						else if (batsman1Run >= 100)
						{
							cout << teams[p1][opener] << "has compeleted his century\n";
							century++;
						}
						if (out == 1)
						{
							batsman1Run = 0;
						}
					}
					else if (bating == 2)
					{
						batsman2Run = batsman2Run + run;
						//cout << "Run of " << teams[p2][opener] << ": " << batsman2Run << endl;
						if (batsman2Run >= 50)
						{
							cout << teams[p2][opener] << " has completed his half century\n";
							halfCentury++;
						}
						else if (batsman2Run >= 100)
						{
							cout << teams[p2][opener] << "has completed his century\n";
							century++;
						}
						if (out == 1)
						{
							batsman2Run = 0;
						}
					}

					////////////////////////////////////////////////////////////////////////////////
					//////////////// FOR SWAPPING THE PLAYERS WHEN RUN IS ODD //////////////////
					////////////////////////////////////////////////////////////////////////////////
					if (run % 2 != 0)
					{
						if (bating == 1)
						{
							bating = 2;
						}
						else if (bating == 2)
						{
							bating = 1;
						}
					}
				}

				if (j == 6)
				{
					if (bating == 1)
						bating = 2;
					else if (bating == 2)
						bating = 1;

					cout << " Runs in this Over: " << total << endl;
					names.open("matchrec2.txt", ios_base::app);
					names << "\n" << " RUNS IN " << i << " over = " << total;
					names.close();
					Sleep(3000);
					system("cls");
				}
			}

			for (a = 0; a < 6; a++)
			{
				cout << c << ". ball: " << runBall[a] << endl;
				c++;
			}
			//cout << "Runs in this Over: ";
			/*/while (a < 6)
			{
				cout << c << ". ball: " << runBall[a] << endl;
				a = a + 1;
				c++;
			}*/

			if (num > 9)
			{
				break;
				cout << "All out..." << endl;
			}
		}

		cout << teams[0][opener] << " has make " << total << " runs" << endl;
		names.open("matchrec2.txt", ios_base::app);
		names << "\n" << teams[0][opener] << " made " << total << "runs";
		names.close();
		total++;
		cout << teams[0][baller] << " needs " << total << " runs to win ";
		names.open("matchrec2.txt", ios_base::app);
		names << "\n" << teams[0][baller] << " needs " << total << " runs to win ";
		names.close();

		///////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////// SECOND INNING ///////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////
		if (baller == team1)
		{
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << " Numbers of over :" << numOver;
			names.close();

			///////////////////////////////////////////////////////////////////////
			///////////////////// LOOP FOR TOTAL OVERS ////////////////////////
			///////////////////////////////////////////////////////////////////////
			for (int i = 1; i <= numOver; i++)
			{
				if (playerout4 >= 9)
				{
					break;
				}

				cout << "\t\t\t\t\tPAKISTAN SUPREME LEAGUE PSL BOARD\n"
					<< "////////////////////////// SECOND INNING /////////////////////////////: \n"
					<< "\t\t\t\t " << teams[0][team1] << " VS " << teams[0][team2] << "\n\n"
					<< numOver << " Overs\n";

				///////////////////////////////////////////////////////////////////////
				/////////////////////// FOR EVERY SINGLE OVER //////////////////////
				///////////////////////////////////////////////////////////////////////
				for (int j = 1; j <= 6; j++)
				{
					if (playerout4 >= 9)
					{
						cout << "All out...\n"
							<< "Lose the game...";
						break;
					}

					cout << "Batsman: " << teams[p1][baller] << " and " << teams[p2][baller] << endl
						<< "\t\t" << teams[p1][baller] << ": " << batsman1Run << endl
						<< "\t\t" << teams[p2][baller] << ": " << batsman2Run << endl;

					if (bating == 1)
						cout << "Bating: " << teams[p1][baller] << endl;
					else if (bating == 2)
						cout << "Bating: " << teams[p2][baller] << endl;

					cout << "\n\tOver." << i << "\tRuns:" << total << "\tExtras:" << extras
						<< "\nBall." << j << ": \n"
						<< "Player is out ?\n"
						<< "Press 1 for yes: ";
					names.open("matchrec2.txt", ios_base::app);
					names << "\n" << "Over." << i << "\n" << "Ball." << j << "=";
					names.close();

					///////////////////////////////////////////////////////////////////////
					////////////////////// WHEN PLAYER IS OUT /////////////////////////
					/////////////////////////////////////////////////////////////////////
					cin >> out;
					if (out == 1)
					{
						names.open("matchrec2.txt", ios_base::app);
						names << "OUT! " << teams[p1][baller] << " made " << secondBatsman1Run;
						names.close();

						srand(time(0));
						out2 = (1 + rand() % 4);

						if (out2 == 1)
							cout << "Player is bold..." << endl;
						else if (out2 == 2)
							cout << "Player is LBW..." << endl;
						else if (out2 == 3)
							cout << "Player is run out..." << endl;
						else if (out2 == 4)
							cout << "Player is catch out..." << endl;

						/*if (freeHitOut == 1)
						{
							cout << "NO player is out because it is free hit...\n";
						}
						*/

						if (bating == 1)
						{
							playerout4++;
							secondBatsman1Run = 0;
							playerout++;
							for (int a = 1; a < 11; a++)
							{
								if (p1 < p2)
								{
									teams[p1][baller] = teams[++p1][baller];
								}
								else if (p1 >= p2)
								{
									teams[p1][baller] = teams[++p1][baller];
									break;
								}
							}
						}
						else if (bating == 2)
						{
							playerout4++;
							secondBatsman2Run = 0;
							playerout++;
							for (int z = 1; z < 11; z++)
							{
								if (p2 < p1)
								{
									teams[p2][baller] = teams[++p2][baller];
								}
								else if (p2 >= p1)
								{
									teams[p2][baller] = teams[++p2][baller];
									break;
								}
							}
						}
					}
					/////////////////////////////// PURPOSE END //////////////////////////////////////
					else if (out != 1)
					{
						cout << "Wide or No ball?\n"
							<< "W for wide AND N for no ball: ";
						cin >> wideNoball;

						if (wideNoball == 'w' || wideNoball == 'W')
						{
							cout << "Wide Ball..." << endl;
							j--;
							total++;
							extras++;
							names.open("matchrec2.txt", ios_base::app);
							names << "wide ball";
							names.close();
							continue;
						}
						else if (wideNoball == 'n' || wideNoball == 'N')
						{
							j--;
							total++;
							extras++;
							cout << "Press 1 for free hit: " << endl;
							cin >> freehit;
							names.open("matchrec2.txt", ios_base::app);
							names << " NOBOWL...";
							names.close();

							if (freehit == 1)
							{
								cout << "\t\t\tFREE HIT !!! ---> DONT PRESS 1 FOR OUT\n";
								freeHitOut = 1;
								names.open("matchrec2.txt", ios_base::app);
								names << "FREEHIT!!";
								names.close();
								continue;
							}
							continue;
						}

						cout << "Run(s): ";
						cin >> run;
						names.open("matchrec2.txt", ios_base::app);
						names << run;
						names.close();

						for (int d = 0; d < 6; d++)
						{
							if (b > j)
								b--;
							else if (b < j)
								b++;
						}

						while (b == j)
						{
							runBall[d] = run;
							//d++;
							b++;
						}

						total2 = total2 + run;
						cout << "Runs: " << total2 << endl;
						system("cls");

						///////////////////////////////////////////////////////////////////////////////////////
						///////// FOR COUNTING PLAYERS' RUN & TELLING FOR HALF CENTURY OR CENTURY /////////
						///////////////////////////////////////////////////////////////////////////////////////
						if (bating == 1)
						{
							secondBatsman1Run = secondBatsman1Run + run;
							//cout << "Run of " << teams[p1][opener] << ": " << batsman1Run << endl;
							if (secondBatsman1Run >= 50)
							{
								cout << teams[p1][baller] << "has completed half century\n";
								halfCentury++;
							}
							else if (secondBatsman1Run >= 100)
							{
								cout << teams[p1][baller] << "has compeleted his century\n";
								century++;
							}
							/*if (out == 1)
							{
								batsman1Run = 0;
							}*/
						}
						else if (bating == 2)
						{
							secondBatsman2Run = secondBatsman2Run + run;
							//cout << "Run of " << teams[p2][opener] << ": " << batsman2Run << endl;
							if (secondBatsman2Run >= 50)
							{
								cout << teams[p2][baller] << " has completed his half century\n";
								halfCentury++;
							}
							else if (secondBatsman2Run >= 100)
							{
								cout << teams[p2][baller] << "has completed his century\n";
								century++;
							}
						}

						////////////////////////////////////////////////////////////////////////////////
						//////////////// FOR SWAPPING THE PLAYERS WHEN RUN IS ODD //////////////////
						////////////////////////////////////////////////////////////////////////////////
						if (run % 2 != 0)
						{
							if (bating == 1)
							{
								bating = 2;
							}
							else if (bating == 2)
							{
								bating = 1;
							}
						}
					}

					if (j == 6)
					{
						if (bating == 1)
							bating = 2;
						else if (bating == 2)
							bating = 1;

						cout << " Runs in this Over: " << total2 << endl;
						names.open("matchrec2.txt", ios_base::app);
						names << "\n" << " RUNS IN " << i << " over = " << total2;
						names.close();
						Sleep(3000);
						system("cls");
					}

					if (total2 > total)
					{
						cout << teams[0][baller] << " wins the game...\n";
					}
				}

				for (a = 0; a < 6; a++)
				{
					cout << c << ". ball: " << runBall[a] << endl;
					c++;
				}

				if (num > 9)
				{
					break;
					cout << "All out..." << endl;
				}
			}

			cout << teams[0][opener] << " has make " << total2 << " runs" << endl;
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << teams[0][opener] << " made " << total2 << "runs";
			names.close();
			total2++;
			cout << teams[0][baller] << " needs " << total2 << " runs to win ";
			names.open("matchrec2.txt", ios_base::app);
			names << "\n" << teams[0][baller] << " needs " << total2 << " runs to win";
			names.close();
		}
	}
}