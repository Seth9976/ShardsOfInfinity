// 函数名称: sub_4b6d80
// 虚拟地址: 0x4b6d80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4b6d80(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        return 
    
    int32_t* esi_1 = nullptr
    label_4b6d90:
    int32_t* ecx = *arg1
    int32_t* edx_1 = ecx
    
    if (esi_1 != 0)
        esi_1 = &esi_1[0x1b]
    else
        esi_1 = ecx
    
    void* eax = arg1[1] * 0x6c + edx_1
    
    if (esi_1 u< eax)
        do
            if ((esi_1[0x1a] & 0xffff0000) != 0)
                sub_4b6e20(arg1, esi_1)
                goto label_4b6d90
            
            esi_1 = &esi_1[0x1b]
        while (esi_1 u< eax)
        
        edx_1 = ecx
    
    arg1[1] = 0
    arg1[3] = 0
    
    if (edx_1 != 0)
        _aligned_free_base(edx_1)
    
    __builtin_memset(arg1, 0, 0x14)
    arg1[6] = 0
}
