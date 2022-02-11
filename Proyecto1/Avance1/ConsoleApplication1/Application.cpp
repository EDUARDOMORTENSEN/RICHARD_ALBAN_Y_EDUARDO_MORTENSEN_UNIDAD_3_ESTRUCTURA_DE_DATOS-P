#include "Application.h"
//#include "Marquee1.h"
#include <Windows.h>


int Application::run()
{
    init();

    return 0;
}

void Application::init()
{
    //std::thread t1(Marquee::Marquee::transicion, "Usen Linux Papus");

    std::vector<MenuOption> menu_item
    {
        {1, "Jugar", OPC1},
        {2, "Configuraciones", OPC3},
        {3, "SALIR", exit_program}
    };

    Menu menu{ menu_item };
    menu.navigation();
    
}


void Application::exit_program()
{
    std::cout << "\x1B[2J\x1B[H";
    std::cout << "\n\nHasta la proxima\n\n";
    Sleep(500);
    exit(0);
}

void Application::OPC1() 
{
    system("cls");
    std::cout << "Opc1"<<std::endl;
    system("pause");
   

    init();
}

void Application::OPC2()
{
    std::cout << "\x1B[2J\x1B[H";
    std::cout << "\n\n\topcion 2" << std::endl;
    system("pause");
    init();
}

void Application::OPC3()
{
    std::vector<MenuOption> menu_item
    {
        {1, "Crear Backup", OPC4},
        {2, "Restaurar Backup", OPC2},
        {3, "SALIR", exit_program}
    };

    Menu menu{ menu_item };
    menu.navigation();
}

void Application::OPC4()
{
    system("cls");
    std::cout << "opcion 4" << std::endl;
    system("pause");
    init();
}