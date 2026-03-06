// 函数名称: sub_41bbf0
// 虚拟地址: 0x41bbf0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_41bbf0(void* arg1)
{
    // 第一条实际指令: void* eax = sub_42aaa0(*(data_65ac38 + 0xb24))
    void* eax = sub_42aaa0(*(data_65ac38 + 0xb24))
    int32_t esi = *(arg1 + 0xe4)
    int32_t edx = 0
    
    if (esi s> 0)
        void* ecx_2 = arg1 + 0x20
        
        do
            if (*(ecx_2 - 4) == 1 && *ecx_2 == *(eax + 0x230))
                return ecx_2 - 0x18
            
            edx += 1
            ecx_2 += 0x2c
        while (edx s< esi)
    
    return 0
}
