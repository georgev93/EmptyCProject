project(
  'Empty Test',
  ['c'],
  version: '1.0'
)

add_languages('cpp', native: true)

### ========== SOURCE ==========
proj_src = files(
  'src/source.c',
)

proj_inc = include_directories([
    './inc',
])

proj_link_args = []

proj_c_args = []

### ============================

### ========== FAKES ==========
fake_src = files()

fake_inc = include_directories([
  './tests/fakes/inc',
])
### ===========================

### ========== TESTS ==========
test_src = files(
  './tests/AllTests.cpp',
  './tests/testFile.cpp',
)

test_inc = include_directories([])

test_link_args = []

test_common_args = []

test_c_args = test_common_args + [
  '-Wall',
  '-Weverything',
]

test_cpp_args = test_common_args + []
### ===========================

### ========== SUBPROJECTS ========== 
test_deps = [dependency('cpputest', native: true)]
### ================================= 

### ========== DEPENDENCIES ========== 
### ================================== 

### ========== EXECUTABLES ==========
test_exe = executable('tests',
  build_by_default: false,
  dependencies: test_deps,
  sources: [proj_src, test_src],
  c_args: test_c_args,
  cpp_args: test_cpp_args,
  link_args: test_link_args,
  include_directories: [proj_inc, test_inc, fake_inc],
  native: true
)
### =================================

### ========== TESTS FOR MESON TO RUN  ==========
test('unit_tests', test_exe, args: '-c', timeout: 30, is_parallel: false)
### =============================================

### ========== CUSTOM TARGETS  ==========
run_target('unit_test', command: [test_exe, '-c'])
### =====================================

