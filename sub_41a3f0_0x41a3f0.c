// 函数名称: sub_41a3f0
// 虚拟地址: 0x41a3f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_41a3f0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5411c0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = data_65aabc
    
    if (edi == 0)
        sub_44e4d0(&ExceptionList, &data_5559b1, "gClient", 
            "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_4 = sub_412a40(edi + 0x628)
    
    if (*(edi + 0x444) != 0)
        sub_412ab0(edi + 0x444)
        eax_4 = *(edi + 0x444)
        
        if (eax_4 != 0)
            eax_4 = _aligned_free_base(eax_4)
        
        __builtin_memset(edi + 0x444, 0, 0x14)
        *(edi + 0x45c) = 0
    
    void* esi_1 = data_65aabc
    
    if (esi_1 == 0)
        sub_44e4d0(eax_4, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t eax_5 = *(esi_1 + 0x14)
    void* edx = data_65acf4
    
    if (eax_5 != 0)
        uint32_t ecx_2 = zx.d(eax_5.w)
        
        if (ecx_2 u< *(edx + 4))
            int128_t* ecx_4 = ecx_2 * 0x4c + *edx
            
            if (*(ecx_4 + 0x48) == eax_5)
                sub_450480(ecx_4)
    
    *(esi_1 + 0x18) = 0
    sub_412ab0(esi_1 + 0x444)
    int32_t esi_2 = data_cdf42c
    
    if (esi_2 != 0)
        int32_t var_8_1 = 0
        `eh vector vbase constructor iterator'(esi_2 + 0x90, 0xc, 0xc, sub_480920)
        `eh vector vbase constructor iterator'(esi_2, 0xc, 0xc, sub_480920)
        int32_t var_8_2 = 0xffffffff
        sub_45d050(data_cdf42c, 0x128)
        data_cdf42c = 0
    
    int32_t eax_7 = data_5c7980
    
    if (eax_7 != 0)
        if (eax_7 != 1)
            sub_44e4d0(eax_7 - 1, &data_5559b1, "Halt", "c:\ax2017\engine\gamecenter.cpp", 0x210, 
                "GameCenterDisconnect")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        SteamAPI_Shutdown(eax_2)
    
    void* eax_10 = data_5c7994
    data_5c7980 = 0
    
    if (eax_10 != 0 && eax_10 != &data_5559b1)
        if (data_cdf414 != 0 && *eax_10 != 0)
            char* eax_11 = sub_44f000(&data_5c7994)
            int32_t temp2_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_45d050(eax_11, *(eax_11 + 0xc) + 0x10)
        
        data_5c7994 = &data_5559b1
    
    sub_427030()
    char* eax_12 = *(edi + 0x20)
    
    if (eax_12 != 0 && eax_12 != &data_5559b1)
        if (data_cdf414 != 0 && *eax_12 != 0)
            char* eax_13 = sub_44f000(edi + 0x20)
            int32_t temp3_1 = *(eax_13 + 4)
            *(eax_13 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_45d050(eax_13, *(eax_13 + 0xc) + 0x10)
        
        *(edi + 0x20) = &data_5559b1
    
    if (*(edi + 0x434) != 0)
        sub_429a00(edi + 0x460)
    
    if (data_5c6384 != 0)
        sub_44ddd0(&data_5c6384)
        int32_t eax_14 = data_5c6384
        
        if (eax_14 != 0)
            _aligned_free_base(eax_14)
        
        __builtin_memset(&data_5c6384, 0, 0x14)
        data_5c639c = 0
    
    if (data_5bcd78 != 0)
        sub_432bd0()
    
    void* ebx = data_5c2e9c
    int32_t i_3 = 0x80
    int32_t* esi_3 = ebx + 0x404
    int32_t i
    
    do
        if (*esi_3 != 0)
            sub_45e9a0(esi_3)
        
        esi_3 = &esi_3[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    int32_t i_4 = 0x80
    int32_t ecx_12 = data_5bb16c
    data_5bb16c = zx.d(*(ebx + 0x638))
    *(ebx + 0x638) = ecx_12
    void* ebx_1 = data_5c2e98
    data_5bb170 -= 1
    int32_t* esi_4 = ebx_1 + 0x404
    int32_t i_1
    
    do
        if (*esi_4 != 0)
            sub_45e9a0(esi_4)
        
        esi_4 = &esi_4[1]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    int32_t ecx_14 = data_5bb16c
    data_5bb16c = zx.d(*(ebx_1 + 0x638))
    *(ebx_1 + 0x638) = ecx_14
    data_5bb170 -= 1
    
    if (data_5bcd7c != i_4)
        sub_445000(&data_5bcd7c)
        int32_t eax_17 = data_5bcd7c
        
        if (eax_17 != 0)
            _aligned_free_base(eax_17)
        
        __builtin_memset(&data_5bcd7c, 0, 0x14)
        data_5bcd94 = 0
    
    int32_t i_5 = 5
    int32_t i_2
    
    do
        sub_42f7e0()
        int32_t* esi_5 = data_65ac48
        
        if (esi_5 != 0)
            int32_t var_8_3 = 1
            
            if (*esi_5 != 0)
                sub_431290(esi_5)
                sub_45d050(*esi_5, (esi_5[1] << 2) + 4)
                *esi_5 = 0
                esi_5 = data_65ac48
            
            int32_t var_8_4 = 0xffffffff
            sub_45d050(esi_5, 0xc)
            data_65ac48 = 0
        
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    int32_t result = sub_413410()
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
