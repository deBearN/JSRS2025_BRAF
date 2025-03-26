class CfgPatches
{
	class jsrs_soundmod_2025_Beta_BRAF
	{
		name = "JSRS Soundmod 2025 Beta - BRAF Compat";
		url = "https://www.arma3.com";
		projectname = "Arma 3: JSRS Soundmod 2025 Beta - BRAF Compat";
		author = "de_BearN";
		units[] = {};
		weapons[] = {};
		requiredversion = 0.1;
		requiredAddons[] = {"jsrs_soundmod_2025_Beta","braf_weapons_assault_rifles", "braf_weapons_launchers", "braf_weapons_sniper_rifles", "braf_main","AMF_PGM_ULTIMA_RATIO", "AMF_PERSEIS_II_POLY"};
		skipWhenMissingDependencies = 1;
		ammo[] = {"braf_308_ball","braf_338_ball","braf_556_ball","braf_762_ball","braf_R_alac_AT","braf_Igla_AA","Braf_B_127x99_Ball_Red_Tracer"};
	};
};
/* TODO
=> Add Guarani's .50 to have JSRS 2025 .50 soundset
=> add other vehicles to compat
*/
class CfgAmmo
{
	class B_762x51_Ball;
	class B_338_Ball;
	class B_556x45_Ball;
	class braf_308_ball : B_762x51_Ball
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_supersonic_soundset"};
	};
	class braf_338_ball: B_338_Ball 
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_338_soundset"};
	};
	class braf_556_ball : B_556x45_Ball
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_supersonic_soundset"};
	};
	class braf_762_ball: B_762x51_Ball
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_supersonic_soundset"};
	};
	class RocketBase;
	class braf_R_alac_AT: RocketBase
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_50cal_soundset"};
		soundsetfly[] = {"jsrs_2025_sc_50cal_soundset"};
		soundfly[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		soundengine[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		soundsetexplosion[] = {"jsrs_2025_explosion_shock_medium_soundset","jsrs_2025_rocket_epl_soundset","jsrs_2025_medium_explosion_tails_soundset","jsrs_2025_debris_big_soundset","jsrs_2025_explosion_shrapnel_soundset"};
	};
	class MissileBase;
	class braf_Igla_AA: MissileBase
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_50cal_soundset"};
		soundsetfly[] = {"jsrs_2025_sc_50cal_soundset"};
		soundfly[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		soundengine[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		soundsetexplosion[] = {"jsrs_2025_explosion_shock_medium_soundset","jsrs_2025_rocket_epl_soundset","jsrs_2025_medium_explosion_tails_soundset","jsrs_2025_debris_big_soundset","jsrs_2025_explosion_shrapnel_soundset"};
	};
	class B_127x99_Ball;
	class Braf_B_127x99_Ball_Red_Tracer: B_127x99_Ball
	{
		soundsetsoniccrack[] = {"jsrs_2025_sc_50cal_soundset"};
	};
};
class mode_semiauto;
class mode_burst;
class mode_fullauto;
class gm_semiauto;
class gm_fullauto;
class gm_burst;
class CfgWeapons
{
	class Launcher;
	class Launcher_Base_F : Launcher
	{
			class BaseSoundModeType;
			class WeaponSlotsInfo;
	};
	class launch_MRAWS_green_rail_F;
	class pistol_base_f;
	class riflecore;
	class rifle: riflecore{};
	class rifle_base_f;
	class rifle_long_base_f;
	class rifle_short_base_f: rifle_base_f
	{
		class weaponslotsinfo;
		
	};
	class grenadelauncher;
	class mgun;
	class mguncore;
	class gmg_f;
	class cannoncore;
	class rocketpods;
	class missilelauncher;
	class Braf_colt_weapon;
	
	class Braf_colt_lmg_base_F : Braf_colt_weapon
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\ar_reload_generic_2.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_colt_burst_base_F : Braf_colt_weapon
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\ar_reload_generic_2.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_colt_auto_base_F : braf_colt_weapon
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\ar_reload_generic_2.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_hk33 : Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_hk33A3 : Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_HK416_long_base : Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\ar_reload_generic_2.ogg",2,1,35};
		class SemiAuto : Mode_SemiAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_HK416_short_base : Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\ar_reload_generic_2.ogg",2,1,35};
		class SemiAuto : Mode_SemiAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_ia2_base_F: Rifle_Base_F
 	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mx_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
 	};
	class Braf_lapa_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\rifle_katiba_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_famas_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_md97lc_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_MD97LC_GL_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_sig_551 : Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\ar_reload_generic_2.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class Burst : Mode_Burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_soundset","jsrs_2025_weapon_snap_556mm_soundset","jsrs_2025_556mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ar15_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_Fal_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_FAP_base_F: Rifle_Long_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_md1_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_MD1_tactical_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_md1a1_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_ParaFal_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class burst: mode_burst
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_fnfal_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class launch_B_Titan_F;
	class braf_Igla: launch_B_Titan_F
	{
  	soundfly[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\launcher_titan_reload.ogg",2,1,35};
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_titan_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_127mm_tails_soundset"};
		};
	};
	class braf_launch_alac_Loaded: Launcher_Base_F
	{
		soundfly[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\launcher_mraws_reload.ogg",2,1,35};

		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_mraws_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_127mm_tails_soundset"};
		};

	};
	class braf_launch_alac: braf_launch_alac_Loaded
	{
		soundfly[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\launcher_mraws_reload.ogg",2,1,35};
		class basesoundmodetype;
		class standardsound: basesoundmodetype
		{
			soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_mraws_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_127mm_tails_soundset"};
		};
	};
	
	class braf_Gustav: launch_MRAWS_green_rail_F
	{
		soundfly[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\launcher_mraws_reload.ogg",2,1,35};
		modes[] = {"Single"};
		class Single: mode_semiauto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_mraws_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_127mm_tails_soundset"};
			};
		};
	};
	class braf_m20a1superbazooka: launch_MRAWS_green_rail_F
	{
		soundfly[] = {"jsrs_2025\sounds_f_jsrs2025\weapons\launchers\rocket_fly.ogg",1,1,1000};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\launcher_mraws_reload.ogg",2,1,35};
		modes[] = {"Single"};
		class Single: mode_semiauto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[] = {"jsrs_2025_debris_dust_soundset","jsrs_2025_mraws_shot_soundset","jsrs_2025_weapon_scape_93mm_soundset","jsrs_2025_127mm_tails_soundset"};
			};
		};
	};
	class braf_Minimi_base_F: Rifle_Long_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class manual: Mode_FullAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_lim85_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_556mm_lmg_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_lim85_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_mag_base_F: Rifle_Long_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\lmg_navid_reload.ogg",2,1,35};
		class manual: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_spmg_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_65mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_spmg_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_65mm_silenced_tails_soundset"};
			};
		};
	};	
	class braf_PT92: Pistol_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\pistol_rook_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_soundset","jsrs_2025_weapon_snap_9mm_soundset","jsrs_2025_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_rook_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
	};
	class hgun_ACPC2_F;
	class braf_imbel_m973 : hgun_ACPC2_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_acpc_shot_soundset","jsrs_2025_cal45_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_acpc_shot_silenced_soundset","jsrs_2025_cal45_silenced_tails_soundset"};
			};
		};
	};
	class BRAF_boito_20_base : Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_shotgun_shot_soundset","jsrs_2025_weapon_snap_cal45_soundset","jsrs_2025_762mm_DMR_tails_soundset"};
			};
		};
	};
	class AMF_Perseis_II_02_F : Rifle_Long_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\rifle_m320r_reload.ogg",2,1,35};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class silencedsound: basesoundmodetype{};
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_m320r_shot_soundset","jsrs_2025_weapon_snap_big_soundset","jsrs_2025_127mm_tails_soundset"};
			};
		};
	};
	class braf_aglc_base: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_weapon_snap_big_soundset","jsrs_2025_127mm_tails_soundset"};
			};
		};
	};
	class braf_msr_308_base: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_navid_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_93mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_navid_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_93mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_msr_338_base: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_338_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mar10_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_338_silenced_tails_soundset"};
			};
		};
	};
	class braf_HK417_base: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\rifle_spar17_reload.ogg",2,1,35};
		class SemiAuto : Mode_SemiAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_spar17_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_spar_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_mosquefal_base: Rifle_Base_F
	{
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_soundset","jsrs_2025_weapon_snap_big_soundset","jsrs_2025_93mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_cyrus_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_93mm_silenced_tails_soundset"};
			};
		};
	};
	class braf_pgm_ultimaratio : Rifle_Long_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk18_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_dmr_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk18_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk18_shot_soundset","jsrs_2025_weapon_snap_762mm_soundset","jsrs_2025_762mm_dmr_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_mk18_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_762mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_Mekanika_URU_base: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class Single: Mode_SemiAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_weapon_snap_9mm_soundset","jsrs_2025_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_soundset","jsrs_2025_weapon_snap_9mm_soundset","jsrs_2025_9mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_pdw2000_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_9mm_silenced_tails_soundset"};
			};
		};
	};
	class Braf_MT12_base_F: Rifle_Base_F
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		class single: mode_semiauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_soundset","jsrs_2025_weapon_snap_cal45_soundset","jsrs_2025_cal45_smg_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
		class fullauto: mode_fullauto
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_vermin_shot_soundset","jsrs_2025_weapon_snap_cal45_soundset","jsrs_2025_cal45_smg_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_ad97_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_556mm_silenced_tails_soundset"};
			};
		};
	};
	class BRAF_MAG_VEH: MGun
	{
		nullbullet[] = {"jsrs_2025\sounds_f_jsrs2025\null.ogg",0,1,0};
		soundbullet[] = {"nullbullet",1};
		reloadmagazinesound[] = {"\jsrs_2025\sounds_f_jsrs2025\weapons\reloads\lmg_navid_reload.ogg",2,1,35};
		class manual: mgun
		{
			class basesoundmodetype;
			class standardsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_spmg_shot_soundset","jsrs_2025_weapon_snap_lmg_soundset","jsrs_2025_65mm_tails_soundset"};
			};
			class silencedsound: basesoundmodetype
			{
				soundsetshot[] = {"jsrs_2025_spmg_shot_silenced_soundset","jsrs_2025_weapon_snap_silenced_soundset","jsrs_2025_65mm_silenced_tails_soundset"};
			};
		};
	};
};
