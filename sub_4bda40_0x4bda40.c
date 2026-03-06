// 函数名称: sub_4bda40
// 虚拟地址: 0x4bda40
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __convention("regparm")sub_4bda40(int32_t arg1, char* arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_544c99
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char* ebx = arg2
    char* var_14 = ebx
    int32_t* var_1c = arg3
    int32_t var_18 = 0
    char* i_1 = *(ebx + 4)
    
    if (i_1 != 0)
        char* i
        
        do
            if (arg4(zx.d(*i_1), eax_2) == 0)
                break
            
            i = i_1
            i_1 = &i_1[1]
        while (i != 0xffffffff)
        ebx = var_14
    
    char* ecx = *(ebx + 4)
    
    if (i_1 == ecx)
        *arg3 = data_e47140
        arg3[1] = data_e47144
        arg3[2] = data_e47148
        char* eax_8 = data_e47148
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_44f000(&arg3[2])
            *(eax_9 + 4) += 1
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    sub_44f320(&var_14, ecx, i_1 - ecx)
    int32_t var_8_1 = 1
    int32_t var_28
    Concurrency::source_block<class Concurrency::single_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >::~source_block<class Concurrency::single_link_registry<class Concurrency::ITarget<uint32_t> >,class Concurrency::ordered_message_processor<uint32_t> >(
        &var_28, &var_14)
    var_8_1.b = 2
    int32_t eax_13 = var_28
    *(ebx + 4) = i_1
    *arg3 = eax_13
    int32_t var_24
    arg3[1] = var_24
    char* var_20
    char* eax_15 = var_20
    arg3[2] = eax_15
    
    if (eax_15 != 0 && *eax_15 != 0)
        char* eax_16 = sub_44f000(&arg3[2])
        *(eax_16 + 4) += 1
        eax_15 = var_20
    
    int32_t var_18_1 = 1
    var_8_1.b = 3
    
    if (data_cdf414 != 0 && eax_15 != 0 && *eax_15 != 0)
        char* eax_17 = sub_44f000(&var_20)
        int32_t temp1_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_45d050(eax_17, *(eax_17 + 0xc) + 0x10)
            var_20 = &data_5559b1
    
    int32_t var_8_2 = 4
    
    if (data_cdf414 != 0)
        char* eax_18 = var_14
        
        if (eax_18 != 0 && *eax_18 != 0)
            char* eax_19 = sub_44f000(&var_14)
            int32_t temp2_1 = *(eax_19 + 4)
            *(eax_19 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_19, *(eax_19 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3
}
