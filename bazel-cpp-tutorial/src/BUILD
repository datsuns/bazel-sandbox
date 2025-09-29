package(default_visibility = ["//test:__pkg__"])

cc_library(
    name = "hello_lib",
    srcs = ["hello.cc"],
    hdrs = ["hello.h"],
)


cc_binary(
    name = "hello",
    srcs = ["main.cc"],
    deps = [":hello_lib"],
)
