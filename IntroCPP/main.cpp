#include "conio.h"
#include "IntroCPP.h"
#include "Weapon.h"

int main()
{
	Weapon myWeapon("Desert Eagle", weaponType::PISTOL, 50);
	myWeapon.GetInfo().ToString();

	cout << "Press S to shoot!!\n";
	cout << "Press return to go out\n\n";
	
	while (_getch() == 's')
	{
		myWeapon.Shoot();
	}

	cout << "Press any key to exit";
	cin.get(); // To pause the console window

	return 0;
}