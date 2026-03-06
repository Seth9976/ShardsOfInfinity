// 函数名称: sub_461a50
// 虚拟地址: 0x461a50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_461a50(void* arg1)
{
    // 第一条实际指令: int32_t eax = *(*(arg1 + 0x640) * 0x208 + arg1 + 0x20c)
    int32_t eax = *(*(arg1 + 0x640) * 0x208 + arg1 + 0x20c)
    
    if (eax != 0)
        return eax
    
    int32_t i
    
    do
        arg1 = *(arg1 + 0x784)
        
        if (arg1 == 0)
            return 0
        
        i = *(*(arg1 + 0x640) * 0x208 + arg1 + 0x20c)
    while (i == 0)
    
    return i
}
