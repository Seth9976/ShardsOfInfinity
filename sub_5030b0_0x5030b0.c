// 函数名称: sub_5030b0
// 虚拟地址: 0x5030b0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __stdcallsub_5030b0(HWND arg1, int32_t arg2, struct ITEMIDLIST* arg3, LPARAM arg4)
{
    // 第一条实际指令: if (arg2 == 1)
    if (arg2 == 1)
        SendMessageA(arg1, 0x466, 1, arg4)
    else if (arg2 == 2 && SHGetPathFromIDListA(arg3, &data_e49ef8) != 0)
        SendMessageA(arg1, 0x464, 0, &data_e49ef8)
    
    return 0
}
