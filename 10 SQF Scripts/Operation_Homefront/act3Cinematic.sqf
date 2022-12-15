null=[]spawn{ 
 
"MY_cinematicBorders" cutRsc ["MY_cinematicBorders", "PLAIN", 2];     
     
[["<t font='RobotoCondensedLight'><t size='0.75'><br/><br/><br/><br/> Better Served Hot ",4,5],["<t font='RobotoCondensedLight'>",3,5,5]] spawn BIS_fnc_EXP_camp_SITREP;     
     
    sleep 15;     
    "MY_cinematicBorders" cutFadeOut 1;     

};