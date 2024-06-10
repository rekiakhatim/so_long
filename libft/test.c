// Fonction pour trouver la dernière occurrence d'un caractère 'c' dans une chaîne 's'
char *ft_strrchr(const char *s, int c)
{
    // Déclare un pointeur vers un caractère constant nommé 'x', initialisé à NULL
    char const *x;

    x = NULL;

    // Itère à travers chaque caractère dans la chaîne jusqu'à ce que le caractère null soit rencontré
    while (*s)
    {
        // Si le caractère actuel est égal au caractère spécifié 'c'
        if (*s == (char)c)
            // Met à jour le pointeur 'x' pour pointer la position actuelle dans la chaîne
            x = s;

        // Passe au caractère suivant dans la chaîne
        s++;
    }

    // Vérifie si le dernier caractère dans la chaîne est égal à 'c'
    if (*s == (char)c)
        // Si vrai, retourne un pointeur vers ce caractère
        return ((char *)s);
    else
        // Si le dernier caractère n'est pas égal à 'c', retourne le pointeur 'x'
        // qui pointe vers la dernière occurrence de 'c' dans la chaîne
        return ((char *)x);
}
