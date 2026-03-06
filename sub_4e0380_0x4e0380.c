// 函数名称: sub_4e0380
// 虚拟地址: 0x4e0380
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4e0380(int32_t* arg1, int32_t arg2, float arg3 @ xmm1, float arg4 @ xmm3)
{
    // 第一条实际指令: int32_t* ecx_2
    int32_t* ecx_2
    
    if (*(arg1 + 0x11) == 0 || arg2 s<= 0)
        int32_t edx_3 = arg1[1]
        int32_t eax_2 = 0
        
        if (edx_3 s> 0)
            int32_t* ecx_4 = *arg1 + 8
            
            while (not(*ecx_4 f>= arg3))
                eax_2 += 1
                ecx_4 = &ecx_4[4]
                
                if (eax_2 s>= edx_3)
                    break
        
        ecx_2 = *arg1
        
        if (eax_2 != 0)
            if (eax_2 == edx_3)
                return sub_4e02c0(&ecx_2[-4 + edx_3 * 4], arg1[2], arg4)
            
            int32_t eax_4 = eax_2 * 2
            void* esi = &ecx_2[eax_4 * 2]
            float xmm2_2 = (arg3 f- *(esi - 8)) / (ecx_2[eax_4 * 2 + 2] f- *(esi - 8))
            float xmm0_4 = sub_4e02c0(esi - 0x10, arg1[2], arg4)
            float xmm0_5 = sub_4e02c0(esi, arg1[2], arg4)
            return sub_4145f0(*(esi + 0xc), xmm2_2, xmm0_4, xmm0_5)
    else
        ecx_2 = *arg1 - 0x10 + (arg1[1] << 4)
    
    return sub_4e02c0(ecx_2, arg1[2], arg4)
}
