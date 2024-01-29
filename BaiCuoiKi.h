#pragma once
#include <iostream>
#include "Mylib.h"
#include <fstream>
#include <string>
#include <ctime>
#include <windows.h>
#include <iomanip>
#include <map>
#define Max 100
//=====KhaiBaoNguyenMauHam====
void bang_thoat();
void ve();
void menu();
void Help1();
void Help2();
void Help3();
void menu1();
void bangGame();
void onerobotplay();
void moveAAA(int arr[Max][Max], int ar[Max][Max], int x, int y, int& a, int& solandichuyen);
void ranSo(int arr[Max][Max], int ar[Max][Max], int array[Max][Max]);
void TwoRobotPlay();
void baRobotPlay();
void moveBBB(int array[Max][Max], int arr[Max][Max], int ar[Max][Max], int z, int t, int& b, int& solandichuyenrobot2, int trungnhau[Max],int& inracacsotrungnhau);
void moveCCC(int arr[Max][Max], int ar[Max][Max], int x, int y, int& a, int& solandichuyen, int z, int t, int& b, int& solandichuyenrobot2, int* robo1di, int* robot2di, int spead2, int spead1);
using namespace std;
int* robo1di = new int[Max];
int* robot2di = new int[Max];
int inracacsotrungnhau = 0;
char c;

struct founder
{
	string name;
	string date;
};
founder founder_1 = { "Nguyen Qui Trong.", "24/9/2004." };

void choose2() {
	SetColor(15);
	cout << "\nCreator: " << founder_1.name << "";
	cout << "\nDate: " << founder_1.date << "\n";
	SetColor(8);
	cout << "\n       RobotSimulator is a unique and engaging tactical game that challenges your analytical and decision-making skills.";
	cout << "\n In this game, you don't directly control the robots. Instead, you play the role of a supervisor, guiding the robots to ";
	cout << "\n optimize their score collection.";
	cout << "\n\n       The game takes place on a dynamic 2D grid, filled with randomly generated numbers. The robots are programmed to  ";
	cout << "\n move automatically on the grid, advancing towards high - scoring cells.Your task is to strategize and plan their       ";
	cout << "\n journey intelligently to maximize score collection.";
	cout << "\n\n       After each game, RobotSimulator provides fascinating information, including the total scores each robot has      ";
	cout << "\n collected, the paths taken by each robot, and the ultimate winner.";
	cout << "\n\n       RobotSimulator will test your abilities in strategic thinking, pattern recognition, and resource management. Can ";
	cout << "\n you lead the robots to victory and outscore the opponents ? Embrace the challenge of RobotSimulator and witness        ";
	cout << "\n remarkable results from your strategic capabilities!";
	cout << "\n\n       Are you ready to embark on this special robot adventure? Play RobotSimulator now and immerse yourself in the     ";
	cout << "\n excitement of this automated robot strategy!";
	cout << "\n\t\t\t\t\t\t\t\t\tEnjoy the game,\n";
	cout << "\t\t\t\t\t\t\t\t       " << founder_1.name << "\n";
	SetColor(14);
	gotoXY(80, 26);
	cout << "Press key y to back menu";
	int chose = 0;
	while (true) {
		if (_kbhit())
		{
			char select = _getch();
			if (select == 'y')
			{
				SetColor(11);
				menu();
				break;
			}

		}
	}
}


void Help1()
{
	system("cls");
	SetColor(15);
	cout << "\nCreator: " << founder_1.name << "";
	cout << "\nDate: " << founder_1.date << "\n\n";
	cout << "     Game gom co 3 phan:\n";
	cout << "  Phan 1-One robot  \n";
	cout << "  Trong phan nay, tro choi co mot robot don le di chuyen tren bang choi. Muc tieu cua nguoi choi la di chuyen robot den ";
	cout << " cac o chua duoc di qua va thu thap diem so tu cac o nay.Robot se di chuyen den o co gia tri lon nhat trong cac o xung  "; 
	cout << " quanh no.\n";
	cout << "  Khi bat dau he thong se yeu cau ban nhap toa do X va Y voi X la vi tri theo hang va y la vi tri theo cot neu ban nhap ";
	cout << " X qua 19 va y qua 13 cung voi do la X Y be hon 0 thi he thong se xoa lua chon ban vua nhap va ban se duoc nhap lai X   ";
	cout << " Y. Sau do ban se tiep tuc duoc he thong yeu cau nhap toc do voi don vi la ms (millisecond) do cung chinh la yeu cau ma ";
	cout << " he thong yeu cau ban nhap. \n";
	cout << "  Sau 3 giay robot se tu dong duy chuyen den o co gia tri lon nhat xung quanh no ban se khong the dieu kien robot. O    ";
	cout << " phia duoi cua robot lon nam phi tren khung hieu lenh se co 1 phan ten la score do chinh la phan ma he thong se cho ban ";
	cout << " thay so diem hien tai cua ban voi cach tinh la lan robot di chuyen thu (n-1)+(n-2) n>3. Cac o ma robot di qua se duoc  ";
	cout << " danh dau bang mau vang.\n";
	cout << "  Cuoi game de tiep tuc ban can phai nhan 1 phim bat ki. He thong se in ra cac thong so ma robot cua ban da dat duoc ra ";
	cout << " man hinh gom co: Cac diem ma robot da di qua.\n";
	cout << "                  So lan di chuyen cua robot.\n";
	cout << "                  Diem bat dau cua robot.\n";
	cout << "                  So diem cua robot.\n";
	cout << "  Cung voi dong tuy chon o phia duoi neu ban nhap 'y' thi ban se bat dau 1 van game moi, nguoc lai neu ban nhan 'n' ban ";
	cout << " se duoc chuyen toi menu game.\n\n\n";
	SetColor(14);
	cout << "      nhan <- de quay lai menu                                                           nhan -> de qua trang tiep      ";
	SetColor(15);
	int b = 0;
	while (true) 
	{
		if (_kbhit())
		{
			char kitu = _getch();
			if (kitu == -32)
			{
				kitu = _getch();
				if (kitu == 77 )//di phai
				{
					Help2();
					break;
				}
				else if (kitu == 75 )//di trai
				{
					menu();
					break;
				}
			}
		}

	}
}

void Help2()
{
	system("cls");
	SetColor(15);
	founder founder_1 = { "Nguyen Qui Trong.", "24/9/2004." };
	cout << "\nCreator: " << founder_1.name << "";
	cout << "\nDate: " << founder_1.date << "\n\n";
	cout << "  Phan 2-Hai Robot Di Chuyen  \n";
	cout << "  Trong phan nay, tro choi co hai robot di chuyen lan luot tren bang choi. Muc tieu cua nguoi choi la di chuyen robot   ";
	cout << " den cac o chua duoc di qua va thu thap diem so tu cac o nay.Robot se di chuyen den o co gia tri lon nhat trong cac o   ";
	cout << " xung quanh no.\n";
	cout << "  Nhap lieu tuong tu nhu phan 1 nhung khac o 1 cho do chinh la sau khi ban nhap xong cho robot 1 thi robot nay se duoc  ";
	cout << " di chuyen truoc roi sau do ban moi duoc he thong moi nhap vi tri va toc do cho robot 2.                                ";
	cout << "  O phan nay ban co 2 luot choi va 2 robot moi luot choi tuong ung voi 1 robot ban co 2 lua chon. Lua chon thu 1 la     ";
	cout << " choi don de tim ra phuong an toi uu co so diem lon hon robot dau tien. Lua chon thu 2 la choi voi ban ban va ban cua   ";
	cout << " ban se chia luot de choi sao cho diem cua minh lon hon cua nguoi kia.\n";
	cout << "  Luu y:\n";
	cout << "         Robot 1 va robot 2 khong duoc phep dat cung vi tri voi nhau vi nhu the cac gia tri cua ca 2 robot se nhu nhau  ";
	cout << "   . Nhung o ma robot 1 da di qua se duoc to mau vang va danh dau bang 1-1 va robot 2 se duoc to mau tim va danh dau la ";
	cout << "   2-2. Cac o ma 2 robot di trung voi nhau (robot 1 di roi sau do robot 2 di nua) se duoc to bang mau xanh bien dam va  ";
	cout << "   danh dau bang 1-2.                                                                                                   ";
	cout << "  Sau khi hoan thanh ca 2 luot cho he thong se cho ban cac gia tri va so lieu  lan luot nhu sau :\n";
	cout << "                  Cac Diem ma robot 1 va robot 2 da di qua.\n";
	cout << "                  Diem bat dau cua robot 1 va diem bat dau cua robot 2.\n";
	cout << "                  So diem cua robot 1 va robot 2 sau do so sanh xem robot nao co so diem lon hon.\n";
	cout << "                  Cac diem ma 2 robot da di trung voi nhau.\n";
	cout << "  Ngoai ra cac dieu con lai dieu tuong tuong tu nhu cua phan 1.\n\n\n";
	SetColor(14);
	cout << "      nhan <- de quay lai trang truoc               nhan 'm' quay lai menu               nhan -> de qua trang tiep      ";
	SetColor(15);
	int b = 0;
	while (true)
	{
		if (_kbhit())
		{
			char kitu = _getch();
			if (kitu == -32)
			{
				kitu = _getch();
				if (kitu == 77)//di phai
				{
					Help3();
					break;
				}
				else if (kitu == 75)//di trai
				{
					Help1();
					break;
				}
			}
			if (kitu == 'm')//di giua
			{
				menu();
				break;
			}
		}

	}
}

void Help3()
{
	system("cls");
	SetColor(15);
	founder founder_1 = { "Nguyen Qui Trong.", "24/9/2004." };
	cout << "\nCreator: " << founder_1.name << "";
	cout << "\nDate: " << founder_1.date << "\n\n";
	cout << "  Phan 3-Hai Robot Di Chuyen Cung Nhau (PvP)\n";
	cout << "  Trong phan nay, tro choi co hai robot di chuyen cung nhau tren bang choi va so sanh diem so khi hoan thanh. Muc tieu  ";
	cout << " cua nguoi choi la di chuyen hai robot den cac o chua duoc di qua va thu thap diem so tu cac o nay. Hai robot se di     ";
	cout << " chuyen dong bo va luon cung nhau di den o co gia tri lon nhat trong cac o xung quanh chung.\n";
	cout << "  He thong se yeu cau ban nhap lieu lan luot cho ca 2 robot (robot 1 sau do den robot 2) cac noi dung can nhap van giu  ";
	cout << " nguyen nhu cu. Hai robot se di chuyen lan luot cung nhau robot 1 di chuyen sau do den robot 2 voi toc do ma nguoi dung ";
	cout << " da nhap.\n";
	cout << "  Luu y:\n";
	cout << "        Robot 1 va robot 2 khong duoc phep dat cung vi tri voi nhau ngoai ra cac o ma robot kia ra di qua roi thi robot ";
	cout << "   con lai khong duoc di qua nua (cac o chi duoc phep di qua 1 lan) nhung o ma robot 1 da di qua se duoc danh dau la 1-1";
	cout << "   va robot 2 di qua se duoc danh dau la 2-2. Cac mau danh dau van su dung nhu cu.                                    \n"<<endl;
	cout << "  Vi mang tinh chat la PvP nen cuoi game he thong se in ra them 1 danh gia xem robot nao thang cac dong in con lai se   ";
	cout << " giong voi phan 2 nhung khong co cac o trung nhau.\n\n\n\n\n\n\n\n\n";
	SetColor(14);
	cout << "      nhan <- de quay lai trang truoc                                                         nhan -> de den menu       ";
	SetColor(15);
	int b = 0;
	while (true)
	{
		if (_kbhit())
		{
			char kitu = _getch();
			if (kitu == -32)
			{
				kitu = _getch();
				if (kitu == 77)//di phai
				{
					menu();
					break;
				}
				else if (kitu == 75)//di trai
				{
					Help2();
					break;
				}
			}
		}

	}
}


