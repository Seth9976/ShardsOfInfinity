// 函数名称: ?set_to_nullptr@?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAEXXZ
// 虚拟地址: 0x53b1c8
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcall?set_to_nullptr@?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAEXXZ(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x14) != 0)
    if (*(arg1 + 0x14) != 0)
        *(arg1 + 0x14) = 0
    
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    return 0
}
