#include <iostream>
#include <string>

using namespace std;

void downloadMP3(const string& url) {
    string command = "yt-dlp -x --audio-format mp3 \"" + url + "\"";
    cout << "Exécution de : " << command << endl;
    int result = system(command.c_str());

    if (result == 0) {
        cout << "Téléchargement terminé avec succès !" << endl;
    } else {
        cout << "Erreur lors du téléchargement." << endl;
    }
}

int main() {
    string url;
    cout << "Entrez l'URL YouTube : ";
    getline(cin, url);

    downloadMP3(url);
    return 0;
}
