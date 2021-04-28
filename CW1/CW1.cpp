#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Functions for the Case 3.
int PCPoint = 0, PlayerPoints = 0, PCDrop = 0, PlayerDrop = 0, drop = 0, turn = 0, PlayerIsFirst = 0;
string PlayerName;
//Function for the Case 4.
const int row = 5;
const int col = 5;
int mr[row][col];
int k = 0, babaika = 0;
void MM()
{
	srand(time(NULL));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			k++;
			mr[i][j] = 30 + rand() % 31;
			cout << mr[i][j] << " ";
			if (k == 5)
			{
				cout << "\n";
				k = 0;
			}
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (babaika < mr[i][j])
			{
				babaika = mr[i][j];
			}
		}
	}
	cout << "Максимальное: " << babaika << "\n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (babaika > mr[i][j])
			{
				babaika = mr[i][j];
			}
		}
	}
	cout << "Минимальное: " << babaika;
}

string funnyhaha;
void Queue()
{
	srand(time(NULL));
	turn = rand() % 2;
	if (turn == 1)
	{
		PlayerIsFirst = 1;
		cout << "Вы ходите первый!" << endl;
	}
	if (turn == 0)
	{
		PlayerIsFirst = 0;
		cout << "Компьютер ходит первый!" << endl;
	}
}
void PCThrow()
{
	cout << "Бросок компьютера: (кубик 1) " << endl;
	PCDrop = rand() % 6 + 1;
	if (PCDrop == 1)
	{
		PCPoint += 1;
		cout << "*******" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 2)
	{
		PCPoint += 2;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 3)
	{
		PCPoint += 3;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 4)
	{
		PCPoint += 4;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*     *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 5)
	{
		PCPoint += 5;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*  .  *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 6)
	{
		PCPoint += 6;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	cout << "Выпало: " << PCDrop << endl;
	cout << "Бросок компьютера: (кубик 2) " << endl;
	PCDrop = rand() % 6 + 1;
	if (PCDrop == 1)
	{
		PCPoint += 1;
		cout << "*******" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 2)
	{
		PCPoint += 2;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 3)
	{
		PCPoint += 3;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 4)
	{
		PCPoint += 4;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*     *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 5)
	{
		PCPoint += 5;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*  .  *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PCDrop == 6)
	{
		PCPoint += 6;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	cout << "Выпало: " << PCDrop << endl;
}
void PlayerThrow()
{
	cout << "Бросок " << PlayerName << ": (кубик 1) " << endl;
	PlayerDrop = rand() % 6 + 1;
	if (PlayerDrop == 1)
	{
		PlayerPoints += 1;
		cout << "*******" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 2)
	{
		PlayerPoints += 2;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 3)
	{
		PlayerPoints += 3;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 4)
	{
		PlayerPoints += 4;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*     *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 5)
	{
		PlayerPoints += 5;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*  .  *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 6)
	{
		PlayerPoints += 6;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	cout << "Выпало: " << PlayerDrop << endl;
	cout << "Бросок " << PlayerName << ": (кубик 2) " << endl;
	PlayerDrop = rand() % 6 + 1;
	if (PlayerDrop == 1)
	{
		PlayerPoints += 1;
		cout << "*******" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 2)
	{
		PlayerPoints += 2;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*     *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 3)
	{
		PlayerPoints += 3;
		cout << "*******" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*  .  *" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 4)
	{
		PlayerPoints += 4;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*     *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 5)
	{
		PlayerPoints += 5;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*  .  *" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	if (PlayerDrop == 6)
	{
		PlayerPoints += 6;
		cout << "*******" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*.   .*" << endl;
		cout << "*******" << endl;
	}
	cout << "Выпало: " << PlayerDrop << endl;
}
void WinCheck()
{
	if (PlayerPoints > PCPoint)
	{
		cout << "Поздравляю, " << PlayerName << ", вы победили бога рандома!" << endl;
	}
	if (PlayerPoints < PCPoint)
	{
		cout << PlayerName << ", к сожалению, вы проиграли богу рандома!" << endl;
	}
	if (PlayerPoints == PCPoint)
	{
		cout << "Ничья! " << PlayerName << "теперь брат бога рандома! :D" << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int WorksNumber;
	int TheGuess, ActualNumber, Guesses = 0;
	int FirstNumber, SecondNumber, Result;
	string Move;
	cout << "Выберите задание (1-3): "; // ВЫБОР ЗАДАНИЯ!
	cin >> WorksNumber;
	switch (WorksNumber)
	{
	case 1: // Циклы 1 + Логические операторы 1.
		cout << "Выбрана задачка: Угадай число!" << endl;
		srand(time(NULL));
		ActualNumber = rand() % 10 + 1;
		cout << "Я загадал число от 1 до 10, угадаешь за 5 попыток?" << endl;
		while (Guesses != 5)
		{
			cout << "Твое число: ";
			cin >> TheGuess;
			if (TheGuess == ActualNumber)
			{
				cout << "Ты угадал! Мои поздравления!" << endl;
				break;
			}
			if (TheGuess != ActualNumber)
			{
				Guesses += 1;
				if (TheGuess > ActualNumber)
				{
					cout << "Не угадал! Мое число меньше этого!" << endl;
				}
				if (TheGuess < ActualNumber)
				{
					cout << "Не угадал! Мое число больше этого!" << endl;
				}
			}
		}
		cout << "Число которое я загадал - " << ActualNumber;
		break;
	case 2: // Логические операторы 2;
		cout << "Вы выбрали: Калькулятор." << endl;
		cout << "Введите первое число: ";
		cin >> FirstNumber;
		cout << "Введите второе число: ";
		cin >> SecondNumber;
		cout << "Действие? ( + , -, /, *): ";
		cin >> Move;
		if (Move == "+")
		{
			Result = FirstNumber + SecondNumber;
			cout << "Ответ: " << Result;
		}
		if (Move == "-")
		{
			Result = FirstNumber - SecondNumber;
			cout << "Ответ: " << Result;
		}
		if (Move == "/")
		{
			Result = FirstNumber / SecondNumber;
			cout << "Ответ: " << Result;
		}
		if (Move == "*")
		{
			Result = FirstNumber * SecondNumber;
			cout << "Ответ: " << Result;
		}

		break;
	case 3: // Функции 1 + Логические операторы 3 + Циклы 2.
		cout << "Вы выбрали: Игра в кубик." << endl;
		cout << "Добро пожаловать, дорогой игрок! Введи свое имя: ";
		cin >> PlayerName;
		cout << "Начинаем игру!" << endl;
		Queue();
		if (PlayerIsFirst == 1)
		{
			for (int i = 0; i < 5; i ++)
			{
				PlayerThrow();
				cout << "Введи что нибудь чтобы продолжить:\n\n";
				cin >> funnyhaha;
				PCThrow();
				cout << "Введи что нибудь чтобы продолжить:\n\n";
				cin >> funnyhaha;
			}
		}
		else
		{
			for (int i = 0; i < 5; i++)
			{
				PCThrow();
				cout << "Введи что нибудь чтобы продолжить:\n\n";
				cin >> funnyhaha;
				PlayerThrow();
				cout << "Введи что нибудь чтобы продолжить:\n\n";
				cin >> funnyhaha;
			}
		}
		cout << "Итог невероятной битвы:\nВаши очки: " << PlayerPoints << endl;
		cout << "Очки компьютера: " << PCPoint << endl;
		WinCheck();

		break;
	case 4: // Массивы 1 + Функции 2
		cout << "Вы выбрали: Матрица из чисел, их минимальное и максимальное." << endl;
		MM();
		break;

	default:
		cout << "Задание не найдено.";
		break;
	}

	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNmddhhdmdmmdhhhhdddmmddddddddddddhhyyydNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMmhyyhhmmmdmmmdddddmmmmmmdmmmdmmmmmmdhyyhymMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMNmdhhhdmmmddmmmdmmmdmmmmdmmmmddddmmmmmddhhysshNMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMmhyhdddmmmdydmmmddddddddddhdddhhhhhdddddddhyssyssydNMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMNdhhddmmmmmmdyyddddddhhhyyyysssoooooosssyyyyhhhhhhhyyshmMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMmddddmmNNmmmddhhhhhyyysssoo++////:::::////++ossyhhhddddhhhNMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMdddmmmmNmmmdhhhyyhhysoo+++///:::--------:://///+ooyhhddddhyhmMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMNdhhdmmmmmddhhyyyyyhho++++/////:::----------:://://+osyhdddddddNMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMmhhhddmNNmdhyyyyyysshy+++///////:::-----..-::::://://+ooyhdddmdddNMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMmhhhhmmmNmhyysssssssyhs++++//////:::----...--::::://///++syhddmmmddMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMhhdddNNmdhyysssssyyyys++++++/////:::::---..--::/:///////+oshhddddmdNMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMNyyddmNmdhyysssssyyyyo+///////////:::::-------:::/:::////+osyhddddddmMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMmhddmmmdhyyyyyssssyss++///////////::::::-------:::://////++syhddddddmMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMmdddmmmdyyyyyyyyssoo++//////////////:::::------:::://////++syhdddmmdNMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMmddmmmmdyyyyyyysooo+++/++++///+/////::/::::-.--::::///////+syhddmmmdmMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMddmmmmdyyyyyyysoo++++++++++++++++/////////::::///////////+oyhdmmdddNMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMmmmmmmhyyyyhhhyyssoo++oo+++++++++++++++++++++ooooooo++////+oyddmddhMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMNmmmmhyyyhhhhdddhhhyysssssooooo+++ooooosssyhhhddhhhyyysso//+sddmmmmMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMdmmdhhhhyysyyhhhhhhhhhhyyysssoo+oossssyyhdddddddhhyyyyyyo++ohdmmNdNMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMmmmNhdhyysydddddddddddhhhyyyso+++ossssyhdmdhhhyyhdddhyso/::/hmmmmydMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMmmNNhyyyyhmmdhyyhdhhhdddhhyys+/::/osshdddhyhdhhy/shhhho+//+/ydhyhohMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMhmmmyssyyhdddhyhNmNNNhdddhhy++/:-:+sddhhhyhhdmdhsoo+osso++//ydhso+hMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMModmmsssyyyhhhhhhddhhhddddddo++//--/oyhhhhhyyso++/+oo+o+/////shdyo+hMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMsdmmssyyhhhhhhyyyhhhhddddhho+///-:/++ossssssssssso+///+oso++shdso+hMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMdhddysyyyyhhhhhhhhhyysyhhhhs+//::/++++++++oooosoo+//////+so+ohhso/hMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMdddhyyyyysssoooooooooosyhhyso+/:/++++++++oooooooo++///////osoyys/:yMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMdmmhyyyysso+++++++ooosyyyyyso+::/+++++++++o+++++++//+//////+sos/::oMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMNdhmhyyyssooo+++oossyyyyyyyyoo+/:/++oo++++ossyysso++++++++//+oo/:::oMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMmyddyyyssooooossyyyyyyyyyysoo+++/++++++++o++osyhhyyssooooo+o++::::yMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMddhyyysssssyyhhhyyyyyyyyyso+++++/+++++oo+++oossyhhhyyso/oso++//+yMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMmyyyyyyyhhdhhhhyyyyyyyyyso+/++++osssso++++ooossyyhddhyo+ysosdNNMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMdyyyyyhdhdhhhhhyhhhhyhhhyyssossyysooo+++oossyyhhdddmhs+yssmMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMhyyyyhyhdddddhhyyyyhhhhhhyyyyysooooooosyyyhddddhhdmys+hsyMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMmyyysyysyyhmmmddhhyyhhhhhhyysooosssyyssyyyhmmhyyydysosssdMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMhyyssssssyhdmmyyyyyyyyyyyyssssssooo/:+++/ydyoosshosossyMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMNyyysssssyyhdms/+/++/oooooso/://.-:..:.:ohsooooysoossyNMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMmysysssssyyhdds:-:-.::.--/-.``-``..`-:shyo+ooosoosshNMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMmhyyyssssyyhddho/---...-:.......-::oyyys++++soosshMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMNdyyyssssyyhhddhyss/:::/:---/oooso+yyso++++o+symMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMNdyysssyyyhhhddhyyyyyhyyyyyo+/-/osso+//+++sdNMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmhysssyyyhhyhysoooooo++/++://+ooo++//++omMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMNNmmmhhyssyyyyyyyyyssoo+++++++ooooo+++////+syysdddmNMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMNNmdhyyyhhhhhsyyyyysssyyssssoooooo+++++++/////oooo++ho/+ydNNMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMNNmmdhdhsyssymyyhhhyyyyyyysssoooooooo++++++++/////+soo+++sds+/::+shmNNMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMNmmdhhhhyyydyyssymmyyhhhhyyyyysssssooooooooo+++++////+ossoo+++ods/////:::/+sydNMMMMMMMMM" << endl;
	cout << "MMMMMNNmdhyyyhhhyyyyyyhdyssshmyyyhhhhhyyssssssoooooooo++++///+/++shyyso++++hy////::://///:/+sdNMMMMM" << endl;
	cout << "mddhhyyyyyyyhhhhhyhyyyhdyssshysyhhhhhhhhsooosooo+++++++///////+ossssyyso+/+hs/////:::::////////ohNMM" << endl;
	cout << "++oosyyyhyyyhhhhhyyyyyydysyydyyhhhhhhhhhhssoooo++++++++++/++++oyyssooyhys++h+//////::/://::::///:/+y" << endl;
	cout << "osyhhhhhhyyyhhhhyyyysyyhyyyyddyhhhhyhyyhhhyssoooo+++++++++++oyhyssso++shhyo+/////////:::/:::::::////" << endl;
	cout << "yhhhhhhhyyyyhhhhyyyssyhhhyyyhmhhhhhyyyyyhhhhysoooooooooooosyhhyssooo+++osyy+/+////////:::///:::::::/" << endl;
	cout << "hhhhhhhhhhyyyhhhyyyssyhhhyyyhmdhhhhhyyyyhhhhddhhyyysssyyyhhhyysoooo++/+++++++++/////:://////////::::" << endl;
}
// Массивы 1, Функции 2, Логические операторы 3, Циклы 2.