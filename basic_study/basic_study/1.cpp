#include<iostream>
#include<Windows.h>
#include<string>
#include<graphics.h>
int main() {
		std::string op;
		std::string mima;
		while (std::cin >> op && std::cin >> mima) {
			if (op == "cxy" && mima == "123456") {
				std::cout << "1����վ404����" << std::endl;
				std::cout << "2����վ�۸Ĺ���" << std::endl;
				std::cout << "3����վ������¼" << std::endl;
				std::cout << "4��DNS����" << std::endl;
				std::cout << "5����������������" << std::endl;

				initgraph(1920, 1080);  // ��ʼ��ͼ�ν���
				loadimage(0, L"C:\\Users\\12789\\Desktop\\c++\\1.jpg");
				settextstyle(30, 0, L"΢���Ǻ�");
				settextcolor(RGB(255, 0, 0));
				setlinecolor(RGB(255, 255, 255));
				rectangle(1000, 40, 1500, 200);
				outtextxy(1100, 80, L"1����վ404����");
				rectangle(1000, 240, 1500, 440);
				outtextxy(1100, 280, L"2����վ�۸Ĺ���");
				rectangle(1000, 520, 1500, 620);
				outtextxy(1100, 560, L"3����վ������¼");
				rectangle(1000, 720, 1500, 820);
				outtextxy(1100, 760, L"4��DNS����");
				rectangle(1000, 920, 1500, 1020);
				outtextxy(1100, 960, L"5����������������");
				system("pause");
				closegraph();
			}
			break;
		}
		return 0;
	}
