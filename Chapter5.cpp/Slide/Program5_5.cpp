// Chuong trinh nay tinh so doi bong da ma mot lien doan tre em co the tao ra tu so luong cau thu co san. Chuong trinh nay cung minh hoa viec kiem tra dau vao bang cach su dung vong lap while.
#include <iostream>
using namespace std;

int main()
{
    // Hang so cho so luong cau thu toi thieu va toi da
    const int MIN_PLAYERS = 9,
              MAX_PLAYERS = 15;

    // Bien
    int players,         // So luong cau thu co san
        teamPlayers,     // So luong cau thu mong muon cho moi doi
        numTeams,        // So doi bong tinh duoc
        leftOver;        // So cau thu con thua

    // Nhap so luong cau thu mong muon cho moi doi.
    cout << "Nhap so luong cau thu ban muon cho moi doi: ";
    cin >> teamPlayers;

    // Kiem tra dau vao.
    while (teamPlayers < MIN_PLAYERS || teamPlayers > MAX_PLAYERS)
    {
        // Thong bao loi.
        cout << "Ban nen co it nhat " << MIN_PLAYERS
             << " cau thu va khong qua " << MAX_PLAYERS << " cau thu cho moi doi.\n";

        // Nhap lai dau vao.
        cout << "Nhap so luong cau thu ban muon cho moi doi: ";
        cin >> teamPlayers;
    }

    // Nhap so luong cau thu co san.
    cout << "Nhap so luong cau thu co san: ";
    cin >> players;

    // Kiem tra dau vao.
    while (players <= 0)
    {
        // Nhap lai dau vao.
        cout << "Vui long nhap so luong cau thu lon hon 0: ";
        cin >> players;
    }

    // Tinh so doi bong co the tao ra.
    numTeams = players / teamPlayers;

    // Tinh so cau thu con thua lai.
    leftOver = players % teamPlayers;

    // Hien thi ket qua.
    cout << "Ban co the tao ra " << numTeams << " doi bong, con thua " << leftOver << " cau thu.\n";

    return 0;
}
