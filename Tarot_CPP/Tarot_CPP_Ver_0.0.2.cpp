// Version 0.0.2
// 开写了开写了（咕咕咕）
#include <iostream>
#include "sqlite3.h"
//#include <system.h>
#include <Windows.h>
#include <random>

using namespace std;
string Version = "0.0.2";

string path = "./Tarot_data/";
string file_name = "Tarot_Data.db";
string table = "Tarot_Data";
string bit[2] = { "逆位", "正位" };
string Akana[5] = { "BigAkana", "SmallAkanaLeangle", "SmallAkanaGarren", "SmallAkanaChalice", "SmallAkanaBlade" };
string BigAkana[22] = { "0 愚人(The Fool)", "Ⅰ 魔术师(The Magician)",
"Ⅱ 女教皇(The High Priestess)", "Ⅲ 女皇(The Empress)", "Ⅳ 皇帝(The Emperor)",
"Ⅴ 教皇(The Hierophant)", "Ⅵ 恋人(The lovers)", "Ⅶ 战车(The Chariot)",
"Ⅷ 力量(Strength)", "Ⅸ 隐士(The Hermit)", "Ⅹ 命运之轮(The Wheel of Fortune)",
"ⅩⅠ 正义(Justice)", "ⅩⅡ 悬吊者(The Hanged Man)", "ⅩⅢ 死神(Death)",
"ⅩⅣ 节制(Temperance)", "ⅩⅤ 魔鬼(The Devil)", "ⅩⅥ 高塔(The Tower)",
"ⅩⅦ 星星(The Star)", "ⅩⅧ 月亮(The Moon)", "ⅩⅨ 太阳(The Sun)",
"ⅩⅩ审判(Judgment)", "ⅩⅩⅠ 世界(The World)" };
string SmallAkanaLeangle[14] = {"权杖王牌", "权杖二", "权杖三", "权杖四",
"权杖五", "权杖六", "权杖七", "权杖八", "权杖九", "权杖十", "权杖侍卫", 
"权杖骑士" ,"权杖皇后", "权杖国王" };
string SmallAkanaGarren[14] = { "星币王牌", "星币二", "星币三", "星币四", 
"星币五", "星币六", "星币七", "星币八", "星币九", "星币十", "星币侍卫", 
"星币骑士", "星币皇后", "星币国王" };
string SmallAkanaChalice[14] = { "圣杯王牌", "圣杯二", "圣杯三", "圣杯四", 
"圣杯五", "圣杯六", "圣杯七", "圣杯八", "圣杯九", "圣杯十", "圣杯侍卫", 
"圣杯骑士", "圣杯皇后", "圣杯国王" };
string SmallAkanaBlade[14] = { "宝剑王牌", "宝剑二", "宝剑三", "宝剑四", 
"宝剑五", "宝剑六", "宝剑七", "宝剑八", "宝剑九", "宝剑十", "宝剑侍卫", 
"宝剑骑士","宝剑皇后","宝剑国王" };

int main(int argc, char* argv[])
{
    string path = argv[0];
    string user = argv[1];
    int Random(int, int);
    //void* time = *time(NULL);
    cout << "path:" << path << endl;
    cout << "user:" << user << endl;
    for (int i = 0;i < 10;i++)
    {
        int ND, NU;
        ND = i * 2;
        NU = (i * 2 + 4) * 5;
        int num = Random(ND, NU);
        cout << "num" << i+1 << ':' << num << endl;
        cout << "ND=" << ND << '\t' << "NU=" << NU << endl;
    }
    system("pause");
    return 0;
}

int Random(int numD, int numU)
{
    default_random_engine rand(time(NULL));
    uniform_int_distribution<int> randint(numD, numU);
    int num = randint(rand);
    return num;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
