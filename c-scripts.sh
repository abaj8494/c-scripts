#!/bin/sh
/usr/local/bin/git add *
/usr/local/bin/git commit -m "crontab $(date +%X)"
/usr/local/bin/git push -u origin main
