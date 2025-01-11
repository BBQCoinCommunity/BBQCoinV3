
Debian
====================
This directory contains files used to package bbqcoind/bbqcoin-qt
for Debian-based Linux systems. If you compile bbqcoind/bbqcoin-qt yourself, there are some useful files here.

## bbqcoin: URI support ##


bbqcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bbqcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bbqcoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/bbqcoin128.png` to `/usr/share/pixmaps`

bbqcoin-qt.protocol (KDE)

