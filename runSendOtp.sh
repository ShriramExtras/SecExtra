#!/bin/bash       

wget -q --spider http://google.com

if [ $? -eq 0 ]; then
    
    echo "Processing your request, plese wait..."
    ../.mail/sendOtp 
    clear
    echo "We have send verification code on $(cat ../.mail/.mail.txt) "
 
fi

