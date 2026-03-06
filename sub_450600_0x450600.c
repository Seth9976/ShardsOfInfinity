// 函数名称: sub_450600
// 虚拟地址: 0x450600
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_450600(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542120
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void* var_14 = arg1
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_65adfc != 0)
        int32_t* edx_1 = data_65acf4
        void* edi_1 = nullptr
        
        while (true)
            void* ecx
            
            if (edi_1 != 0)
                ecx = edx_1[7]
                edi_1 += 0xc
            else
                edi_1 = edx_1[7]
                ecx = edi_1
            
            int32_t ebx_1 = edx_1[8]
            void* eax_4 = ecx + ebx_1 * 0xc
            
            if (edi_1 u>= eax_4)
                break
            
            while (true)
                int32_t ecx_1 = *(edi_1 + 8)
                
                if ((ecx_1 & 0xffff0000) != 0)
                    if (ecx_1 == 0)
                        sub_44e4d0(eax_4, &data_5559b1, "id != DATAID_NULL", 
                            "c:\ax2017\engine\dataarray.h", 0x6c, 
                            "DataArray<struct NetListen>::DataArrayGet")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_44e680()
                        noreturn
                    
                    uint32_t esi_1 = zx.d(ecx_1.w)
                    
                    if (esi_1 u< ebx_1)
                        int32_t edx_2 = edx_1[7]
                        eax_4 = esi_1 * 3
                        
                        if (*(edx_2 + (eax_4 << 2) + 8) == ecx_1)
                            uint32_t eax_5 = esi_1 * 3
                            void* esi_2 = edx_2 + (eax_5 << 2)
                            (*(*data_65adfc + 0x28))(*(edx_2 + (eax_5 << 2) + 4))
                            edx_1 = data_65acf4
                            int32_t ecx_3 = edx_1[0xa]
                            edx_1[0xa] = zx.d(*(esi_2 + 8))
                            *(esi_2 + 8) = ecx_3
                            edx_1[0xb] -= 1
                            break
                    
                    sub_44e4d0(eax_4, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                        "c:\ax2017\engine\dataarray.h", 0x6d, 
                        "DataArray<struct NetListen>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                edi_1 += 0xc
                
                if (edi_1 u>= eax_4)
                    goto label_450672
        
    label_450672:
        void* i = nullptr
    label_450674:
        void* i_4
        
        if (i != 0)
            i_4 = *edx_1
            i += 0x4c
        else
            i = *edx_1
            i_4 = i
        
        for (; i u< edx_1[1] * 0x4c + i_4; i += 0x4c)
            if ((*(i + 0x48) & 0xffff0000) != 0)
                sub_450480(i)
                edx_1 = data_65acf4
                goto label_450674
        
        while (edx_1[0x10] != 0)
            int32_t* ecx_4 = edx_1[0xe]
            void* eax_10 = ecx_4[1]
            edx_1[0xe] = eax_10
            
            if (eax_10 == 0)
                edx_1[0xf] = 0
            else
                *(eax_10 + 8) = 0
            
            void* esi_3 = *ecx_4
            edx_1[0x10] -= 1
            sub_45d050(ecx_4, 0xc)
            char* eax_11 = *(esi_3 + 0x7e90)
            var_14 = esi_3
            
            if (eax_11 != 0 && eax_11 != &data_5559b1)
                if (data_cdf414 != 0 && *eax_11 != 0)
                    char* eax_12 = sub_44f000(esi_3 + 0x7e90)
                    int32_t temp0_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
                
                *(esi_3 + 0x7e90) = &data_5559b1
            
            sub_429090(data_65acf4 + 0x50, &var_14)
            edx_1 = data_65acf4
        
        (*(*data_65adfc + 4))(eax_2)
        void* ecx_11 = data_65acf4
        
        while (*(ecx_11 + 0x4c) != 0)
            int32_t* esi_4 = *(ecx_11 + 0x48)
            void* eax_14 = esi_4[2]
            *(ecx_11 + 0x48) = eax_14
            
            if (eax_14 == 0)
                *(ecx_11 + 0x44) = 0
            else
                *(eax_14 + 4) = 0
            
            int32_t edi_2 = *esi_4
            *(ecx_11 + 0x4c) -= 1
            sub_45d050(esi_4, 0xc)
            
            if (edi_2 != 0)
                _aligned_free_base(edi_2)
            
            ecx_11 = data_65acf4
        
        while (*(ecx_11 + 0x58) != 0)
            int32_t* esi_5 = *(ecx_11 + 0x54)
            void* eax_15 = esi_5[2]
            *(ecx_11 + 0x54) = eax_15
            
            if (eax_15 == 0)
                *(ecx_11 + 0x50) = 0
            else
                *(eax_15 + 4) = 0
            
            int32_t edi_3 = *esi_5
            *(ecx_11 + 0x58) -= 1
            sub_45d050(esi_5, 0xc)
            
            if (edi_3 != 0)
                _aligned_free_base(edi_3)
            
            ecx_11 = data_65acf4
        
        sub_4528f0(ecx_11 + 0x1c)
        result = sub_452780(data_65acf4)
        int32_t* edi_4 = data_65acf4
        
        if (edi_4 != 0)
            int32_t var_8_1 = 0
            int32_t* i_1 = edi_4[0x14]
            
            while (i_1 != 0)
                int32_t* i_5 = i_1
                i_1 = i_1[1]
                sub_45d050(i_5, 0xc)
            
            edi_4[0x16] = 0
            edi_4[0x14] = 0
            edi_4[0x15] = 0
            int32_t var_8_2 = 1
            int32_t* i_2 = edi_4[0x11]
            
            while (i_2 != 0)
                int32_t* i_6 = i_2
                i_2 = i_2[1]
                sub_45d050(i_6, 0xc)
            
            edi_4[0x13] = 0
            edi_4[0x11] = 0
            edi_4[0x12] = 0
            int32_t var_8_3 = 2
            int32_t* i_3 = edi_4[0xe]
            
            while (i_3 != 0)
                int32_t* i_7 = i_3
                i_3 = i_3[1]
                sub_45d050(i_7, 0xc)
            
            edi_4[0x10] = 0
            edi_4[0xe] = 0
            edi_4[0xf] = 0
            int32_t var_8_4 = 3
            sub_4528f0(&edi_4[7])
            int32_t var_8_5 = 4
            sub_452780(edi_4)
            int32_t var_8_6 = 0xffffffff
            result = sub_45d050(data_65acf4, 0x5c)
            data_65acf4 = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
