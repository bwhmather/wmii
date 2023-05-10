#include <fmt.h>
#include "bio.h"

Biobuf bout;

void
bcat(Biobuf *b, char *name)
{
	char buf[1000];
	int n;

	while((n = Bread(b, buf, sizeof buf)) > 0){
		if(Bwrite(&bout, buf, n) < 0)
			fprint(2, "writing during %s: %r\n", name);
	}
	if(n < 0)
		fprint(2, "reading %s: %r\n", name);
}
