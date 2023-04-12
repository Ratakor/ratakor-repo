#!/bin/sh

git clone https://github.com/archlinux/svntogit-packages.git --branch packages/chromium --single-branch chr
mv -f chr/trunk/*.patch .
rm -rf chr