void bang_thoat()
{
	int x_new = 35;
	int x_chu = 0;
	int x = 65;
	int y = 10, y_dif = 0;
	// ==========================================================================
	SetColor(6);
	gotoXY(x + 25, y++);
	cout << ".-.";
	gotoXY(x + 25, y++);
	cout << "'-'";
	gotoXY(x + 24, y++);
	cout << "//";
	gotoXY(x + 23, y++);
	cout << "_..---._/|";
	gotoXY(x + 15, y++);
	cout << ".' .\"     '-.";
	gotoXY(x + 13, y++);
	cout << "/__/          \\      *";
	gotoXY(x + 11, y++);
	cout << "====_____     __|     :";
	gotoXY(x + 10, y++);
	cout << "/#   #\"\"\" |   /()\    :    ..*";
	gotoXY(x + 10, y++);
	cout << "|#   #    |   \\__/    : .''";
	gotoXY(x + 10, y++);
	cout << "\\#___#____|      /   :::.. .";
	gotoXY(x + 9, y++);
	cout << "\\______________|_...ä_: .. '*";
	gotoXY(x + 2, y++);
	cout << "()       // /\\||||)))))))      '   . .";
	gotoXY(x + 1, y++);
	cout << ".( \\_     \\\\_\\//   _-'.'/        |   * ..";
	gotoXY(x, y++);
	cout << "( )  |^|^|^|ooo/  _#\\.//\"\"\"_ | . . .";
	gotoXY(x, y++);
	cout << "(_)_.'v|v|v|     / \#  \\_ / '_  _'    . .";
	gotoXY(x + 11, y++);
	cout << "| _ _/_/     /'./_-|\"         . .";
	gotoXY(x + 11, y++);
	cout << "/#_#__\"\"\" - ._ / #  \\__)       .  .";
	gotoXY(x + 11, y++);
	cout << "|__   \"\"-._ |##               . . .";
	gotoXY(x + 11, y++);
	cout << "|  \"\"|-\"\"\" - _ / ##              . .";
	gotoXY(x + 11, y++);
	cout << "/\"\"--\\__.-|                       .";
	gotoXY(x + 11, y++);
	cout << "\\-_.-<__ /                   .   .";
	gotoXY(x + 11, y++);
	cout << "/-_| /  \\";
	gotoXY(x + 11, y++);
	cout << "\\-_| \\_-<.                        .  .";
	gotoXY(x + 11, y++);
	cout << "<_-/ <_.-\\                    .";
	gotoXY(x + 11, y++);
	cout << "<_-|  |_.-|                        .";
	gotoXY(x + 6, y++);
	cout << ".----|   \\__\\  |                 .";
	gotoXY(x + 5, y++);
	cout << "|     .\"\"\"   '.  |                       .";
	gotoXY(x + 6, y++);
	cout << ".___|        |__|";
	x = 20;
	y = 20;
	gotoXY(x, y++);
	cout << "$$$$$$$\\";
	gotoXY(x, y++);
	cout << "$$  __$$\\";
	gotoXY(x, y++);
	cout << "$$ |  $$ |$$\\   $$\\  $$$$$$\\";
	gotoXY(x, y++);
	cout << "$$$$$$$\\ |$$ |  $$ |$$  __$$\\";
	gotoXY(x, y++);
	cout << "$$  __$$\\ $$ |  $$ |$$$$$$$$ |";
	gotoXY(x, y++);
	cout << "$$ |  $$ |$$ |  $$ |$$   ____|";
	gotoXY(x, y++);
	cout << "$$$$$$$  |\\$$$$$$$ |\\$$$$$$$\\";
	gotoXY(x, y++);
	cout << "\\_______/  \\____$$ | \\_______|";
	gotoXY(x + 11, y++);
	cout << "$$\\   $$ | ";
	gotoXY(x + 11, y++);
	cout << "\\$$$$$$  |";
	gotoXY(x + 12, y++);
	cout << "\\______/";
}




