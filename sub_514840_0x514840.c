// 函数名称: sub_514840
// 虚拟地址: 0x514840
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_514840(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    uint32_t i = arg1[2]
    uint32_t ecx_1 = i & 7
    uint32_t i_2 = i
    var_8 = ecx_1
    
    if (ecx_1 != 0)
        int32_t edi = arg1[3]
        int32_t eax_5
        
        if (i s>= ecx_1)
            eax_5 = edi
        else
            int32_t ebx_1 = arg1[1]
            
            do
                char* eax_1 = *arg1
                
                if (eax_1 u< ebx_1)
                    ecx_1.b = *eax_1
                    *arg1 = &eax_1[1]
                else
                    ecx_1.b = 0
                
                uint32_t eax_4 = zx.d(ecx_1.b) << i.b
                i += 8
                eax_5 = eax_4 | edi
                arg1[2] = i
                edi = eax_5
                arg1[3] = edi
            while (i s<= 0x18)
            
            ecx_1 = var_8
        
        i -= ecx_1
        arg1[3] = eax_5 u>> ecx_1.b
        i_2 = i
        arg1[2] = i
    
    int32_t i_1 = 0
    
    if (i s<= 0)
    label_5148c3:
        int32_t edi_1 = arg1[1]
        
        do
            char* eax_6 = *arg1
            
            if (eax_6 u< edi_1)
                i.b = *eax_6
                *arg1 = &eax_6[1]
            else
                i.b = 0
            
            *(&var_8 + i_1) = i.b
            i_1 += 1
        while (i_1 s< 4)
    else
        i = arg1[3]
        
        do
            uint32_t eax
            eax.b = arg1[3].b
            i_2 -= 8
            *(&var_8 + i_1) = eax.b
            i_1 += 1
            i u>>= 8
            arg1[3] = i
        while (i_2 s> 0)
        
        arg1[2] = i_2
        
        if (i_1 s< 4)
            goto label_5148c3
    
    int16_t eax_8 = var_8.w
    uint32_t ebx_4 = (zx.d(eax_8:1.b) << 8) + zx.d(eax_8.b)
    
    if ((zx.d(var_8:3.b) << 8) + zx.d(var_8:2.b) == (ebx_4 ^ 0xffff))
        char* edx = *arg1
        
        if (&edx[ebx_4] u<= arg1[1])
            void* ecx_5 = arg1[4]
            int32_t edi_2 = arg1[6]
            
            if (ecx_5 + ebx_4 u<= edi_2)
                goto label_51495c
            
            if (arg1[7] != 0)
                int32_t edx_1 = arg1[5]
                void* ecx_6 = ecx_5 - edx_1
                int32_t i_3 = edi_2 - edx_1
                var_8 = ecx_6
                
                for (; ecx_6 + ebx_4 s> i_3; i_3 *= 2)
                
                int32_t i_4 = i_3
                int32_t var_1c_1 = edx_1
                int32_t eax_16 = sub_52383b()
                
                if (eax_16 != 0)
                    edx = *arg1
                    ecx_5 = var_8 + eax_16
                    arg1[5] = eax_16
                    arg1[4] = ecx_5
                    arg1[6] = eax_16 + i_3
                label_51495c:
                    sub_51d5b0(ecx_5, edx, ebx_4)
                    *arg1 += ebx_4
                    arg1[4] += ebx_4
                    return 1
    
    return 0
}
