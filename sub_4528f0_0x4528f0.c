// 函数名称: sub_4528f0
// 虚拟地址: 0x4528f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_4528f0(int32_t* arg1)
{
    // 第一条实际指令: if (*arg1 == 0)
    if (*arg1 == 0)
        return 
    
    int32_t eax = 0
    label_452900:
    int32_t edi_1 = *arg1
    int32_t ebx_1 = edi_1
    
    if (eax != 0)
        eax += 0xc
    else
        eax = edi_1
    
    int32_t edx_1 = ebx_1 + arg1[1] * 0xc
    
    if (eax u< edx_1)
        do
            int32_t ecx_2 = *(eax + 8)
            
            if ((ecx_2 & 0xffff0000) != 0)
                int32_t edx_2 = arg1[3]
                arg1[3] = zx.d(ecx_2.w)
                *(eax + 8) = edx_2
                arg1[4] -= 1
                goto label_452900
            
            eax += 0xc
        while (eax u< edx_1)
        
        ebx_1 = edi_1
    
    arg1[1] = 0
    arg1[3] = 0
    
    if (ebx_1 != 0)
        _aligned_free_base(ebx_1)
    
    __builtin_memset(arg1, 0, 0x14)
    arg1[6] = 0
}
