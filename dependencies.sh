# #! /bin/bash

File=/etc/network/if-up.d/runMail 
  
{
  echo "#! /bin/bash"
  echo
  echo "python3 /home/$USER/.runMail/sendMailOffline"
} &> runMail

chmod +x runMail
sudo mv runMail /etc/network/if-up.d/	

mkdir /home/$USER/.runMail

printf $USER > .username.txt
sudo mv .username.txt /etc/network/if-up.d/

