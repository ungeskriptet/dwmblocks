//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"󰤨 ", "nmcli -t -f name connection show --active",      5,      0},
	{"󰕾 ",  "[ $(pamixer --get-mute) = true ] && echo 0 && exit||pamixer --get-volume",0,10},
	{"󱑍 ", "date +%a', '%T",                           1,      0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
