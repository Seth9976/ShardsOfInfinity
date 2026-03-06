// 函数名称: sub_4d32e0
// 虚拟地址: 0x4d32e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4d32e0()
{
    // 第一条实际指令: int32_t var_c
    int32_t var_c
    sub_44edc0(&var_c)
    int32_t* edi = data_ce24d4
    edi[0xb] = var_c
    int32_t var_8
    edi[0xc] = var_8
    
    while (edi[0xf] != 0)
        int32_t* ecx_1 = edi[0xd]
        void* eax_2 = ecx_1[1]
        edi[0xd] = eax_2
        
        if (eax_2 == 0)
            edi[0xe] = 0
        else
            *(eax_2 + 8) = 0
        
        int32_t i = *ecx_1
        edi[0xf] -= 1
        sub_45d050(ecx_1, 0xc)
        void* eax_3 = data_ce24d4
        int32_t* ecx_2 = *(eax_3 + 0xc)
        
        if (ecx_2 == 0)
        label_4d3353:
            ecx_2 = nullptr
        else
            while (*ecx_2 != i)
                ecx_2 = ecx_2[1]
                
                if (ecx_2 == 0)
                    goto label_4d3353
        
        void* esi_1 = ecx_2[2]
        int32_t edx_1 = ecx_2[1]
        
        if (esi_1 == 0)
            *(eax_3 + 0xc) = edx_1
        else
            *(esi_1 + 4) = edx_1
        
        void* esi_2 = ecx_2[1]
        int32_t edx_2 = ecx_2[2]
        
        if (esi_2 == 0)
            *(eax_3 + 0x10) = edx_2
        else
            *(esi_2 + 8) = edx_2
        
        *(eax_3 + 0x14) -= 1
        sub_45d050(ecx_2, 0xc)
        edi = data_ce24d4
    
    int32_t* eax_4 = data_cdf428
    
    if (eax_4 == 0)
        sub_44e4d0(eax_4, &data_5559b1, "gpGameData", "c:\ax2017\engine\game.h", 0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t* ebx = *eax_4
    void* edx_3 = nullptr
    int32_t ecx_3 = ebx[1] * 0x6c
    int32_t var_8_1 = ecx_3
    void* result
    
    while (true)
        void* eax_5
        
        if (edx_3 != 0)
            eax_5 = *ebx
            edx_3 += 0x6c
        else
            edx_3 = *ebx
            eax_5 = edx_3
        
        result = eax_5 + ecx_3
        
        if (edx_3 u>= result)
            break
        
        int32_t esi_3
        
        while (true)
            esi_3 = *(edx_3 + 0x68)
            
            if ((esi_3 & 0xffff0000) != 0)
                break
            
            edx_3 += 0x6c
            
            if (edx_3 u>= result)
                return result
        
        if (*data_ce26e0 == 1)
            if (edi[0x1c] == esi_3)
                continue
            else if (edi[0x1d] == esi_3)
                continue
            else if (edi[0x1e] == esi_3)
                continue
        
        int32_t* i_1 = *(*edi + (((esi_3 s>> 4 | esi_3) & edi[1]) << 2))
        ecx_3 = var_8_1
        
        if (i_1 != 0)
            do
                ecx_3 = var_8_1
                
                if (esi_3 == *i_1)
                    break
                
                i_1 = i_1[5]
            while (i_1 != 0)
    
    return result
}
