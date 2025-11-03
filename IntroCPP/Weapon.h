#pragma once
#include <iostream>
#include "conio.h"
#include "enums.h"

using namespace std;

struct GunInfo
{
	string name;
	weaponType type;
	int maxAmmo;
	int currentAmmo;
	int damage;
	float range;
	float reloadTime;
	bool isAutomatic;
	bool isSilenced;
	bool blocked;

	void ToString()
	{
		cout << "================Weapon Info================" << endl;
		cout << "Name: " << name << endl;
		switch (type)
		{
		case PISTOL:
			cout << "Type: PISTOL" << endl;
			break;
		case RIFLE:
			cout << "Type: RIFLE" << endl;	
			break;
		case SHOTGUN:
			cout << "Type: SHOTGUN" << endl;
			break;
		case SNIPER:
			cout << "Type: SNIPER" << endl;
			break;
		case SMG:
			cout << "Type: SMG" << endl;
			break;
		default:
			cout << "Type: UNKNOWN" << endl;
			break;
		}
		cout << "Damage: " << damage << endl;
		cout << "Ammo: " << currentAmmo << "/" << maxAmmo << endl;
		cout << "Range: " << range << " meters" << endl;
		cout << "Reload Time: " << reloadTime << " seconds" << endl;
		cout << "Automatic: " << (isAutomatic ? "Yes" : "No") << endl;
		cout << "Silenced: " << (isSilenced ? "Yes" : "No") << endl;
		cout << "Blocked: " << (blocked ? "Yes" : "No") << endl;

		cout << "=============================================" << endl;
	}
};

class Weapon
{
	private:
		const int blockProb = 10;
		string name;
		weaponType type;
		int maxAmmo;
		int currentAmmo;

		int damage;
		float range;
		float reloadTime;

		bool isAutomatic;
		bool isSilenced;
		bool jammed;

		void DoDamage();

	public:
		Weapon(string weaponName, weaponType weaponType, int weaponDamage, int ammoCapacity = 30, float weaponRange = 30.0f, float weaponReloadTime = 5.0f, bool automatic = false, bool silenced = false);
		~Weapon();

		void Shoot();
		void Exec();

		GunInfo GetInfo();

};