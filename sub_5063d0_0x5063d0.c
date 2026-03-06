// 函数名称: sub_5063d0
// 虚拟地址: 0x5063d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

LRESULTsub_5063d0()
{
    // 第一条实际指令: void* ecx = data_e47264
    void* ecx = data_e47264
    LRESULT result = *(ecx + 4)
    
    if (result != 0)
        result = *(result + 0x14)
        
        if (result != 0x63 && result != 3)
            HWND hWnd = GetParent(*(ecx + 0x14))
            data_e49ee4 = hWnd
            data_e49ee8 = GetDlgCtrlID(hWnd)
            void* eax_1 = data_e47264
            data_e49eec = 0x42a
            LRESULT eax_2 = SendMessageA(*(eax_1 + 0x18), 0x18f, 0, *(eax_1 + 4))
            WPARAM wParam = data_e49ee8
            
            if (eax_2 == 0xffffffff)
                eax_2 = 0xffffffff
            
            data_e49ef0 = eax_2
            return SendMessageA(*(data_e47264 + 8), 0x4e, wParam, &data_e49ee4)
    
    return result
}
