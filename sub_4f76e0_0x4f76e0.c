// 函数名称: sub_4f76e0
// 虚拟地址: 0x4f76e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4f76e0(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) =
        __ehhandler$??0UMSThreadProxy@details@Concurrency@@QAE@PAUIThreadProxyFactory@12@PAXI@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_a4 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    bool cond:0 = data_ce37a4 != 0
    data_d63bf8 = 0xffffffff
    void var_98
    
    if (not(cond:0))
        int32_t ecx = data_d63bf4
        int128_t var_64 = data_5c779c
        data_d76c30 = 0
        int128_t var_54 = data_5c77ac
        sub_4b0c80(&var_98, 0, ecx, &var_98)
        int32_t eax_4
        eax_4.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    int64_t xmm0_2 = data_d76c14
    float xmm1_1 = xmm0_2:4.d f- data_65ae28:8
    float xmm2_1 = data_d76c1c f- data_65ae28:0xc
    int128_t var_3c = data_d76c04.o
    float xmm0_5 = xmm0_2.d f- data_65ae28:4
    float xmm0_9 = sub_412d90(xmm0_5 * xmm0_5 + xmm1_1 * xmm1_1 + xmm2_1 * xmm2_1)
    
    if (data_d76c30 != 3)
        var_3c = data_5724f8
    
    void* esi = *fsbase->ThreadLocalStoragePointer
    int128_t var_64_1 = (xmm0_9 / 10f).o
    int128_t var_54_1 = var_3c
    
    if (data_e49d80 s> *(esi + 4))
        __Init_thread_header(&data_e49d80)
        
        if (data_e49d80 == 0xffffffff)
            int32_t var_14_1 = 0
            data_e49d84 = sub_48d5b0("sys/editor/translate.fab", 0x20)
            int32_t var_14_2 = 0xffffffff
            __Init_thread_footer(&data_e49d80)
    
    if (data_e49d88 s> *(esi + 4))
        __Init_thread_header(&data_e49d88)
        
        if (data_e49d88 == 0xffffffff)
            int32_t var_14_3 = 1
            data_e49d8c = sub_48d5b0("sys/editor/rotate_quarter.fab", 0x20)
            int32_t var_14_4 = 0xffffffff
            __Init_thread_footer(&data_e49d88)
    
    if (data_e49d90 s> *(esi + 4))
        __Init_thread_header(&data_e49d90)
        
        if (data_e49d90 == 0xffffffff)
            int32_t var_14_5 = 2
            data_e49d94 = sub_48d5b0("sys/editor/scale.fab", 0x20)
            int32_t var_14_6 = 0xffffffff
            __Init_thread_footer(&data_e49d90)
    
    int32_t eax_13 = data_d76c30
    int128_t* var_a8_1
    void* eax_16
    int32_t ecx_3
    int32_t edx
    
    if (eax_13 == 2)
        edx = data_e49d84
    label_4f7979:
        ecx_3 = data_d63bf4
        eax_16 = &var_98
        var_a8_1 = &var_98
    else
        if (eax_13 == 3)
            edx = data_e49d8c
            goto label_4f7979
        
        ecx_3 = data_d63bf4
        eax_16 = &var_98
        var_a8_1 = &var_98
        
        if (eax_13 != 4)
            int128_t var_64_2 = data_5c779c
            int128_t var_54_2 = data_5c77ac
            sub_4b0c80(eax_16, 0, ecx_3, var_a8_1)
            int32_t eax_17
            eax_17.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_17
        
        edx = data_e49d94
    
    sub_4b0c80(eax_16, edx, ecx_3, var_a8_1)
    data_d63bf8 = sub_4b34a0(data_d63bf4, arg1)
    int32_t eax_18
    eax_18.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_18
}
