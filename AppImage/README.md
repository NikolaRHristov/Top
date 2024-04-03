# Build the AppImage

```sh
podman pull ubuntu:18.04
podman run --interactive --tty --rm --volume $PWD:/nvtop ubuntu:18.04
cd nvtop
./AppImage/make_appimage.sh
```