void ve()
{
	int r = 0;
	int x_chu = 0;
	int x = 65;
	int y = 10, y_dif = 0;
	string str;
	ifstream fi;
	int lines = 0;
	fi.open("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\LogoIntro.txt", ios::in);
	SetColor(10);
	while (!fi.eof())
	{
		gotoXY(0, lines++);
		getline(fi, str);
		cout << str;
		Sleep(30);
	}
	ifstream i;
	i.open("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\txtroad.txt", ios::in);
	int line = 18;
	SetColor(7);
	while (!i.eof())
	{
		gotoXY(34, line++);
		getline(i, str);
		cout << str;
	}
	int p = 14;
	while (p <= 22) {
		gotoXY(88, p);
		cout << char(179);
		gotoXY(92, p);
		cout << char(179);
		gotoXY(96, p);
		cout << char(179);
		gotoXY(100, p);
		cout << char(179);
		gotoXY(104, p);
		cout << char(179);
		gotoXY(108, p);
		cout << char(179);
		gotoXY(112, p);
		cout << char(179);
		Sleep(30);
		p++;
	}
	int o = 89;
	int yke = 92;
	int yc = 13;
	while (o < 111) {
		gotoXY(o, yc);
		cout << char(196) << char(196);
		gotoXY(88, yc);
		cout << char(218);
		gotoXY(112, yc);
		cout << char(191);
		gotoXY(yke, yc);
		cout << char(194);
		gotoXY(yke + 4, yc);
		cout << char(194);
		gotoXY(yke + 8, yc);
		cout << char(194);
		gotoXY(yke + 12, yc);
		cout << char(194);
		gotoXY(yke + 16, yc);
		cout << char(194);
		gotoXY(o, yc + 2);
		cout << char(196) << char(196);
		gotoXY(88, yc + 2);
		cout << char(195);
		gotoXY(112, yc + 2);
		cout << char(180);
		gotoXY(yke, yc + 2);
		cout << char(197);
		gotoXY(yke + 4, yc + 2);
		cout << char(197);
		gotoXY(yke + 8, yc + 2);
		cout << char(197);
		gotoXY(yke + 12, yc + 2);
		cout << char(197);
		gotoXY(yke + 16, yc + 2);
		cout << char(197);
		gotoXY(o, yc + 4);
		cout << char(196) << char(196);
		gotoXY(88, yc + 4);
		cout << char(195);
		gotoXY(112, yc + 4);
		cout << char(180);
		gotoXY(yke, yc + 4);
		cout << char(197);
		gotoXY(yke + 4, yc + 4);
		cout << char(197);
		gotoXY(yke + 8, yc + 4);
		cout << char(197);
		gotoXY(yke + 12, yc + 4);
		cout << char(197);
		gotoXY(yke + 16, yc + 4);
		cout << char(197);
		gotoXY(o, yc + 6);
		cout << char(196) << char(196);
		gotoXY(88, yc + 6);
		cout << char(195);
		gotoXY(112, yc + 6);
		cout << char(180);
		gotoXY(yke, yc + 6);
		cout << char(197);
		gotoXY(yke + 4, yc + 6);
		cout << char(197);
		gotoXY(yke + 8, yc + 6);
		cout << char(197);
		gotoXY(yke + 12, yc + 6);
		cout << char(197);
		gotoXY(yke + 16, yc + 6);
		cout << char(197);
		gotoXY(o, yc + 8);
		cout << char(196) << char(196);
		gotoXY(88, yc + 8);
		cout << char(195);
		gotoXY(112, yc + 8);
		cout << char(180);
		gotoXY(yke, yc + 8);
		cout << char(197);
		gotoXY(yke + 4, yc + 8);
		cout << char(197);
		gotoXY(yke + 8, yc + 8);
		cout << char(197);
		gotoXY(yke + 12, yc + 8);
		cout << char(197);
		gotoXY(yke + 16, yc + 8);
		cout << char(197);

		gotoXY(o, yc + 10);
		cout << char(196) << char(196);
		gotoXY(88, yc + 10);
		cout << char(192);
		gotoXY(112, yc + 10);
		cout << char(217);
		gotoXY(yke, yc + 10);
		cout << char(193);
		gotoXY(yke + 4, yc + 10);
		cout << char(193);
		gotoXY(yke + 8, yc + 10);
		cout << char(193);
		gotoXY(yke + 12, yc + 10);
		cout << char(193);
		gotoXY(yke + 16, yc + 10);
		cout << char(193);
		Sleep(20);

		gotoXY(88, 20);
		cout << ' ';
		o++;
	}
	//====hangmot==
	Sleep(15);
	gotoXY(90, 14);
	cout << "96";
	Sleep(15);
	gotoXY(90, 16);
	cout << "97";
	Sleep(15);
	gotoXY(90, 18);
	cout << "98";
	Sleep(15);
	gotoXY(90, 20);
	cout << "99";
	Sleep(15);
	gotoXY(90, 22);
	cout << "0";
	//===hanghai==
	Sleep(15);
	gotoXY(94, 14);
	cout << "95";
	Sleep(15);
	gotoXY(94, 16);
	cout << "80";
	Sleep(15);
	gotoXY(94, 18);
	cout << "81";
	Sleep(15);
	gotoXY(94, 20);
	cout << "82";
	Sleep(15);
	gotoXY(94, 22);
	cout << "83";
	//===hangba==
	Sleep(15);
	gotoXY(98, 14);
	cout << "94";
	Sleep(15);
	gotoXY(98, 16);
	cout << "79";
	Sleep(15);
	gotoXY(98, 18);
	cout << "72";
	Sleep(15);
	gotoXY(98, 20);
	cout << "73";
	Sleep(15);
	gotoXY(98, 22);
	cout << "84";
	//===hangbon==
	Sleep(15);
	gotoXY(102, 14);
	cout << "93";
	Sleep(15);
	gotoXY(102, 16);
	cout << "78";
	Sleep(15);
	gotoXY(102, 18);
	cout << "71";
	Sleep(15);
	gotoXY(102, 20);
	cout << "74";
	Sleep(15);
	gotoXY(102, 22);
	cout << "85";
	//===hangnam==
	Sleep(15);
	gotoXY(106, 14);
	cout << "92";
	Sleep(15);
	gotoXY(106, 16);
	cout << "77";
	Sleep(15);
	gotoXY(106, 18);
	cout << "76";
	Sleep(15);
	gotoXY(106, 20);
	cout << "75";
	Sleep(15);
	gotoXY(106, 22);
	cout << "86";
	Sleep(15);
	//===hangsau==
	gotoXY(110, 14);
	cout << "91";
	Sleep(15);
	gotoXY(110, 16);
	cout << "90";
	Sleep(15);
	gotoXY(110, 18);
	cout << "89";
	Sleep(15);
	gotoXY(110, 20);
	cout << "88";
	Sleep(15);
	gotoXY(110, 22);
	cout << "87";
	Sleep(15);
	int colorx = 9;
	SetColor(colorx);
	Sleep(150);
	gotoXY(90, 20);
	cout << "99";
	Sleep(150);
	gotoXY(90, 18);
	cout << "98";
	Sleep(150);
	gotoXY(90, 16);
	cout << "97";
	Sleep(150);
	gotoXY(90, 14);
	cout << "96";
	Sleep(15);
	gotoXY(94, 14);
	cout << "95";
	Sleep(100);
	gotoXY(98, 14);
	cout << "94";
	Sleep(100);
	gotoXY(102, 14);
	cout << "93";
	Sleep(100);
	gotoXY(106, 14);
	cout << "92";
	Sleep(100);
	gotoXY(110, 14);
	cout << "91";
	Sleep(70);
	gotoXY(110, 16);
	cout << "90";
	Sleep(70);
	gotoXY(110, 18);
	cout << "89";
	Sleep(70);
	gotoXY(110, 20);
	cout << "88";
	Sleep(15);
	gotoXY(110, 22);
	cout << "87";
	Sleep(50);
	gotoXY(106, 22);
	cout << "86";
	Sleep(50);
	gotoXY(102, 22);
	cout << "85";
	Sleep(50);
	gotoXY(98, 22);
	cout << "84";
	Sleep(50);
	gotoXY(94, 22);
	cout << "83";
	Sleep(50);
	SetColor(15);
	gotoXY(90, 22);
	cout << "0";
	SetColor(colorx);
	Sleep(30);
	gotoXY(94, 20);
	cout << "82";
	Sleep(30);
	gotoXY(94, 18);
	cout << "81";
	Sleep(30);
	gotoXY(94, 16);
	cout << "80";
	Sleep(30);
	gotoXY(98, 16);
	cout << "79";
	Sleep(30);
	gotoXY(102, 16);
	cout << "78";
	Sleep(30);
	gotoXY(106, 16);
	cout << "77";
	Sleep(20);
	gotoXY(106, 18);
	cout << "76";
	Sleep(20);
	gotoXY(106, 20);
	cout << "75";
	Sleep(20);
	gotoXY(102, 20);
	cout << "74";
	Sleep(15);
	gotoXY(98, 20);
	cout << "73";
	Sleep(15);
	gotoXY(98, 18);
	cout << "72";
	Sleep(15);
	gotoXY(102, 18);
	cout << "71";



	gotoXY(0, 28);
	SetColor(15);
	cout << "Loading..";
	for (int i = 0; i <= 118; i++)
	{
		gotoXY(0, 28);
		SetColor(15);
		gotoXY(9, 28);
		cout << ".";
		Sleep(30);
		gotoXY(9, 28);
		cout << " ";
		gotoXY(i, 29);
		SetColor(10);
		if (i <= 40)
		{
			Sleep(40);
		}
		else if (40 < i <= 80)
		{
			Sleep(30);
		}
		else if (80 < i <= 118)
		{
			Sleep(10);
		}
		cout << char(219);
		if (i == 118)
		{
			Sleep(1500);
			break;
		}
	}

}
void menu()
{
	system("cls");
	int x = 68;
	int y = 10;
	SetColor(11);
	gotoXY(x + 25, y++);
	cout << ".-.";
	gotoXY(x + 25, y++);
	cout << "'-'";
	gotoXY(x + 24, y++);
	cout << "//";
	gotoXY(x + 23, y++);
	cout << "_..---._/|";
	gotoXY(x + 15, y++);
	cout << ".' .\"     '-.";
	gotoXY(x + 13, y++);
	cout << "/__/          \\      *";
	gotoXY(x + 11, y++);
	cout << "====_____     __|     :";
	gotoXY(x + 10, y++);
	cout << "/#   #\"\"\" |   /()\    :    ..*";
	gotoXY(x + 10, y++);
	cout << "|#   #    |   \\__/    : .''";
	gotoXY(x + 10, y++);
	cout << "\\#___#____|      /   :::.. .";
	gotoXY(x + 9, y++);
	cout << "\\______________|_...ä_: .. '*";
	SetColor(11);
	gotoXY(x + 2, y++);
	cout << "()       // /\\||||)))))))      '   . .";
	gotoXY(x + 1, y++);
	cout << ".( \\_     \\\\_\\//   _-'.'/        |   * ..";
	gotoXY(x, y++);
	cout << "( )  |^|^|^|ooo/  _#\\.//\"\"\"_ | . . .";
	gotoXY(x, y++);
	cout << "(_)_.'v|v|v|     / \#  \\_ / '_  _'    . .";
	gotoXY(x + 11, y++);
	cout << "| _ _/_/     /'./_-|\"         . .";
	gotoXY(x + 11, y++);
	cout << "/#_#__\"\"\" - ._ / #  \\__)       .  .";
	gotoXY(x + 11, y++);
	cout << "|__   \"\"-._ |##               . . .";
	gotoXY(x + 11, y++);
	cout << "|  \"\"|-\"\"\" - _ / ##              . .";
	gotoXY(x + 11, y++);
	cout << "/\"\"--\\__.-|                       .";
	gotoXY(x + 11, y++);
	cout << "\\-_.-<__ /                   .   .";
	gotoXY(x + 11, y++);
	cout << "/-_| /  \\";
	gotoXY(x + 11, y++);
	cout << "\\-_| \\_-<.                        .  .";
	gotoXY(x + 11, y++);
	cout << "<_-/ <_.-\\                    .";
	gotoXY(x + 11, y++);
	cout << "<_-|  |_.-|                        .";
	gotoXY(x + 6, y++);
	cout << ".----|   \\__\\  |                 .";
	gotoXY(x + 5, y++);
	cout << "|     .\"\"\"   '.  |                       .";
	gotoXY(x + 6, y++);
	cout << ".___|        |__|";
	string str;
	ifstream fi;
	int lines = 0;
	fi.open("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\namegame.txt", ios::in);
	SetColor(10);
	while (!fi.eof())
	{
		gotoXY(0, lines++);
		getline(fi, str);
		cout << str;
	}

	x = 4;
	y = 15;
	SetColor(6);
	gotoXY(x + 1, y);
	cout << "_________________________________________________________";
	gotoXY(x, y + 1);
	cout << "==| |  || |                                  |  ||  | |==";
	gotoXY(x, y + 2);
	cout << "==/ / // /            New game               /  //  / /==";
	gotoXY(x, y + 3);
	cout << "==\\ \\ \\\\ \\        More Information           \\ \\\\  \\ \\==";
	gotoXY(x, y + 4);
	cout << "==\\ \\ \\\\ \\              Help                  \\ \\\\   \\ \\==";
	gotoXY(x, y + 5);
	cout << "==\\  \\ \\\\ \\             Exit                 \\ \\\\   \\ \\==";
	gotoXY(x + 1, y + 6);
	cout << "==|_|__||_|___________________________________|_||___|_|==";
	int choose = 0;
	int k = 0;
	int x_phao = 68;
	int b = 0;
	while (true)
	{
		if (k % 40 != 0)
		{
			SetColor(13);
			gotoXY(x_phao + 34, 16);
			cout << "*";
			gotoXY(x_phao + 34, 15);
			cout << "*";
			gotoXY(x_phao + 38, 17);
			cout << "*";
			gotoXY(x_phao + 40, 18);
			cout << "*";
			gotoXY(x_phao + 32, 19);
			cout << "*";
			gotoXY(x_phao + 34, 20);
			cout << "*";
			gotoXY(x_phao + 40, 21);
			cout << "*";
			gotoXY(x_phao + 32, 22);
			cout << "*";
			gotoXY(x_phao + 34, 23);
			cout << "*";
			gotoXY(x_phao + 34, 24);
			cout << "*";
			gotoXY(x_phao + 40, 25);
			cout << "*";
			SetColor(14);
			gotoXY(x_phao + 36, 15);
			cout << "*";
			gotoXY(x_phao + 32, 16);
			cout << "*";
			gotoXY(x_phao + 39, 17);
			cout << "*";
			gotoXY(x_phao + 42, 18);
			cout << "*";
			gotoXY(x_phao + 31, 19);
			cout << "*";
			gotoXY(x_phao + 32, 20);
			cout << "*";
		}
		else
		{
			SetColor(13);
			gotoXY(x_phao + 34, 16);
			cout << " ";
			gotoXY(x_phao + 34, 15);
			cout << " ";
			gotoXY(x_phao + 38, 17);
			cout << " ";
			gotoXY(x_phao + 40, 18);
			cout << " ";
			gotoXY(x_phao + 32, 19);
			cout << " ";
			gotoXY(x_phao + 34, 20);
			cout << " ";
			gotoXY(x_phao + 40, 21);
			cout << " ";
			gotoXY(x_phao + 32, 22);
			cout << " ";
			gotoXY(x_phao + 34, 23);
			cout << " ";
			gotoXY(x_phao + 34, 24);
			cout << " ";
			gotoXY(x_phao + 40, 25);
			cout << " ";
			SetColor(14);
			gotoXY(x_phao + 36, 15);
			cout << " ";
			gotoXY(x_phao + 32, 16);
			cout << " ";
			gotoXY(x_phao + 39, 17);
			cout << " ";
			gotoXY(x_phao + 42, 18);
			cout << " ";
			gotoXY(x_phao + 31, 19);
			cout << " ";
			gotoXY(x_phao + 32, 20);
			cout << " ";
		}

		k++;
		if (_kbhit() == true)
		{
			c = _getch();
			if (c == -32)
			{
				c = _getch();
				if (c == 72)//dilen
				{
					b--;
				}
				else if (c == 80)//di xuong
				{
					b++;
				}
			}
			if (c == 'w')
			{
				b--;
			}
			if (c == 's')
			{
				b++;
			}
			if (b < 1)
				b = 4;
			else if (b > 4)
				b = 1;
			if (b == 1)
			{
				gotoXY(x + 1, y);
				cout << "_________________________________________________________";
				gotoXY(x, y + 1);
				cout << "==| |  || |                                  |  ||  | |==";
				gotoXY(x, y + 2);
				cout << "==/ / // /            New game               /  //  / /==";
				gotoXY(x, y + 3);
				cout << "==\\ \\ \\\\ \\        More Information           \\ \\\\  \\ \\==";
				gotoXY(x, y + 4);
				cout << "==\\ \\ \\\\ \\              Help                  \\ \\\\   \\ \\==";
				gotoXY(x, y + 5);
				cout << "==\\  \\ \\\\ \\             Exit                 \\ \\\\   \\ \\==";
				gotoXY(x + 1, y + 6);
				cout << "==|_|__||_|___________________________________|_||___|_|==";
				SetColor(11);
				gotoXY(x + 16 + 6, y + 2);
				cout << "New game";
			}
			else if (b == 2)
			{
				gotoXY(x + 1, y);
				cout << "_________________________________________________________";
				gotoXY(x, y + 1);
				cout << "==| |  || |                                  |  ||  | |==";
				gotoXY(x, y + 2);
				cout << "==/ / // /            New game               /  //  / /==";
				gotoXY(x, y + 3);
				cout << "==\\ \\ \\\\ \\        More Information           \\ \\\\  \\ \\==";
				gotoXY(x, y + 4);
				cout << "==\\ \\ \\\\ \\              Help                  \\ \\\\   \\ \\==";
				gotoXY(x, y + 5);
				cout << "==\\  \\ \\\\ \\             Exit                 \\ \\\\   \\ \\==";
				gotoXY(x + 1, y + 6);
				cout << "==|_|__||_|___________________________________|_||___|_|==";
				SetColor(11);
				gotoXY(x + 16 + 2, y + 3);
				cout << "More Information";

			}
			else if (b == 3)
			{
				gotoXY(x + 1, y);
				cout << "_________________________________________________________";
				gotoXY(x, y + 1);
				cout << "==| |  || |                                  |  ||  | |==";
				gotoXY(x, y + 2);
				cout << "==/ / // /            New game               /  //  / /==";
				gotoXY(x, y + 3);
				cout << "==\\ \\ \\\\ \\        More Information           \\ \\\\  \\ \\==";
				gotoXY(x, y + 4);
				cout << "==\\ \\ \\\\ \\              Help                  \\ \\\\   \\ \\==";
				gotoXY(x, y + 5);
				cout << "==\\  \\ \\\\ \\             Exit                 \\ \\\\   \\ \\==";
				gotoXY(x + 1, y + 6);
				cout << "==|_|__||_|___________________________________|_||___|_|==";
				SetColor(11);
				gotoXY(x + 16 + 8, y + 4);
				cout << "Help";
			}
			else if (b == 4)
			{
				gotoXY(x + 1, y);
				cout << "_________________________________________________________";
				gotoXY(x, y + 1);
				cout << "==| |  || |                                  |  ||  | |==";
				gotoXY(x, y + 2);
				cout << "==/ / // /            New game               /  //  / /==";
				gotoXY(x, y + 3);
				cout << "==\\ \\ \\\\ \\        More Information           \\ \\\\  \\ \\==";
				gotoXY(x, y + 4);
				cout << "==\\ \\ \\\\ \\              Help                  \\ \\\\   \\ \\==";
				gotoXY(x, y + 5);
				cout << "==\\  \\ \\\\ \\             Exit                 \\ \\\\   \\ \\==";
				gotoXY(x + 1, y + 6);
				cout << "==|_|__||_|___________________________________|_||___|_|==";
				SetColor(11);
				gotoXY(x + 16 + 8, y + 5);
				cout << "Exit";
			}
			if (c == '\r')
			{
				if (b == 1)
				{
					SetColor(6);
					gotoXY(x, y + 2);
					cout << "==/ / // /         1. New game               /  //  / /==";
					gotoXY(x, y + 3);
					cout << "==\\ \\ \\\\ \\         2. More Information       \\ \\\\  \\ \\==";
					gotoXY(x, y + 4);
					cout << "==\\ \\ \\\\ \\         3. Help                    \\ \\\\   \\ \\==";
					gotoXY(x, y + 5);
					cout << "==\\  \\ \\\\ \\        4. Exit                   \\ \\\\   \\ \\==";
					SetColor(11);
					choose = 1;
				}
				else if (b == 2)
				{
					SetColor(6);
					gotoXY(x, y + 2);
					cout << "==/ / // /         1. New game               /  //  / /==";
					gotoXY(x, y + 3);
					cout << "==\\ \\ \\\\ \\         2. More Information       \\ \\\\  \\ \\==";
					gotoXY(x, y + 4);
					cout << "==\\ \\ \\\\ \\         3. Help                    \\ \\\\   \\ \\==";
					gotoXY(x, y + 5);
					cout << "==\\  \\ \\\\ \\        4. Exit                   \\ \\\\   \\ \\==";
					SetColor(11);
					choose = 2;

				}
				else if (b == 3)
				{
					SetColor(6);
					gotoXY(x, y + 2);
					cout << "==/ / // /         1. New game               /  //  / /==";
					gotoXY(x, y + 3);
					cout << "==\\ \\ \\\\ \\         2. More Information       \\ \\\\  \\ \\==";
					gotoXY(x, y + 4);
					cout << "==\\ \\ \\\\ \\         3. Help                    \\ \\\\   \\ \\==";
					gotoXY(x, y + 5);
					cout << "==\\  \\ \\\\ \\        4. Exit                   \\ \\\\   \\ \\==";
					SetColor(11);
					choose = 3;
				}
				else if (b == 4)
				{
					SetColor(6);
					gotoXY(x, y + 2);
					cout << "==/ / // /         1. New game               /  //  / /==";
					gotoXY(x, y + 3);
					cout << "==\\ \\ \\\\ \\         2. More Information       \\ \\\\  \\ \\==";
					gotoXY(x, y + 4);
					cout << "==\\ \\ \\\\ \\         3. Help                    \\ \\\\   \\ \\==";
					gotoXY(x, y + 5);
					cout << "==\\  \\ \\\\ \\        4. Exit                   \\ \\\\   \\ \\==";
					SetColor(11);
					choose = 4;
				}
			}
		}

		if (choose == 1)
		{
			system("cls");
			menu1();
			break;
		}
		else if (choose == 2)
		{
			system("cls");
			choose2();
			break;
		}
		else if (choose == 3)
		{
			system("cls");
			Help1();
			break;
		}
		else if (choose == 4)
		{
			system("cls");
			bang_thoat();
			break;
		}
	}
}
void menu1()
{
	system("cls");
	int x = 68;
	int y = 10;
	SetColor(11);
	gotoXY(x + 25, y++);
	cout << ".-.";
	gotoXY(x + 25, y++);
	cout << "'-'";
	gotoXY(x + 24, y++);
	cout << "//";
	gotoXY(x + 23, y++);
	cout << "_..---._/|";
	gotoXY(x + 15, y++);
	cout << ".' .\"     '-.";
	gotoXY(x + 13, y++);
	cout << "/__/          \\      *";
	gotoXY(x + 11, y++);
	cout << "====_____     __|     :";
	gotoXY(x + 10, y++);
	cout << "/#   #\"\"\" |   /()\    :    ..*";
	gotoXY(x + 10, y++);
	cout << "|#   #    |   \\__/    : .''";
	gotoXY(x + 10, y++);
	cout << "\\#___#____|      /   :::.. .";
	gotoXY(x + 9, y++);
	cout << "\\______________|_...ä_: .. '*";
	SetColor(11);
	gotoXY(x + 2, y++);
	cout << "()       // /\\||||)))))))      '   . .";
	gotoXY(x + 1, y++);
	cout << ".( \\_     \\\\_\\//   _-'.'/        |   * ..";
	gotoXY(x, y++);
	cout << "( )  |^|^|^|ooo/  _#\\.//\"\"\"_ | . . .";
	gotoXY(x, y++);
	cout << "(_)_.'v|v|v|     / \#  \\_ / '_  _'    . .";
	gotoXY(x + 11, y++);
	cout << "| _ _/_/     /'./_-|\"         . .";
	gotoXY(x + 11, y++);
	cout << "/#_#__\"\"\" - ._ / #  \\__)       .  .";
	gotoXY(x + 11, y++);
	cout << "|__   \"\"-._ |##               . . .";
	gotoXY(x + 11, y++);
	cout << "|  \"\"|-\"\"\" - _ / ##              . .";
	gotoXY(x + 11, y++);
	cout << "/\"\"--\\__.-|                       .";
	gotoXY(x + 11, y++);
	cout << "\\-_.-<__ /                   .   .";
	gotoXY(x + 11, y++);
	cout << "/-_| /  \\";
	gotoXY(x + 11, y++);
	cout << "\\-_| \\_-<.                        .  .";
	gotoXY(x + 11, y++);
	cout << "<_-/ <_.-\\                    .";
	gotoXY(x + 11, y++);
	cout << "<_-|  |_.-|                        .";
	gotoXY(x + 6, y++);
	cout << ".----|   \\__\\  |                 .";
	gotoXY(x + 5, y++);
	cout << "|     .\"\"\"   '.  |                       .";
	gotoXY(x + 6, y++);
	cout << ".___|        |__|";
	string str;
	ifstream fi;
	int lines = 0;
	fi.open("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\namegame.txt", ios::in);
	SetColor(10);
	while (!fi.eof())
	{
		gotoXY(0, lines++);
		getline(fi, str);
		cout << str;
	}

	x = 4;
	y = 15;
	SetColor(6);
	gotoXY(x + 1, y);
	cout << "_______________________________________________________";
	gotoXY(x, y + 1);
	cout << "==| |  || |                                  |  ||  | |==";
	gotoXY(x, y + 2);
	cout << "==/ / // /            .One robot.            /  //  / /==";
	gotoXY(x, y + 3);
	cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";                 
	gotoXY(x, y + 4);
	cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
	gotoXY(x, y + 5);
	cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
	gotoXY(x +1, y + 6);
	cout << "==|_|__||_|___________________________________|_||___|_|==";
	int choose = 5;
	int k = 0;
	int x_phao = 68;
	int b = 0;
	while (true)
	{
		if (k % 40 != 0)
		{
			SetColor(13);
			gotoXY(x_phao + 34, 16);
			cout << "*";
			gotoXY(x_phao + 34, 15);
			cout << "*";
			gotoXY(x_phao + 38, 17);
			cout << "*";
			gotoXY(x_phao + 40, 18);
			cout << "*";
			gotoXY(x_phao + 32, 19);
			cout << "*";
			gotoXY(x_phao + 34, 20);
			cout << "*";
			gotoXY(x_phao + 40, 21);
			cout << "*";
			gotoXY(x_phao + 32, 22);
			cout << "*";
			gotoXY(x_phao + 34, 23);
			cout << "*";
			gotoXY(x_phao + 34, 24);
			cout << "*";
			gotoXY(x_phao + 40, 25);
			cout << "*";
			SetColor(14);
			gotoXY(x_phao + 36, 15);
			cout << "*";
			gotoXY(x_phao + 32, 16);
			cout << "*";
			gotoXY(x_phao + 39, 17);
			cout << "*";
			gotoXY(x_phao + 42, 18);
			cout << "*";
			gotoXY(x_phao + 31, 19);
			cout << "*";
			gotoXY(x_phao + 32, 20);
			cout << "*";
		}
		else
		{
			SetColor(13);
			gotoXY(x_phao + 34, 16);
			cout << " ";
			gotoXY(x_phao + 34, 15);
			cout << " ";
			gotoXY(x_phao + 38, 17);
			cout << " ";
			gotoXY(x_phao + 40, 18);
			cout << " ";
			gotoXY(x_phao + 32, 19);
			cout << " ";
			gotoXY(x_phao + 34, 20);
			cout << " ";
			gotoXY(x_phao + 40, 21);
			cout << " ";
			gotoXY(x_phao + 32, 22);
			cout << " ";
			gotoXY(x_phao + 34, 23);
			cout << " ";
			gotoXY(x_phao + 34, 24);
			cout << " ";
			gotoXY(x_phao + 40, 25);
			cout << " ";
			SetColor(14);
			gotoXY(x_phao + 36, 15);
			cout << " ";
			gotoXY(x_phao + 32, 16);
			cout << " ";
			gotoXY(x_phao + 39, 17);
			cout << " ";
			gotoXY(x_phao + 42, 18);
			cout << " ";
			gotoXY(x_phao + 31, 19);
			cout << " ";
			gotoXY(x_phao + 32, 20);
			cout << " ";
		}

		k++;
		if (_kbhit() == true)
		{
			c = _getch();
			if (c == -32)
			{
				c = _getch();
				if (c == 72)//dilen
				{
					b--;
				}
				else if (c == 80)//di xuong
				{
					b++;
				}
			}
			if (c == 'w')
			{
				b--;
			}
			if (c == 's')
			{
				b++;
			}
			if (b < 1)
				b = 4;
			else if (b > 4)
				b = 1;
			if (b == 1)
			{
				gotoXY(x + 1, y);
				cout << "_______________________________________________________";
				gotoXY(x, y + 1);
				cout << "==| |  || |                                  |  ||  | |==";
				gotoXY(x, y + 2);
				cout << "==/ / // /            .One robot.            /  //  / /==";
				gotoXY(x, y + 3);
				cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";
				gotoXY(x, y + 4);
				cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
				gotoXY(x, y + 5);
				cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
				gotoXY(x + 1, y + 6);
				cout << "==|_|__||_|___________________________________|_||___|_|==";
				SetColor(11);
				gotoXY(x + 16 + 7, y + 2);
				cout << "One robot";
			}
			else if (b == 2)
			{
				gotoXY(x + 1, y);
				cout << "_______________________________________________________";
				gotoXY(x, y + 1);
				cout << "==| |  || |                                  |  ||  | |==";
				gotoXY(x, y + 2);
				cout << "==/ / // /            .One robot.            /  //  / /==";
				gotoXY(x, y + 3);
				cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";
				gotoXY(x, y + 4);
				cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
				gotoXY(x, y + 5);
				cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
				gotoXY(x + 1, y + 6);
				cout << "==|_|__||_|___________________________________|_||___|_|==";
				SetColor(11);
				gotoXY(x + 16 + 7, y + 3);
				cout << "Two robot";

			}
			else if (b == 3)
			{
				gotoXY(x + 1, y);
				cout << "_______________________________________________________";
				gotoXY(x, y + 1);
				cout << "==| |  || |                                  |  ||  | |==";
				gotoXY(x, y + 2);
				cout << "==/ / // /            .One robot.            /  //  / /==";
				gotoXY(x, y + 3);
				cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";
				gotoXY(x, y + 4);
				cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
				gotoXY(x, y + 5);
				cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
				gotoXY(x + 1, y + 6);
				cout << "==|_|__||_|___________________________________|_||___|_|==";
				SetColor(11);
				gotoXY(x + 16 + 7, y + 4);
				cout << "PvP robot";
			}
			else if (b == 4)
			{
				gotoXY(x + 1, y);
				cout << "_______________________________________________________";
				gotoXY(x, y + 1);
				cout << "==| |  || |                                  |  ||  | |==";
				gotoXY(x, y + 2);
				cout << "==/ / // /            .One robot.            /  //  / /==";
				gotoXY(x, y + 3);
				cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";
				gotoXY(x, y + 4);
				cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
				gotoXY(x, y + 5);
				cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
				gotoXY(x + 1, y + 6);
				cout << "==|_|__||_|___________________________________|_||___|_|==";
				SetColor(11);
				gotoXY(x + 16 + 9, y + 5);
				cout << "Back";
			}
			if (c == '\r')
			{
				if (b == 1)
				{
					SetColor(6);
					gotoXY(x, y + 2);
					cout << "==/ / // /            .One robot.            /  //  / /==";
					gotoXY(x, y + 3);
					cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";
					gotoXY(x, y + 4);
					cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
					gotoXY(x, y + 5);
					cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
					SetColor(11);
					choose = 6;
				}
				else if (b == 2)
				{
					SetColor(6);
					gotoXY(x, y + 2);
					cout << "==/ / // /            .One robot.            /  //  / /==";
					gotoXY(x, y + 3);
					cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";
					gotoXY(x, y + 4);
					cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
					gotoXY(x, y + 5);
					cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
					SetColor(11);
					choose = 7;

				}
				else if (b == 3)
				{
					SetColor(6);
					gotoXY(x, y + 2);
					cout << "==/ / // /            .One robot.            /  //  / /==";
					gotoXY(x, y + 3);
					cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";
					gotoXY(x, y + 4);
					cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
					gotoXY(x, y + 5);
					cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
					SetColor(11);
					choose = 8;
				}
				else if (b == 4)
				{
					SetColor(6);
					gotoXY(x, y + 2);
					cout << "==/ / // /            .One robot.            /  //  / /==";
					gotoXY(x, y + 3);
					cout << " ==\\ \\ \\\\ \\           .Two robot.            \\ \\\  \\ \\==";
					gotoXY(x, y + 4);
					cout << "==\\ \\ \\\ \\             .PvP robot.            \\ \\\\   \\ \\==";
					gotoXY(x, y + 5);
					cout << "==\\  \\ \\\\ \\             .Back.               \\ \\\\   \\ \\==";
					choose = 9;
				}
			}
		}

		if (choose == 6)
		{
			system("cls");
			ShowCur(0);
			onerobotplay();
			break;
		}
		else if (choose == 7)
		{
			system("cls");
			TwoRobotPlay();
			break;
		}
		else if (choose == 8)
		{
			system("cls");
			baRobotPlay();
			break;
		}
		else if (choose == 9)
		{
			system("cls");
			menu();
			break;
		}
	}
}



