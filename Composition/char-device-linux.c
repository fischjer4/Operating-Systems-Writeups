struct char_device {
        struct list_head        hash;
        atomic_t                count;
        dev_t                   dev;
        atomic_t                openers;
        struct semaphore        sem;
};

