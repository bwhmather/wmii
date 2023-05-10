#include <ctype.h>
#include <stdio.h>
#include <string.h>

static char*
vsmprint(const char *fmt, va_list ap) {
	va_list al;
	char *buf = "";
	int n;

	va_copy(al, ap);
	n = vsnprintf(buf, 0, fmt, al);
	va_end(al);

	buf = malloc(++n);
	if(buf)
		vsnprintf(buf, n, fmt, ap);
	return buf;
}

static char*
smprint(const char *fmt, ...) {
	va_list ap;
	char *ret;

	va_start(ap, fmt);
	ret = vsmprint(fmt, ap);
	va_end(ap);
	return ret;
}

static char*
strdup(const char *s) {
	char *ret;
	int len;

	len = strlen(s)+1;
	ret = malloc(len);
	if(ret)
		memcpy(ret, s, len);
	return ret;
}

static uint
tokenize(char *res[], uint reslen, char *str, char delim) {
	char *s;
	uint i;

	i = 0;
	s = str;
	while(i < reslen && *s) {
		while(*s == delim)
			*(s++) = '\0';
		if(*s)
			res[i++] = s;
		while(*s && *s != delim)
			s++;
	}
	return i;
}

#define strbcmp(str, const) (strncmp((str), (const), sizeof(const)-1))
static int
getbase(const char **s, long *sign) {
	const char *p;
	int ret;

	ret = 10;
	*sign = 1;
	if(**s == '-') {
		*sign = -1;
		*s += 1;
	}else if(**s == '+')
		*s += 1;

	p = *s;
	if(!strbcmp(p, "0x")) {
		*s += 2;
		ret = 16;
	}
	else if(isdigit(p[0])) {
		if(p[1] == 'r') {
			*s += 2;
			ret = p[0] - '0';
		}
		else if(isdigit(p[1]) && p[2] == 'r') {
			*s += 3;
			ret = 10*(p[0]-'0') + (p[1]-'0');
		}
	}
	else if(p[0] == '0') {
		ret = 8;
	}
	if(ret != 10 && (**s == '-' || **s == '+'))
		*sign = 0;
	return ret;
}

static bool
getlong(const char *s, long *ret) {
	const char *end;
	char *rend;
	int base;
	long sign;

	if(s == nil)
		return false;
	end = s+strlen(s);
	base = getbase(&s, &sign);
	if(sign == 0)
		return false;

	*ret = sign * strtol(s, &rend, base);
	return (end == rend);
}
