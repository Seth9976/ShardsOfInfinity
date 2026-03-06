// 函数名称: sub_4239d0
// 虚拟地址: 0x4239d0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4239d0(uint32_t arg1)
{
    // 第一条实际指令: int32_t eax = sub_472550(arg1, sub_4225d0)
    int32_t eax = sub_472550(arg1, sub_4225d0)
    int32_t* ebx = data_65aabc
    data_65ab84 = 0
    data_65ac08 = 0
    
    if (ebx != 0)
        void* const i_2 = nullptr
        sub_412b20(&ebx[0x111], &i_2)
        
        for (void* const i = i_2; i != 0xffffffff; i = i_2)
            if (*(i + 0x1b8) == 0)
                int32_t eax_4 = *(i + 0x1c8)
                void* esi_1 = i + 0x28
                int32_t edi_1 = 0
                
                while (true)
                    if (*(esi_1 - 4) == 1)
                        void* eax_5 = sub_42aaa0(*(data_65ac38 + 0xb24))
                        
                        if (*esi_1 == *(eax_5 + 0x230))
                            *((data_65ab84 << 2) + &data_65ab04) = eax_4
                            data_65ab84 += 1
                            break
                    
                    edi_1 += 1
                    esi_1 += 0x2c
                    
                    if (edi_1 s>= 5)
                        *((data_65ac08 << 2) + &data_65ab88) = eax_4
                        data_65ac08 += 1
                        break
            else
                int32_t ecx_2 = *(i + 0x1c0)
                int32_t eax_2 = adc.d(*(i + 0x1c4), 0, ecx_2 u>= 0xfffff448)
                int32_t temp1_1 = ebx[1]
                
                if (eax_2 s<= temp1_1 && (eax_2 s< temp1_1 || ecx_2 + 0xbb8 u< *ebx))
                    int32_t ecx_4 = ebx[0x114]
                    ebx[0x114] = zx.d(*(i + 0x1c8))
                    *(i + 0x1c8) = ecx_4
                    ebx[0x115] -= 1
            
            sub_412b20(&ebx[0x111], &i_2)
        
        int32_t ecx_10 = data_65ac08 << 2
        int32_t eax_9 = ecx_10 s>> 2
        sub_429140(eax_9, ecx_10 + &data_65ab88, &data_65ab88, eax_9, sub_423920)
        int32_t ecx_11 = data_65ab84 << 2
        int32_t eax_12 = ecx_11 s>> 2
        sub_429140(eax_12, ecx_11 + &data_65ab04, &data_65ab04, eax_12, sub_423920)
        uint32_t esi_2 = 0
        void* edi_2 = nullptr
        
        while (true)
            eax = sub_41b7f0(edi_2 + 0xe47ef8, arg1, "tblGamesYours", esi_2)
            int32_t ecx_14 = esi_2 + (data_65aafc << 2)
            int32_t edx_3
            
            if (ecx_14 s< data_65ab84)
                edx_3 = *((ecx_14 << 2) + &data_65ab04)
            
            if (ecx_14 s>= data_65ab84 || edx_3 == 0)
                int32_t var_24_5 = 0xffffffff
                sub_469930(eax)
            else
                void* ecx_15 = data_65aabc
                
                if (ecx_15 == 0)
                    break
                
                int32_t* eax_13 = sub_41b1b0(ecx_15 + 0x444, edx_3)
                sub_4232b0(eax_13, &eax_13[2], eax, 0)
            
            eax = sub_41b7f0(edi_2 + 0xe47f88, arg1, "tblGamesOpen", esi_2)
            int32_t ecx_22 = esi_2 + (data_65ab00 << 2)
            int32_t edx_6
            
            if (ecx_22 s< data_65ac08)
                edx_6 = *((ecx_22 << 2) + &data_65ab88)
            
            if (ecx_22 s>= data_65ac08 || edx_6 == 0)
                int32_t var_24_8 = 0xffffffff
                eax = sub_469930(eax)
            else
                void* ecx_23 = data_65aabc
                
                if (ecx_23 == 0)
                    break
                
                int32_t* eax_15 = sub_41b1b0(ecx_23 + 0x444, edx_6)
                eax = sub_4232b0(eax_15, &eax_15[2], eax, 1)
            
            edi_2 += 0x24
            esi_2 += 1
            
            if (edi_2 s>= 0x90)
                void* ecx_27 = data_65aabc
                
                if (ecx_27 == 0)
                    break
                
                int32_t ebx_3 = 0
                int32_t edi_3 = 0
                i_2 = nullptr
                int32_t var_14_2 = 0
                sub_412b20(ecx_27 + 0x444, &i_2)
                
                for (void* const i_1 = i_2; i_1 != 0xffffffff; i_1 = i_2)
                    int32_t edi_4 = 0
                    void* esi_3 = i_1 + 0x28
                    int32_t ecx_29
                    
                    while (true)
                        if (*(esi_3 - 4) == 1)
                            void* eax_16 = sub_42aaa0(*(data_65ac38 + 0xb24))
                            
                            if (*esi_3 == *(eax_16 + 0x230))
                                ecx_29.b = 0
                                break
                        
                        edi_4 += 1
                        esi_3 += 0x2c
                        
                        if (edi_4 s>= 5)
                            ecx_29.b = 1
                            break
                    
                    char temp2_1 = ecx_29.b
                    
                    if (temp2_1 == 0)
                        ebx_3 += 1
                    
                    edi_3 = var_14_2 + 1
                    
                    if (temp2_1 == 0)
                        edi_3 = var_14_2
                    
                    var_14_2 = edi_3
                    sub_412b20(ecx_27 + 0x444, &i_2)
                
                int32_t ecx_34 = data_65aafc
                int32_t eax_19
                int32_t edx_10
                edx_10:eax_19 = sx.q(ebx_3 + 3)
                int32_t esi_5 = ((edx_10 & 3) + eax_19) s>> 2
                
                if (esi_5 s< 1)
                    esi_5 = 1
                
                if (ecx_34 == 0)
                    int32_t var_24_11 = 0xffffffff
                    sub_469930(arg1)
                    ecx_34 = data_65aafc
                
                if (ecx_34 s>= esi_5 - 1)
                    int32_t var_24_12 = 0xffffffff
                    sub_469930(arg1)
                
                if (ebx_3 s>= 0x20)
                    int32_t var_24_13 = 0xffffffff
                    sub_469930(arg1)
                
                int32_t ecx_38 = data_65ab00
                int32_t eax_22
                int32_t edx_15
                edx_15:eax_22 = sx.q(edi_3 + 3)
                int32_t esi_7 = ((edx_15 & 3) + eax_22) s>> 2
                
                if (esi_7 s< 1)
                    esi_7 = 1
                
                if (ecx_38 == 0)
                    int32_t var_24_14 = 0xffffffff
                    sub_469930(arg1)
                    ecx_38 = data_65ab00
                
                int32_t result = esi_7 - 1
                
                if (ecx_38 s< result)
                    return result
                
                int32_t var_24_15 = 0xffffffff
                return sub_469930(arg1)
    
    sub_44e4d0(eax, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
