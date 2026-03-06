// 函数名称: sub_48aa50
// 虚拟地址: 0x48aa50
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_48aa50(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        return 
    
    int32_t esi_1 = 0
    label_48aa60:
    int32_t ecx = *arg1
    int32_t edx_1 = ecx
    
    if (esi_1 != 0)
        esi_1 += 0x1c0
    else
        esi_1 = ecx
    
    int32_t eax = arg1[1] * 0x1c0 + edx_1
    
    if (esi_1 u< eax)
        do
            if ((*(esi_1 + 0x1bc) & 0xffff0000) != 0)
                sub_4861a0(esi_1)
                int32_t ecx_2 = arg1[3]
                arg1[3] = zx.d(*(esi_1 + 0x1bc))
                *(esi_1 + 0x1bc) = ecx_2
                arg1[4] -= 1
                goto label_48aa60
            
            esi_1 += 0x1c0
        while (esi_1 u< eax)
        
        edx_1 = ecx
    
    arg1[1] = 0
    arg1[3] = 0
    
    if (edx_1 != 0)
        _aligned_free_base(edx_1)
    
    __builtin_memset(arg1, 0, 0x14)
    arg1[6] = 0
}
