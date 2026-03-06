// 函数名称: sub_4c45c0
// 虚拟地址: 0x4c45c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4c45c0(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        return 
    
    int32_t eax = 0
    label_4c45d0:
    int32_t ebx_1 = *arg1
    int32_t edi_1 = ebx_1
    
    if (eax != 0)
        eax += 0x94
    else
        eax = ebx_1
    
    int32_t edx_2 = arg1[1] * 0x94 + edi_1
    
    if (eax u< edx_2)
        do
            int32_t ecx = *(eax + 0x90)
            
            if ((ecx & 0xffff0000) != 0)
                int32_t edx_3 = arg1[3]
                arg1[3] = zx.d(ecx.w)
                *(eax + 0x90) = edx_3
                arg1[4] -= 1
                goto label_4c45d0
            
            eax += 0x94
        while (eax u< edx_2)
        
        edi_1 = ebx_1
    
    arg1[1] = 0
    arg1[3] = 0
    
    if (edi_1 != 0)
        _aligned_free_base(edi_1)
    
    __builtin_memset(arg1, 0, 0x14)
    arg1[6] = 0
}
