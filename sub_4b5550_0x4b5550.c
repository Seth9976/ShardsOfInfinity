// 函数名称: sub_4b5550
// 虚拟地址: 0x4b5550
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4b5550(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541c78
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14
    int32_t* var_30 = &var_14
    int32_t* result_1
    sub_42ce10(&result_1, arg1, 2)
    int32_t var_8_1 = 0
    int32_t* esi = *var_14
    int32_t* var_18 = esi
    
    if (esi != 0)
        int32_t i = 0
        
        if (*esi s> 0)
            int32_t* edi_1 = nullptr
            var_14 = nullptr
            
            do
                void* esi_2 = esi[1] + edi_1
                
                if (*(esi_2 + 0xc) != 0)
                    if ((*(*data_ce19b4 + 0x28))(*(esi_2 + 0x24)) == 0)
                        *(esi_2 + 0x24) =
                            (*(*data_ce19b4 + 0x24))(*(esi_2 + 0x14), *(esi_2 + 0x10), *(esi_2 + 8), 0)
                    
                    if (*(esi_2 + 0x1c) s> 0 && (*(*data_ce19b4 + 0x34))(*(esi_2 + 0x28)) == 0)
                        int32_t edx_1 = *(esi_2 + 0x1c)
                        int32_t eax_13
                        eax_13.b = edx_1 != *(esi_2 + 0x18) * 2
                        int32_t eax_15 = (*(*data_ce19b4 + 0x30))(*(esi_2 + 0x20), edx_1, 
                            zx.d(eax_13.b), 0, *(esi_2 + 0x24))
                        edi_1 = var_14
                        *(esi_2 + 0x28) = eax_15
                
                esi = var_18
                i += 1
                edi_1 = &edi_1[0x49]
                var_14 = edi_1
            while (i s< *esi)
    
    int32_t* result = result_1
    
    if (result != 0)
        result[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
