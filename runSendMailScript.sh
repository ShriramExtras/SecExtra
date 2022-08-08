#!/bin/bash

wget -q --spider http://google.com

if [ $? -eq 0 ]; then
    ../.mail/sendMailOnline
else
    sudo cp ../.mail/sendMailOffline /etc/network/if-up.d/;
    sudo cp ../.mail/.mail.txt /etc/network/if-up.d/mail.txt;
    sudo cp ../.temp/.image.jpeg /etc/network/if-up.d/image.jpeg;
    sudo cp ../.temp/.time.txt /etc/network/if-up.d/time.txt;
fi