#include <stdio.h>
#include <X11/Xlib.h>

int main() {
	Display *display = XOpenDisplay(NULL);
	Atom *atoms;
	int count;
	int i = 0;

	if (display == NULL){
		printf("Unable to open X display\n");
		return 1;
	}

	if(!(atoms = XListProperties(display, XDefaultRootWindow(display), &count))) {
		printf("Failed to list X properties\n");
		XCloseDisplay(display);
		return 1;
	}

	printf("Know X atoms:\n");
	while(i < count) {
		char *name = XGetAtomName(display, atoms[i]);
		printf("%s (%ld)\n", name, atoms[i]);
		XFree(name);
		i++;
	}
	
	XFree(atoms);
	XCloseDisplay(display);

		return 0;
}
