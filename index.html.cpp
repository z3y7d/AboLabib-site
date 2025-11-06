#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    ofstream file("index.html");
    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file << "<!DOCTYPE html>\n";
    file << "<html lang='en'>\n";
    file << "<head>\n";
    file << "<meta charset='UTF-8'>\n";
    file << "<meta name='viewport' content='width=device-width, initial-scale=1.0'>\n";
    file << "<title>Abo Labib</title>\n";
    file << "<style>\n";
    file << "body {\n";
    file << "  margin: 0;\n";
    file << "  height: 100vh;\n";
    file << "  background: url('https://i.postimg.cc/ryDg5V9p/zeyad-ashraf.jpg') no-repeat center top fixed;\n";
    file << "  background-size: cover;\n";
    file << "  animation: moveBG 20s linear infinite;\n";
    file << "  font-family: 'Poppins', sans-serif;\n";
    file << "  color: white;\n";
    file << "  text-align: center;\n";
    file << "}\n";

    file << "@keyframes moveBG {\n";
    file << "  0% { background-position: center top; }\n";
    file << "  50% { background-position: center bottom; }\n";
    file << "  100% { background-position: center top; }\n";
    file << "}\n";

    file << ".logo {\n";
    file << "  position: absolute;\n";
    file << "  top: 20px;\n";
    file << "  left: 40px;\n";
    file << "}\n";
    file << ".logo img {\n";
    file << "  width: 200px;\n";
    file << "  border-radius: 20px;\n";
    file << "}\n";
    file << ".links {\n";
    file << "  position: relative;\n";
    file << "  top: 200px;\n";
    file << "}\n";
    file << ".links a {\n";
    file << "  display: block;\n";
    file << "  margin: 20px auto;\n";
    file << "  width: 250px;\n";
    file << "  padding: 12px;\n";
    file << "  text-decoration: none;\n";
    file << "  color: black;\n";
    file << "  background: gold;\n";
    file << "  border-radius: 12px;\n";
    file << "  font-weight: bold;\n";
    file << "  font-size: 18px;\n";
    file << "  transition: 0.3s;\n";
    file << "}\n";
    file << ".links a:hover {\n";
    file << "  background: #ffcf40;\n";
    file << "  transform: scale(1.05);\n";
    file << "}\n";
    file << ".qrcode {\n";
    file << "  margin-top: 30px;\n";
    file << "}\n";
    file << "footer {\n";
    file << "  position: absolute;\n";
    file << "  bottom: 30px;\n";
    file << "  width: 100%;\n";
    file << "  color: gold;\n";
    file << "  font-size: 18px;\n";
    file << "}\n";
    file << "</style>\n";
    file << "</head>\n<body>\n";

    file << "<div class='logo'>\n";
    file << "<img src='https://files.oaiusercontent.com/file_0000000033ac71f5b9be1eadba24363d' alt='Abo Labib Logo'>\n";
    file << "</div>\n";

    file << "<div class='links'>\n";
    file << "<a href='https://wa.me/201550591333'>WhatsApp 1</a>\n";
    file << "<a href='https://wa.me/201029424424'>WhatsApp 2</a>\n";
    file << "<a href='https://wa.me/79373208693'>WhatsApp 3</a>\n";
    file << "<a href='https://t.me/EL_quwa0'>Telegram</a>\n";
    file << "<a href='https://www.facebook.com/cc.zeyad'>Facebook</a>\n";
    file << "<a href='https://www.instagram.com/abo_l7bib/'>Instagram</a>\n";
    file << "</div>\n";

    // QR Code مباشر للرابط الافتراضي على GitHub Pages HTTPS
    file << "<div class='qrcode'>\n";
    file << "<img src='https://chart.googleapis.com/chart?chs=200x200&cht=qr&chl=https://abolabib0.github.io/zeyadlabib-site/&choe=UTF-8' alt='QR Code'>\n";
    file << "</div>\n";

    file << "<footer>Made by Abo Labib 😎</footer>\n";
    file << "</body>\n</html>\n";

    file.close();

    cout << "Website ready for GitHub Pages HTTPS! Open index.html to view it." << endl;
    system("start index.html");
    return 0;
}
