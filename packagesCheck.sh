#! /bin/bash

if [[ $(which feh) != "" && $(which streamer) != "" ]]; then
    echo All packages Installed Successfully;
else
    clear;
    echo "Error: Unable to install packages";
    echo "Please check your internet connection or try again later.";
    sleep 5;
    exit 1;
fi;
