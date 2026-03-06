// 函数名称: sub_4abf10
// 虚拟地址: 0x4abf10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4abf10()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542e10
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_1c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    for (void* i = &data_cdb394; i s< &data_cdb3d4; i += 4)
        int32_t edx_1 = *i
        
        if (edx_1 != 0)
            (*(*data_ce19b4 + 0x2c))(edx_1)
            *i = 0
    
    int32_t edx_2 = data_cdb390
    
    if (edx_2 != 0)
        (*(*data_ce19b4 + 0x38))(edx_2)
        data_cdb390 = 0
    
    void* esi = nullptr
    
    while (true)
        void* ecx_3 = data_654cc4
        
        do
            if (esi != 0)
                esi += 0xf10
            else
                esi = ecx_3
            
            void* eax_6 = data_654cc8 * 0xf10 + ecx_3
            
            if (esi u>= eax_6)
            label_4abfca:
                sub_4b3fd0()
                int32_t* ecx_4 = data_ce1af0
                
                if (ecx_4 != 0)
                    sub_45d050(ecx_4, 1)
                    data_ce1af0 = 0
                
                int32_t result = sub_47c0b0()
                int32_t* ecx_5 = data_cdf424
                
                for (int32_t* i_1 = nullptr; i_1 s< 0x10; i_1 = &i_1[1])
                    int32_t edx_3 = *(i_1 + ecx_5)
                    
                    if (edx_3 != 0)
                        result = (*(*data_ce19b4 + 0x2c))(edx_3)
                        ecx_5 = data_cdf424
                
                int32_t edx_4 = ecx_5[5]
                
                if (edx_4 != 0)
                    result = (*(*data_ce19b4 + 0x38))(edx_4)
                    ecx_5 = data_cdf424
                
                if (ecx_5 != 0)
                    void* edi_1 = &ecx_5[0x10]
                    int32_t var_8_1 = 0
                    int32_t* i_2 = *edi_1
                    
                    if (i_2 != 0)
                        do
                            int32_t* i_3 = i_2
                            i_2 = i_2[1]
                            sub_45d050(i_3, 0xc)
                        while (i_2 != 0)
                        
                        ecx_5 = data_cdf424
                    
                    *(edi_1 + 8) = 0
                    *edi_1 = 0
                    *(edi_1 + 4) = 0
                    int32_t var_8_2 = 0xffffffff
                    result = sub_45d050(ecx_5, 0x54)
                    data_cdf424 = 0
                
                int32_t* ecx_8 = data_ce19c4
                
                if (ecx_8 != 0)
                    result = sub_45d050(ecx_8, 0x25c)
                    data_ce19c4 = 0
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return result
            
            while ((*(esi + 0xf0c) & 0xffff0000) == 0)
                esi += 0xf10
                
                if (esi u>= eax_6)
                    goto label_4abfca
        while (*(esi + 0xf08) == 0)
        
        int32_t edx_5 = *(esi + 0xe44)
        
        if (edx_5 != 0)
            (*(*data_ce19b4 + 0x50))(edx_5)
            *(esi + 0xe44) = 0
        
        *(esi + 0x7e4) = 0
        *(esi + 0x3f8) = 0
        *(esi + 0x3f4) = 0
        *(esi + 8) = 0
        *(esi + 4) = 0
        *(esi + 0xf08) = 0
}
