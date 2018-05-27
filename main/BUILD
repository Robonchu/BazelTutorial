cc_library(
    name = "hello-get-name",
    srcs = ["hello-get-name.cc"],
    hdrs = ["hello-get-name.h"],
)

cc_binary(
    name = "hello-robots",
    srcs = ["hello-robots.cc"],
    deps = [
        ":hello-get-name",
        "//lib:hello-name",
    ],
)
