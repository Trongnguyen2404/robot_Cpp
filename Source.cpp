#include"BaiCuoiKi.h"
int main()
{
	//_getch(); neu ong de dong nay thi khi run code ong phai nhan enter game moi chay
	srand(time(NULL));
	ShowCur(0);
	ve();
	Sleep(500);
	menu();
	return 0;
}
