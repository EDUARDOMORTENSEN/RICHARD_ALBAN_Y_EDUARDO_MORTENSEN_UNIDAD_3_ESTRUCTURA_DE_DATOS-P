/*----------------------------------------------------------------------------+
|		      UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE			              |
| 		        	ESTRUCTURA DE DATOS									      |
| AUTORES: RICHARD ALBAN, EDUARDO MORTENSEN                                   |
| FECHA: MIERCOLES 23 DE FEBRERO DEL 2022                                     |
| NRC: 7166                                                                   |
+-----------------------------------------------------------------------------*/
#include "EasyBMP.h"
#include "Application.h"
#include <Windows.h>
#include<iostream>

void DrwImage(std::string imagePath, HDC* console) {

	BMP image;
	image.ReadFromFile(imagePath.c_str());
	//image.SetBitDepth(32);
	for (int x = 0; x < image.TellWidth(); x+=5)
	{
		for (int y = 0; y < image.TellHeight(); y+=5)
		{
			int RED = image.GetPixel(x, y).Red;
			int GREEN = image.GetPixel(x, y).Green;
			int BLUE = image.GetPixel(x, y).Blue;

			int ALPHA = image.GetPixel(x, y).Alpha;

			COLORREF COLOUR = RGB(RED, GREEN, BLUE);
			if (ALPHA == 0) {
				SetPixel(*console, x, y, COLOUR);
			}
		}
	}
}


int main()
{

	/*
		Actualizar fuente de consola
	*/
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof cfi;
	cfi.nFont = 0;
	cfi.dwFontSize.Y = 24;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	/*
		Actualizar size de consola
	*/
	HWND console_wnd = GetConsoleWindow();
	RECT ConsoleRect;
	GetWindowRect(console_wnd, &ConsoleRect);
	MoveWindow(console_wnd, ConsoleRect.left, ConsoleRect.top, 900, 600, TRUE);

	char key;
	HWND console = GetConsoleWindow();
	//Get a handle to console
	HDC dc = GetDC(console);

	cout << "   \nPulse enter para salir....";
	while (true) {
		DrwImage("regla.bmp", &dc);
		key = _getch();
		//if(key == 'w') cout<<"w";
		if (key == 13) {
			cout << "ok" << endl;
			break;
		}
	}


	return Application::run();
}

