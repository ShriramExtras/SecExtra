#! bin/bash

main(){
	wget https://github.com/ayush2030/password_manager/blob/main/01_Main_Passwords.c?raw=true

	clear
	
	pleaseWaitAnimation

	if [[ -f "01_Main_Passwords.c?raw=true" ]]; then

		diff -qw 01_Main_Passwords.c?raw=true .password_manager.c >.message.txt
		message=$(cat .message.txt)

		if [[ $message == "Files 01_Main_Passwords.c?raw=true and .password_manager.c differ" ]]; then
			clear
			echo "There are updates available"
			read -p 'Do you want to install updates [Y/n] : ' choice
			echo

			if [[ $choice == "Y" || $choice == "y" ]]; then
				clear
				echo "Updating [>                    ]    0%"
				sleep 0.5
				clear

				echo "Updating [==>                  ]    10%"
				sleep 0.5
				clear

				echo "Updating [====>                ]    20%"
				sleep 0.5
				clear

				echo "Updating [======>              ]    30%"
				sleep 0.5
				clear

				echo "Updating [========>            ]    40%"
				sleep 0.5
				clear

				echo "Updating [==========>          ]    50%"
				sleep 0.5
				clear

				echo "Updating [============>        ]    60%"
				sleep 0.5
				clear

				echo "Updating [==============>      ]    70%"
				sleep 0.5
				clear

				echo "Updating [================>    ]    80%"
				sleep 0.5
				clear

				echo "Updating [==================>  ]    90%"
				sleep 0.5
				clear

				echo "Updating [====================>]   100%"
				sleep 1
				clear

				rm .password_manager.c
				mv 01_Main_Passwords.c?raw=true .password_manager.c

				rm .password_manager.out
				gcc .password_manager.c -o .password_manager.out

				chmod 700 .password_manager.out
				chmod 000 .password_manager.c

				clear
				echo app successfully updated.

				sleep 1
				pkill terminal
			else
				rm 01_Main_Passwords.c?raw=true
			fi

		else
			clear
			echo "The app is upto date"
			echo
			rm 01_Main_Passwords.c?raw=true
		fi

		rm .message.txt
	else
		clear
		echo "Error: unable to check for updates"
		echo "Please check your internet connection or try again later."
		echo
	fi
}



pleaseWait(){
    echo "Please wait"
    sleep 0.25
    clear

    echo "Please wait."
    sleep 0.25
    clear

    echo "Please wait.."
    sleep 0.25
    clear

    echo "Please wait..."
    sleep 0.25
    clear

    echo "Please wait .."
    sleep 0.25
    clear

    echo "Please wait  ."
    sleep 0.25
    clear
}

pleaseWaitAnimation(){
	pleaseWait
	pleaseWait
	pleaseWait
	pleaseWait
	pleaseWait
	pleaseWait
	pleaseWait
	pleaseWait
}

main "$@";
