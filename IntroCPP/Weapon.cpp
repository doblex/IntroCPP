#include "Weapon.h"

Weapon::Weapon(string weaponName, weaponType weaponType, int weaponDamage, int ammoCapacity, float weaponRange, float weaponReloadTime, bool automatic, bool silenced)
{
	name = weaponName;
	type = weaponType;
	damage = weaponDamage;
	maxAmmo = ammoCapacity;
	currentAmmo = ammoCapacity;
	range = weaponRange;
	reloadTime = weaponReloadTime;
	isAutomatic = automatic;
	isSilenced = silenced;
	jammed = false;
}

Weapon::~Weapon()
{
	name = "";
	type = weaponType::PISTOL;
	maxAmmo = 0;
	currentAmmo = 0;
	damage = 0;
	range = 0.0f;
	reloadTime = 0.0f;
	isAutomatic = false;
	isSilenced = false;
	jammed = false;
}

void Weapon::DoDamage()
{
	cout << "Dealt " << damage << " damage with " << name << endl;
	cout << "current ammo " << currentAmmo << "/" << maxAmmo << endl;
}

void Weapon::Shoot()
{
	if (currentAmmo > 0 && !jammed)
	{
		currentAmmo--;
		DoDamage();

		int random = rand() % 100;
		
		
		if (random < blockProb)
		{
			jammed = true;
			cout << "click, click. Something bad happened!!" << endl;
		}
	}
	else if (jammed)
	{
		cout << "Weapon is jammed and cannot shoot!" << endl;
	}
	else
	{
		cout << "Out of ammo! Reload needed." << endl;
	}
}

void Weapon::Exec()
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
}

GunInfo Weapon::GetInfo()
{
	return GunInfo{ name, type, maxAmmo, currentAmmo, damage, range, reloadTime, isAutomatic, isSilenced, jammed };
}


