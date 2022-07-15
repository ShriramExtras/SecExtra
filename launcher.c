#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

void please_wait(){
	system("clear");
	printf("\e[?25l");

	printf("Please wait\n");
	usleep(250000);
	system("clear");

	printf("Please wait.\n");
	usleep(250000);
	system("clear");

	printf("Please wait..\n");
	usleep(250000);
	system("clear");

	printf("Please wait...\n");
	usleep(250000);
	system("clear");

	printf("Please wait ..\n");
	usleep(250000);
	system("clear");

	printf("Please wait  .\n");
	usleep(250000);
	system("clear");

	printf("\e[?25h");
}

int main(){
	char choice;
	bool invalid_option = false;
	bool not_downloaded_yet = false;
	system("clear");
	sleep(2);
	system("echo \"Hi $USER, Welcome to MasterKey App\"");
	printf("\n\n");
	sleep(1);
	printf("              MasterKey\n");
	printf("\"One Password for All Your Passwords...\"");
	printf("\n\n");
	sleep(4);
	system("echo \"       © 2022 The Sudoers Club\"");
	sleep(5);
	system("clear");
	
	printf("MasterKey needs you to install necessary packages\n");
	do {
		printf("Continue [Y/n] : ");
		scanf("%c", &choice);
		getchar();
		choice = toupper(choice);
		
		if (choice == 'Y'){
			system("sudo apt update -y && sudo apt upgrade -y && sudo apt install gcc -y && sudo apt install feh -y && sudo apt install streamer -y ");
			sleep(3);
			system("clear");

			//check if the packages were installed and throw an error if not
			system("if [[ $(which feh) != "" && $(which streamer) != "" ]]; then echo All packages Installed Successfully; else clear; echo Error: Unable to install packages; echo Please check your internet connection or try again later.; sleep 3; exit; fi");
			sleep(3);
			system("clear");
			invalid_option = false;
		}
		else if (choice == 'N'){
			printf("\n");
			system("echo Exiting....");
			sleep(1);
			system("clear");
			exit(1);
			invalid_option = false;
		}
		else{
			printf("\nInvalid input please try again\n\n");
			invalid_option = true;
		}
	} while (invalid_option);
	
	printf("Getting few things ready...\n");
	sleep(3);
	printf("\n");
	
	system("cd /home/$USER/Documents && mkdir .Program-Files/");
	system("cd /home/$USER/Documents/.Program-Files && mkdir .MasterKey/");
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && touch .password.txt .passwords_list.txt .suspect.txt .forgot_password.txt .time.txt .limit.txt .timer.txt");

	//permissions 
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && chmod 000 .password.txt && chmod 000 .passwords_list.txt && chmod 000 .suspect.txt && chmod 000 .forgot_password.txt");
	
	// C file Download
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && wget https://github.com/TheSudoersClub/Masterkey/blob/main/MasterKey.c?raw=true");
	//stded.h file download
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && wget https://github.com/ShriramExtras/SecExtra/blob/main/secExtra.txt?raw=true");
	
	system("clear");

	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();
	please_wait();

	system("clear");
	
	//C file rename
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && mv MasterKey.c?raw=true .masterkey.c");
	
	//stded.h file rename
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && mv secExtra.txt?raw=true stded.h");
	
	//stded.h file moved to /usr/include
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && sudo mv stded.h /usr/include/");
	
	//C file Compile
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && gcc .masterkey.c -o .masterkey.out");
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && chmod 700 .masterkey.out");
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && chmod 000 .masterkey.c");
	
	//downloading run_masterkey.sh
	system("cd /home/$USER/ && wget https://github.com/ShriramExtras/SecExtra/blob/main/run.txt?raw=true");
	
	//renaming run_masterkey.sh
	system("cd /home/$USER/ && mv run.txt?raw=true .run_masterkey.sh");
	system("cd /home/$USER/ && chmod 700 .run_masterkey.sh");
	
	//Setting variable in bashrc
	system("cd /home/$USER/ && echo alias masterkey=\'/home/$USER/.run_masterkey.sh\' >> .bashrc");
	sleep(1);
	
	//downloading update.sh
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && wget https://github.com/ShriramExtras/SecExtra/blob/main/update.sh?raw=true");
	
	//renaming update.sh
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && mv update.sh?raw=true .update.sh && chmod 000 .update.sh");
	
	system("clear");
	
	system("cd /home/$USER/Documents/.Program-Files/.MasterKey/ && chmod 777 .masterkey.out");
	system("cd /home/$USER/ && chmod 700 .run_masterkey.sh");
	
	printf("Note: Use \"masterkey\" to launch the application\n");
	system("HOST=$(hostname) && echo \"($USER@$HOST:~$ masterkey)\"\n");
	printf("\nContinue [Y] : ");
	scanf("%c", &choice);

	system("clear");

	printf("'masterkey.zip' and 'masterkey_launcher.out' are no longer required!\n");
	printf("Do you want to delete them?\n\n");
	printf("Continue [Y/n] : ");
	scanf("%c", &choice);
	choice = toupper(choice);

	if (choice == 'Y'){
		system("find /home -name masterkey_launcher.out > /home/$USER/Documents/.Program-Files/.MasterKey/.path.txt && path=$(cat /home/$USER/Documents/.Program-Files/.MasterKey/.path.txt) && rm $path");
		system("find /home -name masterkey.zip > /home/$USER/Documents/.Program-Files/.MasterKey/.path.txt && path=$(cat /home/$USER/Documents/.Program-Files/.MasterKey/.path.txt) && rm $path && rm /home/$USER/Documents/.Program-Files/.MasterKey/.path.txt");
	}

	system("pkill terminal");
}