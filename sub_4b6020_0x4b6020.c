// 函数名称: sub_4b6020
// 虚拟地址: 0x4b6020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4b6020(int32_t* arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    int32_t var_14 = 0xffffffff
    int32_t (* var_18)(void* arg1) = sub_544a60
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebx
    int32_t* var_20 = &__saved_ebx
    int32_t __saved_ebp
    int32_t var_3c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* var_28 = arg1
    
    if (arg1 == 0 || arg1[1] != 2)
        sub_44e4d0(arg1, &data_5559b1, 
            "assetStructure && assetStructure->assetType == ASSET_TYPE_STRUCTURE", 
            "c:\ax2017\engine\structure.cpp", 0x324, "StructureCreate")
        
        if (IsDebuggerPresent() != 1)
            sub_44e680()
            noreturn
        
        breakpoint
    
    int32_t* eax_4 = sub_4b5510()
    
    if (eax_4[4] u>= eax_4[2])
        sub_44e4d0(eax_4, &data_5559b1, "mUsedCount < mMaxSize", "c:\ax2017\engine\dataarray.h", 0xf4, 
            "DataArray<struct Structure>::DataArrayAlloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    char* ecx_1 = eax_4[1]
    char* eax_5 = eax_4[3]
    char* var_24 = ecx_1
    
    if (eax_5 u> ecx_1)
        sub_44e4d0(eax_5, &data_5559b1, "mFreeListHead <= mMaxUsedCount", 
            "c:\ax2017\engine\dataarray.h", 0xf5, "DataArray<struct Structure>::DataArrayAlloc")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t edx = *eax_4
    void* eax_6
    
    if (eax_5 != ecx_1)
        ecx_1 = eax_5
        var_24 = ecx_1
        eax_6 = *(eax_5 * 0x6c + edx + 0x68)
    else
        eax_6 = &ecx_1[1]
        eax_4[1] = eax_6
    
    eax_4[3] = eax_6
    char** result = ecx_1 * 0x6c + edx
    _memset(result, 0, 0x68)
    *result = &data_5559b1
    result[0xf] = 0
    result[0x10] = 0
    result[0x1a] = eax_4[5] << 0x10 | var_24
    eax_4[5] += 1
    
    if (eax_4[5] == 0x10000)
        eax_4[5] = 1
    
    eax_4[4] += 1
    int32_t* edi_1 = var_28
    int32_t* var_40 = &var_24
    int32_t* var_2c
    sub_42ce10(&var_2c, edi_1, 2)
    int32_t var_14_1 = 0
    char* edx_1 = &data_5559b1
    *(result + 8) = 0
    result[4] = 0
    char* eax_11 = var_24
    *(result + 0x14) = data_5724f8
    result[9] = *(eax_11 + 0x1c)
    result[1] = edi_1
    char* eax_13 = edi_1[8]
    
    if (eax_13 != 0)
        edx_1 = eax_13
    
    var_14_1.b = 1
    sub_44f510(result, sub_48e4d0(&var_24, edx_1))
    var_14_1.b = 2
    
    if (data_cdf414 != 0)
        char* eax_15 = var_24
        
        if (eax_15 != 0 && *eax_15 != 0)
            char* eax_16 = sub_44f000(&var_24)
            int32_t temp0_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_45d050(eax_16, *(eax_16 + 0xc) + 0x10)
    
    var_14_1.b = 0
    int32_t* var_40_2 = &var_28
    int32_t* var_48_2 = result[1]
    __builtin_memcpy(&result[0x14], 
        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x01\x00\x00\x00", 0x14)
    result[0xc] = 0
    result[0xd] = 0
    sub_42ce10(&var_24, var_48_2, 2)
    int32_t* eax_17 = var_28
    void* ecx_8 = *eax_17
    
    if (ecx_8 != 0)
        result[0x11] = *(ecx_8 + 0x38) f* result[9]
        result[0x12] = *(*eax_17 + 0x3c) f* result[9]
    else
        result[0x11] = 0x3f800000
        result[0x12] = 0x3f800000
    
    char* eax_19 = var_24
    
    if (eax_19 != 0)
        *(eax_19 + 0x1c) -= 1
    
    int32_t* eax_20 = sub_4b8d90(edi_1)
    int32_t* ecx_10 = var_2c
    result[0xb] = eax_20
    
    if (ecx_10 != 0)
        ecx_10[7] -= 1
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