void onerobotplay()
{
	bangGame();
	SetColor(15);
	int arr[Max][Max];
	int ar[Max][Max];
	int array[Max][Max];
	int x, y, a, solandichuyen;
	a = 0;
	solandichuyen = 0;
	ranSo(arr, ar, array);
	gotoXY(1, 12);
	cout << "Moi Nhap Toa Do X";
	gotoXY(10, 5);
	cin >> x;
	while (x > 19 or x < 0) {
		gotoXY(10, 5);
		cout << "    ";
		gotoXY(10, 5);
		cin >> x;

	}
	gotoXY(1, 14);
	cout << "Moi Nhap Toa Do Y";
	gotoXY(10, 6);
	cin >> y;
	while (y > 13 or y < 0) {
		gotoXY(10, 6);
		cout << "    ";
		gotoXY(10, 6);
		cin >> y;
	}
	SetColor(14);
	gotoXY(x * 4 + 20, y * 2 + 1);
	cout << "1_1";
	SetColor(15);
	Sleep(500);
	gotoXY(101, 12);
	cout << "      Null       ";
	gotoXY(101, 14);
	cout << "      Null       ";
	gotoXY(109, 20);
	cout << " X";
	gotoXY(109, 21);
	cout << " X";
	gotoXY(107, 23);
	cout << "XXXXX";
	gotoXY(114, 25);
	cout << "XXXX";
	moveAAA(arr, ar, x, y, a, solandichuyen);
	gotoXY(1, 27);
	SetColor(15);
	cout << "  Press any key";
	gotoXY(101, 27);
	cout << "   to continue";
	_getch();
	system("cls");
	ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt", ios::app);
	outFile << "\nSo lan robot da duy chuyen la: " << solandichuyen;
	outFile << "\nDiem bat dau cua robot la: " << "\t" << x << "," << y << "\tvoi gia tri bang: " << setfill('0') << setw(3) << ar[y][x];
	outFile << "\nSo diem cua robot la: " << a;
	outFile.close();
	ifstream inFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt");
	if (!inFile)
	{
		cout << "Failed to open the input file." << endl;
	}
	string line;
	while (getline(inFile, line))
	{
		cout << line << endl;
	}

	inFile.close();
	SetColor(14);
	gotoXY(80, 26);
	cout << "Do you want to play again? (Y/N)";
	int chose = 0;
	while (true) {
		if (_kbhit() == true)
		{
			char select = _getch();
			if (select == 'n')
			{
				SetColor(11);
				menu();
				break;
			}
			else if (select == 'y')
			{
				system("cls");
				onerobotplay();
				break;
			}
		}
	}
}

