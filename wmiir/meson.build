wmiir_sources = [
  'src/main.c',
]

wmiir_dependencies = [
  libutf_dep,
  libfmt_dep,
  libregexp_dep,
  libbio_dep,
  libixp_dep,
  libstuff_dep,
]

wmiir = executable(
  'wmiir', wmiir_sources,
  dependencies : wmiir_dependencies,
  install : true,
)

