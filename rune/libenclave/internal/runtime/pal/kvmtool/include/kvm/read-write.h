#ifndef KVM_READ_WRITE_H
#define KVM_READ_WRITE_H

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

ssize_t xread(int fd, void *buf, size_t count);
ssize_t xwrite(int fd, const void *buf, size_t count);

ssize_t read_file(int fd, char *buf, size_t max_size);

ssize_t read_in_full(int fd, void *buf, size_t count);
ssize_t write_in_full(int fd, const void *buf, size_t count);

ssize_t xpread(int fd, void *buf, size_t count, off_t offset);
ssize_t xpwrite(int fd, const void *buf, size_t count, off_t offset);

ssize_t pread_in_full(int fd, void *buf, size_t count, off_t offset);
ssize_t pwrite_in_full(int fd, const void *buf, size_t count, off_t offset);

ssize_t xreadv(int fd, const struct iovec *iov, int iovcnt);
ssize_t xwritev(int fd, const struct iovec *iov, int iovcnt);

ssize_t readv_in_full(int fd, const struct iovec *iov, int iovcnt);
ssize_t writev_in_full(int fd, const struct iovec *iov, int iovcnt);

ssize_t xpreadv(int fd, const struct iovec *iov, int iovcnt, off_t offset);
ssize_t xpwritev(int fd, const struct iovec *iov, int iovcnt, off_t offset);

ssize_t preadv_in_full(int fd, const struct iovec *iov, int iovcnt, off_t offset);
ssize_t pwritev_in_full(int fd, const struct iovec *iov, int iovcnt, off_t offset);

#endif /* KVM_READ_WRITE_H */
