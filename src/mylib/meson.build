message('Found mylib build target.')

prefix = get_option('prefix')
include_dir = join_paths(prefix, get_option('includedir'))

install_headers(
    'mylib.h',
    install_dir: include_dir,
)

libmylib_inc = include_directories('.')
libmylib_src = files([
    'mylib.c',
])

# library('mylib', libmylib_src, version: '0.1')

libmylib = shared_library(
    'mylib',
    libmylib_src,
    c_args: ['-DMYLIB_BUILD'],
    include_directories: libmylib_inc,
    install: true
)

libmylib_dep = declare_dependency(
    include_directories: libmylib_inc,
    link_with: libmylib
)
