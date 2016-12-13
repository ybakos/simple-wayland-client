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

	// Connect to the display server
	struct wl_display *display = wl_display_connect(NULL);
	if (!display) {
		perror("Could not obtain display");
		exit(EXIT_FAILURE);
	}

	// Obtain the registry
	struct wl_registry *registry = wl_display_get_registry(display);

	wl_registry_destroy(registry);
	wl_display_disconnect(display);
	return EXIT_SUCCESS;
}
