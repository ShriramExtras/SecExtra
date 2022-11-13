#!/bin/bash

wget -q --spider http://google.com

if [ $? -eq 0 ]; then
    python3 ../.mail/sendMailOnline
else
    cp ../.mail/sendMailOffline /home/$USER/.runMail/;
    cp ../.mail/.mail.txt /home/$USER/.runMail/mail.txt;
    cp ../.temp/.image.jpeg /home/$USER/.runMail/image.jpeg;
    cp ../.temp/.time.txt /home/$USER/.runMail/time.txt;
fi
