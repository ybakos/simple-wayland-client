/* A Simple Wayland Client
 *
 * Follow the most simple path through the API to display a surface.
 *
 * An API exploration to help drive documentation.
 */
#include <stdlib.h>
#include <stdio.h>
#include <wayland-client.h>

int main(int argc, char **argv) {
	struct wl_display *display = wl_display_connect(NULL);
	struct wl_registry *registry;
	if (display) {
		registry = wl_display_get_registry(display);
	} else {
		perror("Could not obtain display");
		exit(EXIT_FAILURE);
	}
	return EXIT_SUCCESS;
}
