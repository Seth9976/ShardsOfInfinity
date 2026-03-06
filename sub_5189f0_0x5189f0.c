// 函数名称: sub_5189f0
// 虚拟地址: 0x5189f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_5189f0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* esi = arg1
    void* esi = arg1
    
    for (char* i = nullptr; i s< 4; i = &i[1])
        char* eax_1 = *(esi + 0xa8)
        
        if (eax_1 u< *(esi + 0xac))
            arg1.b = *eax_1
            *(esi + 0xa8) = &eax_1[1]
        else if (*(esi + 0x20) == 0)
            arg1.b = 0
        else
            sub_50ebb0(esi)
            char* eax_3 = *(esi + 0xa8)
            arg1.b = *eax_3
            *(esi + 0xa8) = &eax_3[1]
        
        if (arg1.b != i[arg2])
            return 0
    
    return 1
}
