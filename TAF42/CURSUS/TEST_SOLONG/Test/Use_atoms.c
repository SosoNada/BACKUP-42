#include <X11/Xlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <X11/Xatom.h>

int main() {
	Display *display = XOpenDisplay(NULL);
	if (display == NULL) {
		 printf("Unable to open X display\n");
		 exit (1);
	}

	// Recuperation de l'atom
	Atom atom = XInternAtom(display, "_NET_ACTIVE_WINDOW", False);
	if (atom == None) {
		printf("Erreur de recuperation de l'atom\n");
		exit (1);
	}

	// Utilisation de l'atom pour interagir avec les proprietes de la fenetre
	Window activeWindow;
	unsigned long nitems, bytes_after;
	Atom actual_type;
	int actual_format;
	if (XGetWindowProperty(display, DefaultRootWindow(display), atom, 0, 1, False, XA_WINDOW, &actual_type, &actual_format, &nitems, &bytes_after, (unsigned char **)&activeWindow) == Success) {
		if (actual_type == XA_WINDOW) {
			char *Window_titre = NULL;
			XFetchName(display, activeWindow, &Window_titre);
			if (Window_titre != NULL) {
				printf("Titre de la fenetre active : %s\n", Window_titre);
				XFree(Window_titre);
			} else { 
				printf("Le type retourné n'est pas une fenêtre.\n");
			}
		} else {
			printf("Erreur de XGetWindowProperty\n");
		}
	}

	return 0;
}

