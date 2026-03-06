// 函数名称: sub_51a040
// 虚拟地址: 0x51a040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_51a040(void* arg1, char* arg2)
{
    // 第一条实际指令: char* edi = arg2
    char* edi = arg2
    
    while (*edi != 0)
        char* eax_1 = *(arg1 + 0xa8)
        
        if (eax_1 u< *(arg1 + 0xac))
            arg2.b = *eax_1
            *(arg1 + 0xa8) = &eax_1[1]
        else if (*(arg1 + 0x20) == 0)
            arg2.b = 0
        else
            sub_50ebb0(arg1)
            char* eax_3 = *(arg1 + 0xa8)
            arg2.b = *eax_3
            *(arg1 + 0xa8) = &eax_3[1]
        
        if (zx.d(arg2.b) != sx.d(*edi))
            return 0
        
        edi = &edi[1]
    
    *(arg1 + 0xa8) = *(arg1 + 0xb0)
    *(arg1 + 0xac) = *(arg1 + 0xb4)
    return 1
}
