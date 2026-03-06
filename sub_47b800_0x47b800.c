// 函数名称: sub_47b800
// 虚拟地址: 0x47b800
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_47b800(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        return 
    
    int32_t esi_1 = 0
    label_47b810:
    int32_t ecx = *arg1
    int32_t edx_1 = ecx
    
    if (esi_1 != 0)
        esi_1 += 0x1008
    else
        esi_1 = ecx
    
    int32_t eax = arg1[1] * 0x1008 + edx_1
    
    if (esi_1 u< eax)
        do
            if ((*(esi_1 + 0x1004) & 0xffff0000) != 0)
                sub_47ba20(esi_1)
                int32_t ecx_2 = arg1[3]
                arg1[3] = zx.d(*(esi_1 + 0x1004))
                *(esi_1 + 0x1004) = ecx_2
                arg1[4] -= 1
                goto label_47b810
            
            esi_1 += 0x1008
        while (esi_1 u< eax)
        
        edx_1 = ecx
    
    arg1[1] = 0
    arg1[3] = 0
    
    if (edx_1 != 0)
        _aligned_free_base(edx_1)
    
    __builtin_memset(arg1, 0, 0x14)
    arg1[6] = 0
}
