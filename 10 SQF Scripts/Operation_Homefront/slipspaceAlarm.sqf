if (isServer) then {
["dot_slipspace"] remoteExec ["playSound", -2, true]; 
["slipspace"] remoteExec ["playSound", -2, true]; 
[alarm, ["alarm", 1000, 1]] remoteExec ["say3d", -2, true];  
[alarm_1, ["alarm", 1000, 1]] remoteExec ["say3d", -2, true];  
[alarm_2, ["alarm", 1000, 1]] remoteExec ["say3d", -2, true];  
[alarm_3, ["alarm", 1000, 1]] remoteExec ["say3d", -2, true];  
[alarm_4, ["alarm", 1000, 1]] remoteExec ["say3d", -2, true];
};
