// 函数名称: sub_4c6af0
// 虚拟地址: 0x4c6af0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULTsub_4c6af0()
{
    // 第一条实际指令: int32_t* ecx = data_ce26e4
    int32_t* ecx = data_ce26e4
    
    if (ecx != 0 && ecx[1] == 0x19 && sub_4459f0(ecx) != 0)
        HWND hWnd = GetDlgItem(data_ce1c90, 0x7b)
        LRESULT wParam = SendMessageA(hWnd, 0x188, 0, 0)
        
        if (wParam != 0xffffffff)
            return SendMessageA(hWnd, 0x199, wParam, 0)
    
    return 0
}
