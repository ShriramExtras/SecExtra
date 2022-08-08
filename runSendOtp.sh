#!/bin/bash       

wget -q --spider http://google.com

if [ $? -eq 0 ]; then
    
    echo "Sending verification code Please wait..."
    ../.mail/sendOtp 
    clear
    echo "Verification code mailed to $(cat ../.mail/.mail.txt) "
 
fi

