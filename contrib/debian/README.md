
Debian
====================
This directory contains files used to package ohonetworkd/ohonetwork-qt
for Debian-based Linux systems. If you compile ohonetworkd/ohonetwork-qt yourself, there are some useful files here.

## ohonetwork: URI support ##


ohonetwork-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ohonetwork-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ohonetwork-qt binary to `/usr/bin`
and the `../../share/pixmaps/ohonetwork128.png` to `/usr/share/pixmaps`

ohonetwork-qt.protocol (KDE)