void moveAAA(int arr[Max][Max], int ar[Max][Max], int x, int y, int& a, int& solandichuyen)
{
	solandichuyen = 0;
	ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt", ios::trunc);
	outFile << "Cac diem ma robot 1 da di qua la:" << endl;
	outFile.close();
	SetColor(15);
	int spead1;
	gotoXY(1, 12);
	cout << "                 ";
	gotoXY(1, 14);
	cout << "                 ";
	gotoXY(1, 12);
	cout << " Moi Nhap toc do ";
	gotoXY(1, 14);
	cout << "    Cho Robot    ";
	gotoXY(14, 10);
	cin >> spead1;
	while (spead1 < 0) {
		gotoXY(10, 5);
		cout << "    ";
		gotoXY(10, 5);
		cin >> spead1;

	}
	SetColor(14);
	Sleep(1000);
	gotoXY(101, 12);
	cout << "                 ";
	gotoXY(101, 14);
	cout << "                 ";
	gotoXY(1, 12);
	cout << "                 ";
	gotoXY(1, 14);
	cout << "                 ";
	gotoXY(101, 13);
	cout << "--------3--------";
	gotoXY(1, 13);
	cout << "--------3--------";
	Sleep(1000);
	gotoXY(1, 13);
	cout << "--------2--------";
	gotoXY(101, 13);
	cout << "--------2--------";
	Sleep(1000);
	gotoXY(101, 13);
	cout << "--------1--------";
	gotoXY(1, 13);
	cout << "--------1--------";
	Sleep(1000);
	gotoXY(101, 13);
	cout << "--------0--------";
	gotoXY(1, 13);
	cout << "--------0--------";
	Sleep(1000);
	gotoXY(1, 13);
	cout << "--Game Started--";
	gotoXY(101, 13);
	cout << "--Game Started--";
	int currentX = x;
	int currentY = y;
	arr[currentY][currentX] = -1;
	while (true)
	{
		// Kiểm tra các số xung quanh AAA và tìm số lớn nhất
		int maxNumber = arr[currentY][currentX];
		int maxX = currentX;
		int maxY = currentY;

		// Kiểm tra số trên
		if (currentY > 0 && arr[currentY - 1][currentX] > maxNumber)
		{
			maxNumber = arr[currentY - 1][currentX];
			maxX = currentX;
			maxY = currentY - 1;
		}

		// Kiểm tra số dưới
		if (currentY < 13 && arr[currentY + 1][currentX] > maxNumber)
		{
			maxNumber = arr[currentY + 1][currentX];
			maxX = currentX;
			maxY = currentY + 1;
		}

		// Kiểm tra số bên trái
		if (currentX > 0 && arr[currentY][currentX - 1] > maxNumber)
		{
			maxNumber = arr[currentY][currentX - 1];
			maxX = currentX - 1;
			maxY = currentY;
		}

		// Kiểm tra số bên phải
		if (currentX < 19 && arr[currentY][currentX + 1] > maxNumber)
		{
			maxNumber = arr[currentY][currentX + 1];
			maxX = currentX + 1;
			maxY = currentY;
		}

		// Di chuyển AAA đến số lớn nhất
		gotoXY(currentX * 4 + 20, currentY * 2 + 1);
		cout << "1-1";
		currentX = maxX;
		currentY = maxY;
		// Hiển thị AAA tại vị trí mới
		gotoXY(currentX * 4 + 20, currentY * 2 + 1);
		SetColor(12);
		cout << "1_1";
		SetColor(14);

		// Kiểm tra xem AAA đã đi qua số đó chưa
		if (arr[currentY][currentX] == -1)
		{
			break;
		}
		else
		{
			solandichuyen += 1;
			ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt", ios::app);
			outFile << setfill('0') << setw(3) << arr[currentY][currentX] << " ";
			outFile.close();
			arr[currentY][currentX] = -1; // Đánh dấu số đã đi qua
			a = a + ar[currentY][currentX];//tổng điểm
			SetColor(10);
			gotoXY(7, 8);
			cout << a;
			SetColor(14);
		}
		Sleep(spead1);
	}

}


