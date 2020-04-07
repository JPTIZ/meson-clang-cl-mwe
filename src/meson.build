subdir('mylib')

sources = files([
  'main.c',
])

executable(
  'app',
  sources,
  dependencies: libmylib_dep,
  link_with: libmylib,
  install: true,
)
