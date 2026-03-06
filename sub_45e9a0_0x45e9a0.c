// 函数名称: sub_45e9a0
// 虚拟地址: 0x45e9a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_45e9a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_c = arg1
    int32_t* var_c = arg1
    int32_t edx = *arg1
    
    if (edx != 0)
        uint32_t eax_1 = zx.d(edx.w)
        void* edi_2
        
        if (eax_1 u< data_5c99a4)
            edi_2 = eax_1 * 0x1008 + data_5c99a0
        
        if (eax_1 u>= data_5c99a4 || *(edi_2 + 0x1004) != edx)
            sub_44e4d0(eax_1, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        void* esi_1 = edi_2 + 0x214
        int32_t i_2 = 3
        int32_t i
        
        do
            char* eax_2 = *esi_1
            
            if (eax_2 != 0 && eax_2 != &data_5559b1)
                if (data_cdf414 != 0 && *eax_2 != 0)
                    char* eax_3 = sub_44f000(esi_1)
                    int32_t temp1_1 = *(eax_3 + 4)
                    *(eax_3 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
                
                *esi_1 = &data_5559b1
            
            *(esi_1 - 0x18) = &data_5559b1
            esi_1 += 0x208
            i = i_2
            i_2 -= 1
        while (i != 1)
        char* eax_4 = *(edi_2 + 0x698)
        
        if (eax_4 != 0 && eax_4 != &data_5559b1)
            if (data_cdf414 != i_2 && *eax_4 != i_2.b)
                char* eax_5 = sub_44f000(edi_2 + 0x698)
                int32_t temp2_1 = *(eax_5 + 4)
                *(eax_5 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_5, *(eax_5 + 0xc) + 0x10)
            
            *(edi_2 + 0x698) = &data_5559b1
        
        char* eax_6 = *(edi_2 + 0x6a0)
        
        if (eax_6 != 0 && eax_6 != &data_5559b1)
            if (data_cdf414 != 0 && *eax_6 != 0)
                char* eax_7 = sub_44f000(edi_2 + 0x6a0)
                int32_t temp3_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_7, *(eax_7 + 0xc) + 0x10)
            
            *(edi_2 + 0x6a0) = &data_5559b1
        
        void* ecx_6 = *(edi_2 + 0x67c)
        
        if (ecx_6 != 0)
            sub_4c0fc0(ecx_6)
            *(edi_2 + 0x67c) = 0
        
        int32_t eax_8 = *(edi_2 + 0x68c)
        
        if (eax_8 != 0)
            void* ecx_7 = data_cdf448
            uint32_t edx_7 = zx.d(eax_8.w)
            
            if (edx_7 u< *(ecx_7 + 4))
                void* esi_3 = edx_7 * 0x64 + *ecx_7
                
                if (*(esi_3 + 0x60) == eax_8)
                    (*(*data_cdf444 + 0x24))(esi_3)
                    *(esi_3 + 0x5a) = 0
        
        int32_t ecx_9 = *(edi_2 + 0x684)
        
        if (ecx_9 != 0)
            void* eax_10 = sub_495430(ecx_9)
            
            if (eax_10 != 0)
                sub_4954d0(eax_10)
        
        int32_t ecx_11 = *(edi_2 + 0x690)
        
        if (ecx_11 != 0)
            void* eax_11 = sub_4b6d20(ecx_11)
            
            if (eax_11 != 0)
                sub_4b62d0(eax_11)
        
        int32_t eax_12 = *(edi_2 + 0x68c)
        
        if (eax_12 != 0)
            void* ecx_13 = data_cdf448
            uint32_t edx_8 = zx.d(eax_12.w)
            
            if (edx_8 u< *(ecx_13 + 4))
                void* esi_5 = edx_8 * 0x64 + *ecx_13
                
                if (*(esi_5 + 0x60) == eax_12)
                    (*(*data_cdf444 + 0x24))(esi_5)
                    *(esi_5 + 0x5a) = 0
        
        int32_t i_1 = 0
        
        if (*(edi_2 + 0xff8) s> 0)
            do
                sub_45e9a0()
                i_1 += 1
            while (i_1 s< *(edi_2 + 0xff8))
        
        sub_47ba20(edi_2)
        int32_t ecx_18 = data_5c99ac
        data_5c99ac = zx.d(*(edi_2 + 0x1004))
        *(edi_2 + 0x1004) = ecx_18
        data_5c99b0 -= 1
        *arg1 = 0
    
    return arg1
}