void moveBBB(int array[Max][Max], int arr[Max][Max], int ar[Max][Max], int z, int t, int& b, int& solandichuyenrobot2, int trungnhau[Max], int& inracacsotrungnhau)
{
	inracacsotrungnhau = 0;
	ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt", ios::app);
	outFile << "\nCac diem ma robot 2 da di qua la:" << endl;
	outFile.close();
	int spead2;
	gotoXY(101, 12);
	cout << "                 ";
	gotoXY(101, 14);
	cout << "                 ";
	gotoXY(101, 12);
	cout << " Moi Nhap toc do ";
	gotoXY(101, 14);
	cout << "    Cho Robot    ";
	gotoXY(114, 25);
	cout << "    ";
	gotoXY(114, 25);
	cin >> spead2;
	while (spead2 < 0) {
		gotoXY(114, 5);
		cout << "    ";
		gotoXY(114, 5);
		cin >> spead2;

	}
	SetColor(14);
	Sleep(1000);
	gotoXY(101, 12);
	cout << "                 ";
	gotoXY(101, 14);
	cout << "                 ";
	gotoXY(1, 12);
	cout << "                 ";
	gotoXY(1, 14);
	cout << "                 ";
	gotoXY(101, 13);
	cout << "--------3--------";
	gotoXY(1, 13);
	cout << "--------3--------";
	Sleep(1000);
	gotoXY(1, 13);
	cout << "--------2--------";
	gotoXY(101, 13);
	cout << "--------2--------";
	Sleep(1000);
	gotoXY(101, 13);
	cout << "--------1--------";
	gotoXY(1, 13);
	cout << "--------1--------";
	Sleep(1000);
	gotoXY(101, 13);
	cout << "--------0--------";
	gotoXY(1, 13);
	cout << "--------0--------";
	Sleep(1000);
	gotoXY(1, 13);
	cout << "--Game Started--";
	gotoXY(101, 13);
	cout << "--Game Started--";
	solandichuyenrobot2 = 0;
	int currentX = z;
	int currentY = t;
	array[currentY][currentX] = -2;
	if (arr[currentY][currentX] == -1)
	{
		SetColor(9);
		inracacsotrungnhau += 1;
		trungnhau[inracacsotrungnhau] = ar[currentY][currentX];
	}
	else
	{
		SetColor(13);
	}

	while (true)
	{
		// Kiểm tra các số xung quanh BBB và tìm số lớn nhất
		int maxNumber = array[currentY][currentX];
		int maxX = currentX;
		int maxY = currentY;

		// Kiểm tra số trên
		if (currentY > 0 && array[currentY - 1][currentX] > maxNumber)
		{
			maxNumber = array[currentY - 1][currentX];
			maxX = currentX;
			maxY = currentY - 1;
		}

		// Kiểm tra số dưới
		if (currentY < 13 && array[currentY + 1][currentX] > maxNumber)
		{
			maxNumber = array[currentY + 1][currentX];
			maxX = currentX;
			maxY = currentY + 1;
		}

		// Kiểm tra số bên trái
		if (currentX > 0 && array[currentY][currentX - 1] > maxNumber)
		{
			maxNumber = array[currentY][currentX - 1];
			maxX = currentX - 1;
			maxY = currentY;
		}

		// Kiểm tra số bên phải
		if (currentX < 19 && array[currentY][currentX + 1] > maxNumber)
		{
			maxNumber = array[currentY][currentX + 1];
			maxX = currentX + 1;
			maxY = currentY;
		}

		// Di chuyển AAA đến số lớn nhất
		gotoXY(currentX * 4 + 20, currentY * 2 + 1);
		if (arr[currentY][currentX] != -1)
		{
			cout << "2-2";
		}
		else
		{
			cout << "1-2";
		}
		currentX = maxX;
		currentY = maxY;
		// Hiển thị AAA tại vị trí mới
		gotoXY(currentX * 4 + 20, currentY * 2 + 1);
		SetColor(10);
		cout << "2_2";
		SetColor(13);

		// Kiểm tra xem AAA đã đi qua số đó chưa
		if (array[currentY][currentX] == -2)
		{
			break;
		}
		else
		{
			if (arr[currentY][currentX] != -1)
			{

				solandichuyenrobot2 += 1;
				ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt", ios::app);
				outFile << setfill('0') << setw(3) << array[currentY][currentX] << " ";
				outFile.close();
				array[currentY][currentX] = -2; // Đánh dấu số đã đi qua
				b = b + ar[currentY][currentX];//tổng điểm
				SetColor(10);
				gotoXY(107, 23);
				cout << b;
				SetColor(13);
			}
			else
			{
				solandichuyenrobot2 += 1;
				inracacsotrungnhau += 1;
				ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt", ios::app);
				outFile << setfill('0') << setw(3) << array[currentY][currentX] << " ";
				outFile.close();
				array[currentY][currentX] = -2; // Đánh dấu số đã đi qua
				b = b + ar[currentY][currentX]; //tổng điểm
				SetColor(10);
				gotoXY(107, 23);
				cout << b;
				SetColor(9);
				trungnhau[inracacsotrungnhau] = ar[currentY][currentX];
			}
		}
		Sleep(spead2);
	}
}


