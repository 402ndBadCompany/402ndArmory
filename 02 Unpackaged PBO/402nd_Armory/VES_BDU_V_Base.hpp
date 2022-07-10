	// Uniforms (Textures)
	class OPTRE_UNSC_Army_Soldier_WDL;
    class 402nd_CUU_V_Base: OPTRE_UNSC_Army_Soldier_WDL
	{
		class HitPoints
        {
            class HitFace
            {
                armor = 1; //Default Value
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 1; //OPTRE Value //Default=1
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 1; //Default Value
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis: HitHead
            {
                armor = 6; //OPTRE Value //Default=6
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitAbdomen: HitPelvis
            {
                armor = 1; //OPTRE Value //Default=1
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 1; //OPTRE Value //Default=1
                material = -1;
                name = "spine2";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 1; //OPTRE Value //Default=1
                material = -1;
                name = "spine3";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000; // Default value, do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor = 3; //OPTRE Value //Default=3
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 3; //OPTRE Value //Default=3
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 3; //OPTRE Value //Default=3
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 0.3;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000; //Default value, Do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 1;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            //----------------------------Ace Hitpoints---------------------------
            class HitLeftArm
            {
                armor = 1; //OPTRE Value //Default=1
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.08;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitRightArm: HitLeftArm
            {
                name = "hand_r";
            };
            class HitLeftLeg
            {
                armor = 1; //OPTRE Value //Default=1
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg
            {
                name = "leg_r";
            };
            class ACE_HDBracket
            {
                armor = 1; //Default Value, Do not Change
                material = -1;
                name = "head";
                passThrough = 0;
                radius = 1;
                explosionShielding = 1;
                visual = "";
                minimalHit = 0;
                depends = "HitHead";
            };
        };
	};
	class VES_BDU_V_Base: OPTRE_UNSC_Army_Soldier_WDL
	{
		class HitPoints
        {
            class HitFace
            {
                armor = 1; //Default Value
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.1;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 4; //OPTRE Value //Default=1
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 1; //Default Value
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis: HitHead
            {
                armor = 8; //OPTRE Value //Default=6
                material = -1;
                name = "pelvis";
                passThrough = 0.8;
                radius = 0.24;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitAbdomen: HitPelvis
            {
                armor = 4; //OPTRE Value //Default=1
                material = -1;
                name = "spine1";
                passThrough = 0.8;
                radius = 0.16;
                explosionShielding = 1;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 4; //OPTRE Value //Default=1
                material = -1;
                name = "spine2";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 4; //OPTRE Value //Default=1
                material = -1;
                name = "spine3";
                passThrough = 0.8;
                radius = 0.18;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
                armor = 1000; // Default value, do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 2.4;
                visual = "injury_body";
                minimalHit = 0.01;
                depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
            };
            class HitArms: HitBody
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "arms";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "0";
            };
            class HitHands: HitArms
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "hands";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 0.3;
                visual = "injury_hands";
                minimalHit = 0.01;
                depends = "HitArms";
            };
            class HitLegs: HitHands
            {
                armor = 6; //OPTRE Value //Default=3
                material = -1;
                name = "legs";
                passThrough = 1;
                radius = 0.14;
                explosionShielding = 0.3;
                visual = "injury_legs";
                minimalHit = 0.01;
                depends = "0";
            };
            class Incapacitated: HitLegs
            {
                armor = 1000; //Default value, Do not change
                material = -1;
                name = "body";
                passThrough = 1;
                radius = 0;
                explosionShielding = 1;
                visual = "";
                minimalHit = 0;
                depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
            };
            //----------------------------Ace Hitpoints---------------------------
            class HitLeftArm
            {
                armor = 2; //OPTRE Value //Default=1
                material = -1;
                name = "hand_l";
                passThrough = 1;
                radius = 0.08;
                explosionShielding = 1;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitRightArm: HitLeftArm
            {
                name = "hand_r";
            };
            class HitLeftLeg
            {
                armor = 2; //OPTRE Value //Default=1
                material = -1;
                name = "leg_l";
                passThrough = 1;
                radius = 0.1;
                explosionShielding = 1;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg
            {
                name = "leg_r";
            };
            class ACE_HDBracket
            {
                armor = 1; //Default Value, Do not Change
                material = -1;
                name = "head";
                passThrough = 0;
                radius = 1;
                explosionShielding = 1;
                visual = "";
                minimalHit = 0;
                depends = "HitHead";
            };
        };
	};
	// END BASE UNIFORM