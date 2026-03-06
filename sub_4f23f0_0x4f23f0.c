// 函数名称: sub_4f23f0
// 虚拟地址: 0x4f23f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4f23f0(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t i_1 = 0
    void* edi = arg1 + 8
    int32_t i
    
    do
        int32_t ebx_1 = 0
        int32_t eax_2
        
        for (int32_t j = 0; j s< 8; )
            int32_t* eax_1 = &arg2[3]
            
            if ((j.b & 1) == 0)
                eax_1 = arg2
            
            float xmm0_1
            
            if ((j.b & 2) == 0)
                xmm0_1 = arg2[1]
            else
                xmm0_1 = arg2[4]
            
            float xmm2_1
            
            if ((j.b & 4) == 0)
                xmm2_1 = arg2[2]
            else
                xmm2_1 = arg2[5]
            
            eax_2 = ebx_1 + 1
            
            if (0 f<= *(edi - 4) * xmm0_1 + *eax_1 * *(edi - 8) + *edi * xmm2_1 + *(edi + 4))
                eax_2 = ebx_1
            
            j += 1
            ebx_1 = eax_2
        
        if (ebx_1 == 8)
            eax_2.b = 0
            return eax_2
        
        edi += 0x10
        i = i_1 + 1
        i_1 = i
    while (i s< 6)
    
    i.b = 1
    return i
}