void bangGame()
{
	char c = 205;
	char b = 203;

	for (int x = 0; x < 119; x++)
	{
		Sleep(10);
		if (x < 19 || x > 99)
		{
			SetColor(12);
		}
		if (x >= 19 && x <= 99)
		{
			SetColor(4);
		}

		for (int y = 0; y <= 28; y += 1)
		{
			if (x > 0 && x < 118)
			{
				if ((x < 18 || x > 100) && (y == 0 || y == 28))
				{
					gotoXY(x, y);
					cout << c;
				}
				else if (x > 18 && x < 100 && (x + 1) % 4 != 0 && y % 2 == 0)
				{
					gotoXY(x, y);
					cout << c;
				}
			}
			if (x == 18 || x == 100)
			{
				if (y == 0 && x == 18)
				{
					gotoXY(x, y);
					cout << char(187);
				}
				if (y == 0 && x == 100)
				{
					gotoXY(x, y);
					cout << char(201);
				}
				if (y == 28 && x == 18)
				{
					gotoXY(x, y);
					cout << char(188);
				}
				if (y == 28 && x == 100)
				{
					gotoXY(x, y);
					cout << char(200);
				}
				if (y > 0 && y < 28)
				{
					gotoXY(x, y);
					cout << char(186);
				}
			}
			if (x == 0)
			{
				if (y == 0)
				{
					gotoXY(0, y);
					cout << char(201);
				}
				if (y > 0 && y < 29)
				{
					gotoXY(0, y);
					cout << char(186);
				}
				if (y == 28)
				{
					gotoXY(0, y);
					cout << char(200);
				}
			}
			if (x == 118)
			{
				if (y == 0)
				{
					gotoXY(118, y);
					cout << char(187);
				}
				if (y > 0 && y < 28)
				{
					gotoXY(118, y);
					cout << char(186);
				}
				if (y == 28)
				{
					gotoXY(118, y);
					cout << char(188);
				}
			}
			if ((x >= 19 && x <= 100))
			{
				if (x > 18 && x < 100 && (x + 1) % 4 == 0)
				{
					if (x == 19 && y == 0)
					{
						gotoXY(x, y);
						cout << char(201);
					}
					if (x == 99 && y == 0)
					{
						gotoXY(x, y);
						cout << char(187);
					}
					if (x == 19 && y == 28)
					{
						gotoXY(x, y);
						cout << char(200);
					}
					if (x == 99 && y == 28)
					{
						gotoXY(x, y);
						cout << char(188);
					}
					if (y == 0 && x != 19 && x != 99)
					{
						gotoXY(x, y);
						cout << char(203);
					}
					if (y > 0 && y % 2 != 0)
					{
						gotoXY(x, y);
						cout << char(186);
					}
					if (x > 19 && x < 99 && y > 0 && y % 2 == 0 && y != 28)
					{
						gotoXY(x, y);
						cout << char(206);
					}
					if (x == 19 && y > 0 && y % 2 == 0 && y != 28)
					{
						gotoXY(x, y);
						cout << char(204);
					}
					if (x == 99 && y > 0 && y % 2 == 0 && y != 28)
					{
						gotoXY(x, y);
						cout << char(185);
					}
					if (x >= 19 && x <= 99 && y == 28 && x != 19 && x != 99)
					{
						gotoXY(x, y);
						cout << char(202);
					}
				}
			}
		}
	}
	SetColor(11);
	gotoXY(6, 1);
	cout << "Robot-1";
	gotoXY(6, 2);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
	gotoXY(7, 3);
	cout << char(186) << "1_1" << char(186);
	gotoXY(4, 4);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
	for (int i = 1; i <= 4; i++)
	{
		gotoXY(4, 4 + i);
		cout << char(186);
		gotoXY(14, 4 + i);
		cout << char(186);
	}
	gotoXY(3, 9);
	cout << '_' << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << '_';
	gotoXY(0, 11);
	SetColor(12);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);
	gotoXY(0, 13);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);
	gotoXY(0, 15);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);
	gotoXY(7, 5);
	SetColor(11);
	cout << "X:";
	gotoXY(7, 6);
	cout << "Y:";
	gotoXY(6, 7);
	cout << "Score";
	gotoXY(1, 16);
	cout << "\\\\";
	gotoXY(1, 17);
	cout << "(o>";
	gotoXY(1, 18);
	cout << "(()_         _())";
	gotoXY(1, 19);
	cout << "||             ||";
	gotoXY(1, 20);
	cout << "   \\\\       //   ";
	gotoXY(1, 21);
	cout << "   (o>     <o)   ";
	gotoXY(1, 22);
	cout << "\\\\_//)     (\\\\_//";
	gotoXY(1, 23);
	cout << " \\_/_)     (_\\_/ ";
	gotoXY(1, 24);
	cout << "  _|_       _|_  ";
	gotoXY(16, 16);
	cout << "//";
	gotoXY(15, 17);
	cout << "<o)";
	gotoXY(0, 26);
	SetColor(12);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);

	SetColor(11);
	gotoXY(101, 1);
	cout << "\\\\";
	gotoXY(101, 2);
	cout << "(o>";
	gotoXY(101, 3);
	cout << "(()_         _())";
	gotoXY(101, 4);
	cout << "||             ||";
	gotoXY(101, 5);
	cout << "   \\\\       //   ";
	gotoXY(101, 6);
	cout << "   (o>     <o)   ";
	gotoXY(101, 7);
	cout << "\\\\_//)     (\\\\_//";
	gotoXY(101, 8);
	cout << " \\_/_)     (_\\_/ ";
	gotoXY(101, 9);
	cout << "  _|_       _|_  ";
	gotoXY(116, 1);
	cout << "//";
	gotoXY(115, 2);
	cout << "<o)";
	gotoXY(100, 11);
	SetColor(12);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);
	gotoXY(100, 13);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);
	gotoXY(100, 15);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);
	SetColor(11);
	gotoXY(106, 16);
	cout << "Robot-2";
	gotoXY(106, 17);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
	gotoXY(107, 18);
	cout << char(186) << "2_2" << char(186);
	gotoXY(104, 19);
	cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187);
	for (int i = 1; i <= 4; i++)
	{
		gotoXY(104, 19 + i);
		cout << char(186);
		gotoXY(114, 19 + i);
		cout << char(186);
	}
	gotoXY(103, 24);
	cout << '_' << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << '_';
	gotoXY(100, 26);
	SetColor(12);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);
	gotoXY(107, 20);
	SetColor(11);
	cout << "X:";
	gotoXY(107, 21);
	cout << "Y:";
	gotoXY(106, 22);
	cout << "Score";
	SetColor(10);
	gotoXY(7, 16);
	cout << "ROBOT";
	gotoXY(5, 17);
	cout << "SIMULATOR";
	gotoXY(107, 1);
	cout << "ROBOT";
	gotoXY(105, 2);
	cout << "SIMULATOR";
	SetColor(11);
	gotoXY(102, 25);
	cout << "Speed (ms): ";
	gotoXY(2, 10);
	cout << "Speed (ms): ";

}
void ranSo(int arr[Max][Max], int ar[Max][Max], int array[Max][Max]) {
	srand(time(NULL));
	int n = 14, m = 20;
	map<int, bool>vis;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			do {
				arr[i][j] = rand() % (280 - 0 + 1) + 0;
			} while (vis.find(arr[i][j]) != vis.end());
			vis[arr[i][j]] = true;
		}
	}
	int x = 20;
	int y = 1;
	int i = 0;
	do {
		for (int j = 0; j < m; j++)
		{
			gotoXY(x, y);
			cout << setfill('0') << setw(3) << arr[i][j];
			x += 4;
		}
		x = 20;
		y += 2;
		i += 1;
	} while (i < n);

	for (int k = 0; k < n; k++) {
		for (int l = 0; l < m; l++) {
			ar[k][l] = arr[k][l];
			array[k][l] = arr[k][l];
		}
	}
	for (int i = 1; i < 2; i++)
	{
		ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\tableGame\\tableGame\\tepranso.txt", ios::trunc);
		outFile << "14  20" << endl;
		outFile.close();
	}
	for (int i = 1; i < 2; i++)
	{
		ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\tableGame\\tableGame\\tepranso.txt", ios::app);
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[0][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[1][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[2][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[3][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[4][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[5][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[6][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[7][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[8][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[9][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[10][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[11][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[12][l] << " ";
		}
		outFile << endl;
		for (int l = 0; l < m; l++)
		{
			outFile << setfill('0') << setw(3) << arr[13][l] << " ";
		}
		outFile.close();
	}
}











void TwoRobotPlay()
{
	int inracacsotrungnhau = 0;
	bangGame();
	SetColor(15);
	int trungnhau[Max];
	int arr[Max][Max];
	int ar[Max][Max];
	int array[Max][Max];
	int x, y, a, solandichuyen, z, t, b, solandichuyenrobot2;
	a = 0;
	b = 0;
	solandichuyen = 0;
	ranSo(arr, ar, array);
	gotoXY(1, 12);
	cout << "Moi Nhap Toa Do X";
	gotoXY(10, 5);
	cin >> x;
	while (x > 19 or x < 0)
	{
		gotoXY(10, 5);
		cout << "    ";
		gotoXY(10, 5);
		cin >> x;

	}
	gotoXY(1, 14);
	cout << "Moi Nhap Toa Do Y";
	gotoXY(10, 6);
	cin >> y;
	while (y > 13 or y < 0)
	{
		gotoXY(10, 6);
		cout << "    ";
		gotoXY(10, 6);
		cin >> y;
	}
	SetColor(14);
	gotoXY(x * 4 + 20, y * 2 + 1);
	cout << "1_1";
	SetColor(15);
	Sleep(500);
	gotoXY(101, 12);
	cout << "      Null       ";
	gotoXY(101, 14);
	cout << "      Null       ";
	gotoXY(109, 20);
	cout << " X";
	gotoXY(109, 21);
	cout << " X";
	gotoXY(107, 23);
	cout << "XXXXX";
	gotoXY(114, 25);
	cout << "XXXX";
	moveAAA(arr, ar, x, y, a, solandichuyen);
	Sleep(3000);
	gotoXY(107, 23);
	cout << "     ";
	gotoXY(100, 13);
	SetColor(12);
	cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185);
	SetColor(15);
	gotoXY(101, 12);
	cout << "Moi Nhap Toa Do X";
	gotoXY(110, 20);
	cin >> z;
	while (z > 19 or z < 0 )
	{
		gotoXY(109, 20);
		cout << "    ";
		gotoXY(110, 20);
		cin >> z;

	}
	gotoXY(101, 14);
	cout << "Moi Nhap Toa Do Y";
	gotoXY(110, 21);
	cin >> t;
	while (t > 13 or t < 0 )
	{
		gotoXY(109, 21);
		cout << "    ";
		gotoXY(110, 21);
		cin >> t;
	}
	while (x == z and y == t)
	{
		gotoXY(101, 14);
		cout << "                 ";
		gotoXY(109, 20);
		cout << " X";
		gotoXY(109, 21);
		cout << " X";
		gotoXY(107, 23);
		SetColor(15);
		gotoXY(101, 12);
		cout << "Moi Nhap Toa Do X";
		gotoXY(110, 20);
		cin >> z;
		while (z > 19 or z < 0)
		{
			gotoXY(109, 20);
			cout << "    ";
			gotoXY(110, 20);
			cin >> z;

		}
		gotoXY(101, 14);
		cout << "Moi Nhap Toa Do Y";
		gotoXY(110, 21);
		cin >> t;
		while (t > 13 or t < 0)
		{
			gotoXY(109, 21);
			cout << "    ";
			gotoXY(110, 21);
			cin >> t;
		}
	}
	SetColor(10);
	gotoXY(z * 4 + 20, t * 2 + 1);
	cout << "2_2";
	SetColor(15);
	moveBBB(array, arr, ar, z, t, b, solandichuyenrobot2, trungnhau, inracacsotrungnhau);
	ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt", ios::app);
	outFile << "\nDiem bat dau cua robot 1 la: " << "\t" << x << "," << y << "\tvoi gia tri bang: " << setfill('0') << setw(3) << ar[y][x];
	outFile << "\nDiem bat dau cua robot 2 la: " << "\t" << z << "," << t << "\tvoi gia tri bang: " << setfill('0') << setw(3) << ar[t][z];
	outFile << "\nSo diem cua robot 1 la: " << a << "\nSo diem cua robot 2 la: " << b;
	if (a > b)
	{
		outFile << "\n\t\tSo diem cua robot 1 > So diem cua robot 2 ";
	}
	else if (a < b)
	{
		outFile << "\n\t\tSo diem cua robot 1 < So diem cua robot 2 ";
	}
	else if (a = b)
	{
		outFile << "\n\t\tSo diem cua robot 1 = So diem cua robot 2 ";
	}
	outFile << "\nCac so trung nhau la:\n";
	if (inracacsotrungnhau == 0)
	{
		outFile << "khong co so trung nhau";
	}
	else
	{
		for (int abc = 1; abc <= inracacsotrungnhau; abc++)
		{
			outFile << setfill('0') << setw(3) << trungnhau[abc] << " ";
		}
	}
	outFile.close();
	gotoXY(1, 27);
	SetColor(15);
	cout << "  Press any key";
	gotoXY(101, 27);
	cout << "   to continue";
	_getch();
	system("cls");
	SetColor(15);
	ifstream inFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt");
	if (!inFile)
	{
		cout << "Failed to open the input file." << endl;
	}
	string line;
	while (getline(inFile, line))
	{
		cout << line << endl;
	}
	inFile.close();
	SetColor(14);
	gotoXY(80, 26);
	cout << "Do you want to play again? (Y/N)";
	int chose = 0;
	while (true) {
		if (_kbhit() == true)
		{
			char select = _getch();
			if (select == 'n')
			{
				SetColor(11);
				menu();
				break;
			}
			else if (select == 'y')
			{
				system("cls");
				TwoRobotPlay();
				break;
			}
		}
	}
}

void baRobotPlay()
{
	int inracacsotrungnhau = 0;
	bangGame();
	SetColor(15);
	int arr[Max][Max];
	int ar[Max][Max];
	int array[Max][Max];
	int robo1di[Max];
	int robot2di[Max];
	int x, y, a, solandichuyen, z, t, b, solandichuyenrobot2;
	a = 0;
	b = 0;
	solandichuyen = 0;
	ranSo(arr, ar, array);
	gotoXY(1, 12);
	cout << "Moi Nhap Toa Do X";
	gotoXY(10, 5);
	cin >> x;
	while (x > 19 or x < 0)
	{
		gotoXY(10, 5);
		cout << "    ";
		gotoXY(10, 5);
		cin >> x;

	}
	gotoXY(1, 14);
	cout << "Moi Nhap Toa Do Y";
	gotoXY(10, 6);
	cin >> y;
	while (y > 13 or y < 0)
	{
		gotoXY(10, 6);
		cout << "    ";
		gotoXY(10, 6);
		cin >> y;
	}
	SetColor(12);
	gotoXY(x * 4 + 20, y * 2 + 1);
	cout << "1_1";
	SetColor(15);
	int spead2;
	int spead1;
	gotoXY(1, 12);
	cout << "                 ";
	gotoXY(1, 14);
	cout << "                 ";
	gotoXY(1, 12);
	cout << " Moi Nhap toc do ";
	gotoXY(1, 14);
	cout << "   Cho Robot 1   ";
	gotoXY(14, 10);
	cin >> spead1;
	while (spead1 < 0) {
		gotoXY(10, 5);
		cout << "    ";
		gotoXY(10, 5);
		cin >> spead1;

	}
	gotoXY(101, 12);
	cout << "Moi Nhap Toa Do X";
	gotoXY(110, 20);
	cin >> z;
	while (z > 19 or z < 0)
	{
		gotoXY(109, 20);
		cout << "    ";
		gotoXY(110, 20);
		cin >> z;

	}
	gotoXY(101, 14);
	cout << "Moi Nhap Toa Do Y";
	gotoXY(110, 21);
	cin >> t;
	while (t > 13 or t < 0)
	{
		gotoXY(109, 21);
		cout << "    ";
		gotoXY(110, 21);
		cin >> t;
	}
	while (x == z and y == t)
	{
		gotoXY(101, 14);
		cout << "                 ";
		gotoXY(109, 20);
		cout << " X";
		gotoXY(109, 21);
		cout << " X";
		gotoXY(107, 23);
		SetColor(15);
		gotoXY(101, 12);
		cout << "Moi Nhap Toa Do X";
		gotoXY(110, 20);
		cin >> z;
		while (z > 19 or z < 0)
		{
			gotoXY(109, 20);
			cout << "    ";
			gotoXY(110, 20);
			cin >> z;

		}
		gotoXY(101, 14);
		cout << "Moi Nhap Toa Do Y";
		gotoXY(110, 21);
		cin >> t;
		while (t > 13 or t < 0)
		{
			gotoXY(109, 21);
			cout << "    ";
			gotoXY(110, 21);
			cin >> t;
		}
	}
	SetColor(10);
	gotoXY(z * 4 + 20, t * 2 + 1);
	cout << "2_2";
	SetColor(15);
	gotoXY(101, 12);
	cout << "                 ";
	gotoXY(101, 14);
	cout << "                 ";
	gotoXY(101, 12);
	cout << " Moi Nhap toc do ";
	gotoXY(101, 14);
	cout << "   Cho Robot 2   ";
	gotoXY(114, 25);
	cout << "    ";
	gotoXY(114, 25);
	cin >> spead2;
	while (spead2 < 0) {
		gotoXY(114, 5);
		cout << "    ";
		gotoXY(114, 5);
		cin >> spead2;

	}
	moveCCC(arr, ar, x, y, a, solandichuyen, z, t, b, solandichuyenrobot2, robo1di, robot2di,spead2,spead1);
	gotoXY(1, 27);
	SetColor(15);
	cout << "  Press any key";
	gotoXY(101, 27);
	cout << "   to continue";
	_getch();
	system("cls");
	SetColor(15);
	ifstream inFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt");
	if (!inFile)
	{
		cout << "Failed to open the input file." << endl;
	}
	string line;
	while (getline(inFile, line))
	{
		cout << line << endl;
	}
	inFile.close();
	SetColor(14);
	gotoXY(80, 26);
	cout << "Do you want to play again? (Y/N)";
	int chose = 0;
	while (true) {
		if (_kbhit() == true)
		{
			char select = _getch();
			if (select == 'n')
			{
				SetColor(11);
				menu();
				break;
			}
			else if (select == 'y')
			{
				system("cls");
				baRobotPlay();
				break;
			}
		}
	}
	delete[] robo1di;
	delete[] robot2di;
}

void moveCCC(int arr[Max][Max], int ar[Max][Max], int x, int y, int& a, int& solandichuyen, int z, int t, int& b, int& solandichuyenrobot2, int* robo1di, int* robot2di,int spead2, int spead1)
{
	solandichuyen = 0;
	solandichuyenrobot2 = 0;
	SetColor(14);
	Sleep(1000);
	gotoXY(101, 12);
	cout << "                 ";
	gotoXY(101, 14);
	cout << "                 ";
	gotoXY(1, 12);
	cout << "                 ";
	gotoXY(1, 14);
	cout << "                 ";
	gotoXY(101, 13);
	cout << "--------3--------";
	gotoXY(1, 13);
	cout << "--------3--------";
	Sleep(1000);
	gotoXY(1, 13);
	cout << "--------2--------";
	gotoXY(101, 13);
	cout << "--------2--------";
	Sleep(1000);
	gotoXY(101, 13);
	cout << "--------1--------";
	gotoXY(1, 13);
	cout << "--------1--------";
	Sleep(1000);
	gotoXY(101, 13);
	cout << "--------0--------";
	gotoXY(1, 13);
	cout << "--------0--------";
	Sleep(1000);
	gotoXY(1, 13);
	cout << "--Game Started--";
	gotoXY(101, 13);
	cout << "--Game Started--";
	int currentX = x;
	int currentY = y;
	arr[currentY][currentX] = -1;
	int currentZ = z; //XXXXXXX
	int currentT = t; //YYYYYYY
	arr[currentT][currentZ] = -1;
	int stop2 = 0;
	int stop1 = 0;
	int stopnew = 1;
	int thoatvonglap1 = 0;
	int  thoatvonglap2 = 0;
	while (true)
	{
		//robot 1 +++++++++++++++++++++++++++++++++++++++++
		// Kiểm tra các số xung quanh AAA và tìm số lớn nhất
		if (thoatvonglap1 != 1)
		{
			Sleep(spead1);
		}
		while (stop1 < stopnew)
		{
			SetColor(14);
			int maxNumber = arr[currentY][currentX];
			int maxX = currentX;
			int maxY = currentY;

			// Kiểm tra số trên
			if (currentY > 0 && arr[currentY - 1][currentX] > maxNumber)
			{
				maxNumber = arr[currentY - 1][currentX];
				maxX = currentX;
				maxY = currentY - 1;
			}

			// Kiểm tra số dưới
			if (currentY < 13 && arr[currentY + 1][currentX] > maxNumber)
			{
				maxNumber = arr[currentY + 1][currentX];
				maxX = currentX;
				maxY = currentY + 1;
			}

			// Kiểm tra số bên trái
			if (currentX > 0 && arr[currentY][currentX - 1] > maxNumber)
			{
				maxNumber = arr[currentY][currentX - 1];
				maxX = currentX - 1;
				maxY = currentY;
			}

			// Kiểm tra số bên phải
			if (currentX < 19 && arr[currentY][currentX + 1] > maxNumber)
			{
				maxNumber = arr[currentY][currentX + 1];
				maxX = currentX + 1;
				maxY = currentY;
			}

			// Di chuyển AAA đến số lớn nhất
			gotoXY(currentX * 4 + 20, currentY * 2 + 1);
			cout << "1-1";
			currentX = maxX;
			currentY = maxY;
			// Hiển thị AAA tại vị trí mới
			gotoXY(currentX * 4 + 20, currentY * 2 + 1);
			SetColor(12);
			cout << "1_1";
			SetColor(14);

			// Kiểm tra xem AAA đã đi qua số đó chưa
			if (arr[currentY][currentX] == -1)
			{
				stop1 += 3;
				thoatvonglap1 = 1;
			}
			else
			{
				solandichuyen += 1;
				robo1di[solandichuyen] = ar[currentY][currentX];
				arr[currentY][currentX] = -1; // Đánh dấu số đã đi qua
				a = a + ar[currentY][currentX];//tổng điểm
				SetColor(10);
				gotoXY(7, 8);
				cout << a;
				stop1 += 1;
			}
		}


		if (thoatvonglap2 != 1)
		{
			Sleep(spead2);
		}
		while (stop2 < stopnew)
		{
			SetColor(13);
			int maxNumber2 = arr[currentT][currentZ];
			int maxZ = currentZ;
			int maxT = currentT;

			// Kiểm tra số trên
			if (currentT > 0 && arr[currentT - 1][currentZ] > maxNumber2)
			{
				maxNumber2 = arr[currentT - 1][currentZ];
				maxZ = currentZ;
				maxT = currentT - 1;
			}

			// Kiểm tra số dưới
			if (currentT < 13 && arr[currentT + 1][currentZ] > maxNumber2)
			{
				maxNumber2 = arr[currentT + 1][currentZ];
				maxZ = currentZ;
				maxT = currentT + 1;
			}

			// Kiểm tra số bên trái
			if (currentZ > 0 && arr[currentT][currentZ - 1] > maxNumber2)
			{
				maxNumber2 = arr[currentT][currentZ - 1];
				maxZ = currentZ - 1;
				maxT = currentT;
			}

			// Kiểm tra số bên phải
			if (currentZ < 19 && arr[currentT][currentZ + 1] > maxNumber2)
			{
				maxNumber2 = arr[currentT][currentZ + 1];
				maxZ = currentZ + 1;
				maxT = currentT;
			}

			// Di chuyển AAA đến số lớn nhất
			gotoXY(currentZ * 4 + 20, currentT * 2 + 1);
			cout << "2-2";
			currentZ = maxZ;
			currentT = maxT;
			// Hiển thị AAA tại vị trí mới
			gotoXY(currentZ * 4 + 20, currentT * 2 + 1);
			SetColor(10);
			cout << "2_2";
			SetColor(10);

			// Kiểm tra xem AAA đã đi qua số đó chưa
			if (arr[currentT][currentZ] == -1)
			{
				stop2 += 3;
				thoatvonglap2 = 1;
			}
			else
			{

				solandichuyenrobot2 += 1;
				robot2di[solandichuyenrobot2] = ar[currentT][currentZ];
				arr[currentT][currentZ] = -1; // Đánh dấu số đã đi qua
				b = b + ar[currentT][currentZ]; //tổng điểm
				SetColor(10);
				gotoXY(107, 23);
				cout << b;
				stop2 += 1;
			}
		}
		stop2 -= 1;
		stop1 -= 1;
		if (thoatvonglap1 == 1 and thoatvonglap2 == 1)
		{
			break;
		}
	}
	ofstream outFile("C:\\Users\\Trong Nguyen\\Desktop\\robogame\\robogame\\output.txt", ios::trunc);
	outFile << "Cac diem ma robot 1 da di qua la:" << endl;
	for (int ax = 1; ax <= solandichuyen; ax++)
	{
		outFile << setfill('0') << setw(3) << robo1di[ax] << " ";
	}
	outFile << "\nCac diem ma robot 2 da di qua la:" << endl;
	for (int ax = 1; ax <= solandichuyenrobot2; ax++)
	{
		outFile << setfill('0') << setw(3) << robot2di[ax] << " ";
	}
	outFile << "\nDiem bat dau cua robot 1 la: " << "\t" << x << "," << y << "\tvoi gia tri bang: " << setfill('0') << setw(3) << ar[y][x];
	outFile << "\nDiem bat dau cua robot 2 la: " << "\t" << z << "," << t << "\tvoi gia tri bang: " << setfill('0') << setw(3) << ar[t][z];
	outFile << "\nSo lan di chuyen cua robot 1: " << solandichuyen;
	outFile << "\nSo lan di chuyen cua robot 2: " << solandichuyenrobot2;
	outFile << "\nSo diem cua robot 1: " << a;
	outFile << "\nSo diem cua robot 2: " << b;
	if (a == b)
	{
		outFile << "\n\tSo diem cua robot 1 = So diem cua robot 2";
		outFile << "\n\t\t\t\t\t\tHai robot hoa nhau";
	}
	else if (a > b)
	{
		outFile << "\n\tSo diem cua robot 1 > So diem cua robot 2";
		outFile << "\n\t\t\t\t\t\tRobot 1 thang";
	}
	else if (a < b)
	{
		outFile << "\n\tSo diem cua robot 1 < So diem cua robot 2";
		outFile << "\n\t\t\t\t\t\tRobot 2 thang";
	}
	outFile.close();
}