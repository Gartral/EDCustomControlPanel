#!/bin/bash
passh -p USER_PASSWORD ssh USER@IP-ADDRESS /bin/bash -c "'DISPLAY=:0 xdotool keyup $1'"
