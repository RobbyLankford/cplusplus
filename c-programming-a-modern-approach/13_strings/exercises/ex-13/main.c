/* Creates an Index URL*/
#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}

int main(void)
{
    const char *domain = "google.com";
    char index_url[50];

    build_index_url(domain, index_url);

    printf("%s\n", index_url);

    return 0;
}
