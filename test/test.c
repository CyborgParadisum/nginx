//#include <sys/sysctl.h>
#include <printf.h>


char *sysctls[] = {
        "hw.ncpu",
        "net.inet.tcp.sendspace",
        "kern.ipc.somaxconn",
};

int main() {
    char res[16];
    size_t size;

//    sysctlbyname("kern.ostype", res, &size, NULL, 0);
//    printf("kern.ostype: %s\n", res);
//
//    sysctlbyname("kern.osrelease", res, &size, NULL, 0);
//    printf("kern.osrelease: %s\n", res);
//
//    for (int i = 0; i < sizeof(sysctls) / sizeof(char *); i++) {
//        char *name = sysctls[i];
//
//        if (sysctlbyname(name, res, &size, NULL, 0) == 0) {
//            printf("%s: %s\n", name, res);
//        }
//    }

}
