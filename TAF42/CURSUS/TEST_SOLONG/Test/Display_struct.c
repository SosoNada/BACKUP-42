typedef struct _XDisplay Display;
struct _XDisplay {
    int fd;                             /* descripteur de fichier pour l'affichage */
    int private1;
    int proto_major_version;            /* version majeure du protocole */
    int proto_minor_version;            /* version mineure du protocole */
    char *vendor;                       /* chaîne de fournisseur */
    XID private2;
    XID private3;
    int private4;
    int private5;
    int private6;
    int resource_alloc;
    int byte_order;                     /* ordre des octets d'écran, LSBFirst, MSBFirst */
    int bitmap_unit;                    /* rembourrage et exigences en matière de données */
    int bitmap_pad;                     /* exigences de rembourrage sur les bitmaps */
    int bitmap_bit_order;               /* Le moins significatif et le plus significatif */
    unsigned long  nformats;            /* nombre de formats de pixmap dans la liste */
    ScreenFormat *pixmap_format;        /* pixmap format list */
    int private8;
    int release;                        /* libération du serveur */
    struct _XPrivate *private9;
    int qlen;                           /* Length of input event queue */
    unsigned long last_request_read;    /* numéro de séquence du dernier événement lu */
    unsigned long request;              /* numéro de séquence de la dernière requête effectuée */
    XPointer private10;
    XPointer private11;
    XPointer private12;
    XPointer private13;
    int unused;                         /* pointeur vers les routines SunOpenLook */
    unsigned long request_length;       /* durée de la dernière requête */
    char *kenv;                         /* kenv pour la conformité sysV/posix */
    Atom *atoms;                        /* tableau d'atomes */
    unsigned long max_request_size;     /* taille maximale de la requête */
    struct _XrmHashBucketRec *db;       /* base de données des ressources */
    char *default_screen_string;
    int default_screen;                 /* base de données des ressources */
    int nscreens;                       /* nombre d'écrans */
    Screen *screens;                    /* pointeur vers la liste des écrans */
    unsigned long motion_buffer;        /* taille du tampon de mouvement */
    unsigned long private16;
    int min_keycode;                    /* code clé minimum défini */
    int max_keycode;                    /* code clé maximum défini */
    XPointer private17;
    XPointer private18;
    int private19;
    char *xdefaults;                    /* contenu de la zone de fusion par défaut */
};

