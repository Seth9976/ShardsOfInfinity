// 函数名称: sub_44e870
// 虚拟地址: 0x44e870
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

HINSTANCE __fastcallsub_44e870(PSTR arg1)
{
    // 第一条实际指令: HINSTANCE result
    HINSTANCE result
    result.b = ShellExecuteA(nullptr, "open", arg1, nullptr, nullptr, SW_SHOWNORMAL) u>= 0x20
    return result
}
