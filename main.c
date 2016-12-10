/* A Simple Wayland Client
 *
 * Follow the most simple path through the API to display a surface.
 *
 * An API exploration to help drive documentation.
 */
#include <wayland-client.h>

int main(int argc, char **argv) {
	struct wl_display *display = wl_display_connect(NULL);
	return 0;
}
