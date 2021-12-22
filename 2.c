char *deserialize(const char *s) {

    size_t len = strnlen(s, 4096);

    char *b = (char *) malloc(len);

    strcpy(b, s);

    return b;

}
