void init_special_inode(struct inode *inode, umode_t mode, dev_t rdev)
{
        inode->i_mode = mode;
        if (S_ISCHR(mode)) {
                inode->i_fop = &def_chr_fops;
                inode->i_rdev = to_kdev_t(rdev);
                inode->i_cdev = cdget(rdev);
        } else
                ...
}

