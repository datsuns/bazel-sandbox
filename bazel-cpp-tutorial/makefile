BAZELISK_VERSION     := v1.27.0
BAZELISK_BIN         := bazelisk-windows-amd64.exe
TARGET_BAZEL_VERSION := 8.4.1

default: msys_special build

msys_special:
	export MSYS2_ARG_CONV_EXCL="*"

setup:
	echo $(TARGET_BAZEL_VERSION) > .bazelversion

build:
	bazel build //src:hello

run:
	bazel run //src:hello

test:
	bazel test //test:hello_test

check:
	bazel info workspace

setup-bazelisk:
	wget https://github.com/bazelbuild/bazelisk/releases/download/$(BAZELISK_VERSION)/$(BAZELISK_BIN)
	mv ./$(BAZELISK_BIN) ~/bin/bazel
	chmod +x ~/bin/bazel


.PHONY: default msys_special setup build run test check setup-bazelisk
