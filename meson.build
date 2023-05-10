project('wmii', 'c', default_options: [])

mandir = get_option('mandir')
sysconfdir = get_option('sysconfdir')

add_global_arguments([
  '-DVERSION="BWHM PATCHES - 1.0.0"',
  '-DCOPYRIGHT="©2010 Kris Maglione, ©2023 Ben Mather"',
  '-DCONFDIR="wmii"',
  '-DCONFPREFIX="' + sysconfdir + '"',
  '-DLOCALCONF="~/.wmii"',
  '-DGLOBALCONF="' + (sysconfdir / 'wmii') + '"',
  '-Wimplicit',
  '-Wmissing-prototypes',
  '-Wno-comment',
  '-Wno-missing-braces',
  '-Wno-parentheses',
  '-Wno-sign-compare',
  '-Wno-switch',
  '-Wpointer-arith',
  '-Wreturn-type',
  '-Wstrict-prototypes',
  '-Wtrigraphs',
  '-Wno-use-after-free',
], language : 'c')

cc = meson.get_compiler('c')

dl_dep = cc.find_library('dl', required : false)
m_dep = cc.find_library('m', required : false)
cairo_dep = dependency('cairo')
x11_dep = dependency('x11')
xext_dep = dependency('xext')
xft_dep = dependency('xft')
xinerama_dep = dependency('xinerama')
xrandr_dep = dependency('xrandr')
xrender_dep = dependency('xrender')

subdir('man')

subdir('libutf')
subdir('libfmt')
subdir('libregexp')
subdir('libixp')
subdir('libbio')
subdir('libstuff')
subdir('libwmii_hack')

subdir('wikeyname')
subdir('wimenu')
subdir('wistrut')
subdir('witray')
subdir('wmii')
subdir('wmii9menu')
subdir('wmiir')
