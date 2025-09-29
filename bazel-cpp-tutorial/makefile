BAZELISK_VERSION     := v1.27.0
BAZELISK_BIN         := bazelisk-windows-amd64.exe
TARGET_BAZEL_VERSION := 8.4.1

default: msys_special build

msys_special:
	export MSYS2_ARG_CONV_EXCL="*"

build:
	echo $(TARGET_BAZEL_VERSION) > .bazelversion
	USE_BAZEL_VERSION=$(TARGET_BAZEL_VERSION) bazel build //src:hello

run:
	USE_BAZEL_VERSION=$(TARGET_BAZEL_VERSION) bazel run //src:hello

check:
	bazel info workspace

setup-bazelisk:
	wget https://github.com/bazelbuild/bazelisk/releases/download/$(BAZELISK_VERSION)/$(BAZELISK_BIN)
	mv ./$(BAZELISK_BIN) ~/bin/bazel
	chmod +x ~/bin/bazel


.PHONY: default msys_special build check setup-bazelisk
