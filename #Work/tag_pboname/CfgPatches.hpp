class CfgPatches 
{
	class tag_pboname 
	{
		author = "Your Name"; // Authors name.
		name = "Better PBO Name"; // PBO name but it isn't bound by the c++ class naming rules.
		requiredAddons[] = {}; // What PBOs are required for this PBO to function. This informs the game engine in what order the PBOs should be loaded. Example: requiredAddons[] = {"A3_Weapons_F", "Cadian_Weapons", "DKoK_Weapons"};
		requiredVersion = 0.1; // Doesn't fucking matter. Also don't know what it does but it's here.
		units[] = {}; // Tells the game engine what units/vehicles/backpacks/moreshit are created in this PBO. Isn't necessary but it's good practice. Example: units[] = {"VNG_CadATBackpack", "VNG_Fire_Warrior_VIor"};
		weapons[] = {}; // Tells the game engine what weapons/vests/uniforms(kinda)/moreshit are created in this PBO. Isn't necessary but it's good practice. Example: weapons[] = {"VNG_Gear", "VNG_InfBreather_Helm", "VNG_LasLMG"};
		magazines[]= {}; // Tells the game engine what magazines/probablyothershit are created in this PBO. Isn't necessary but it's good practice. Example: magazines[] = {"VNG_HighPoweredM36KantRifle_mag", "VNG_150RndLasLmg_mag"};
		ammo[]= {}; // Tells the game engine what ammo/probablyothershit are created in this PBO. Isn't necessary but it's good practice. Example: ammo[] = {"VNG_MLSmoke", "VNG_warp_ammo"};
		worlds[] = {}; // Tells the game engine what worlds/probablyothershit are created in this PBO. Isn't necessary but it's good practice. Example: worlds[] = {"world_test01"};
	};
};