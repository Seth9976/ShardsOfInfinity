// 函数名称: sub_42a590
// 虚拟地址: 0x42a590
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __thiscallsub_42a590(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5419fd
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t* var_14 = arg1
    int32_t __saved_ebp
    int32_t var_24 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_14_1 = arg1
    char* eax_3 = *arg2
    *arg1 = eax_3
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_44f000(arg1)
        *(eax_4 + 4) += 1
    
    int32_t var_8_1 = 0
    char* eax_5 = arg2[1]
    arg1[1] = eax_5
    
    if (eax_5 != 0 && *eax_5 != 0)
        char* eax_6 = sub_44f000(&arg1[1])
        *(eax_6 + 4) += 1
    
    var_8_1.b = 1
    arg1[2] = arg2[2]
    __builtin_memcpy(&arg1[4], &arg2[4], 0x210)
    char* eax_8 = arg2[0x88]
    arg1[0x88] = eax_8
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_44f000(&arg1[0x88])
        *(eax_9 + 4) += 1
    
    var_8_1.b = 2
    char* eax_10 = arg2[0x89]
    arg1[0x89] = eax_10
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_44f000(&arg1[0x89])
        *(eax_11 + 4) += 1
    
    var_8_1.b = 3
    arg1[0x8a] = arg2[0x8a]
    arg1[0x8b] = arg2[0x8b]
    arg1[0x8c] = arg2[0x8c]
    char* eax_15 = arg2[0x8d]
    arg1[0x8d] = eax_15
    
    if (eax_15 != 0 && *eax_15 != 0)
        char* eax_16 = sub_44f000(&arg1[0x8d])
        *(eax_16 + 4) += 1
    
    var_8_1.b = 4
    char* eax_17 = arg2[0x8e]
    arg1[0x8e] = eax_17
    
    if (eax_17 != 0 && *eax_17 != 0)
        char* eax_18 = sub_44f000(&arg1[0x8e])
        *(eax_18 + 4) += 1
    
    arg1[0x8f] = arg2[0x8f]
    arg1[0x90] = arg2[0x90]
    arg1[0x91] = arg2[0x91]
    *(arg1 + 0x248) = *(arg2 + 0x248)
    arg1[0x94] = arg2[0x94]
    arg1[0x95] = arg2[0x95]
    arg1[0x96] = arg2[0x96]
    __builtin_memcpy(&arg1[0x97], &arg2[0x97], 0x6c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
