#!/bin/bash
passh -p YOUR_USER_PASSWORD ssh USER@IP-ADDRESS /bin/bash -c "'DISPLAY=:0 xdotool keydown $1; sleep 12; xdotool keyup $1'"
