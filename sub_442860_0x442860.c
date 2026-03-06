// 函数名称: sub_442860
// 虚拟地址: 0x442860
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_442860(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542148
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_38 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    sub_472550(arg1, sub_4422b0)
    void* result = data_65aabc
    
    if (result == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(result + 0x434) != 0)
        void* eax_3 = sub_41ad20()
        int32_t eax_4 = *(eax_3 + 0xec)
        sub_469bf0(eax_4, &data_5c2fc0, arg1, eax_4, 0xffffffff)
        int32_t edi_1 = 0
        int32_t* i_1
        
        if (eax_4 s> 0)
            do
                int32_t edx_1 = *(sub_41ad20() + 0xec)
                void* eax_6 = data_65aabc
                
                if (eax_6 == 0)
                    sub_44e4d0(eax_6, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t eax_8 = *(eax_6 + 0x648) + edi_1
                int32_t ecx_3 = eax_8 - edx_1
                
                if (eax_8 s< edx_1)
                    ecx_3 = eax_8
                
                int32_t* eax_9 = sub_41af80(eax_3 + 8, ecx_3)
                int32_t* var_3c_1 = &i_1
                char* var_14
                sub_4167e0(eax_9, eax_3 + 8, &var_14, eax_9)
                int32_t var_8_1 = 0
                sub_469cf0(&var_14, &data_5c2fd4, arg1, &var_14, edi_1)
                
                if (ecx_3 s< 0)
                    sub_44e4d0(ecx_3, &data_5559b1, "who >= 0", 
                        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x512, "PGUIGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (ecx_3 s>= 5)
                    sub_44e4d0(ecx_3, &data_5559b1, "(int)who < (int)MAX_PLAYERS", 
                        "c:\ax2017\jams\shards\code\shardsclient.cpp", 0x513, "PGUIGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                void* eax_12 = ecx_3 * 0x4c
                
                if (*(eax_12 + 0x5bcb14) + *(eax_12 + 0x5bcb2c) s> 0)
                    int32_t var_3c_2 = edi_1
                    sub_469930(arg1)
                
                if (sub_4421f0(eax_9) != 0)
                    int32_t var_3c_3 = edi_1
                    sub_469930(arg1)
                
                int32_t var_8_2 = 1
                
                if (data_cdf414 != 0)
                    char* eax_14 = var_14
                    
                    if (eax_14 != 0 && *eax_14 != 0)
                        char* eax_15 = sub_44f000(&var_14)
                        int32_t temp0_1 = *(eax_15 + 4)
                        *(eax_15 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_45d050(eax_15, *(eax_15 + 0xc) + 0x10)
                            var_14 = &data_5559b1
                
                edi_1 += 1
                int32_t var_8_3 = 0xffffffff
            while (edi_1 s< eax_4)
        
        void* esi_3 = data_5c2e9c
        *(esi_3 + 0x400) = 0
        *(esi_3 + 0x608) = data_571cf8
        int32_t edi_2 = data_5bccc0
        int32_t ecx_14 = *(sub_41ad20() + 0xec)
        void* eax_17 = data_65aabc
        
        if (eax_17 == 0)
            sub_44e4d0(eax_17, &data_5559b1, "gClient", 
                "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t eax_19 = *(eax_17 + 0x648) + edi_2
        i_1 = nullptr
        int32_t edi_4 = eax_19 - ecx_14
        
        if (eax_19 s< ecx_14)
            edi_4 = eax_19
        
        sub_445070(&data_5bcd7c, &i_1)
        int32_t* i
        
        for (i = i_1; i != 0xffffffff; i = i_1)
            if (*i == 0 && i[2] == edi_4 && i[3] != 0xb && *(i + 0x15) == 0 && *(i + 0x16) == 0)
                uint32_t edx_9 = zx.d((i[1]).w)
                
                if (edx_9 u>= 0xc8)
                    sub_44e4d0(i, &data_5559b1, "idNoMimic < MAX_CARDS", 
                        "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                int32_t ecx_15 = *(esi_3 + 0x400)
                int32_t eax_21 = 0
                int32_t j = *((edx_9 << 5) + data_5c2e2c + 0x14) + 0x10
                
                if (ecx_15 s<= 0)
                label_442abd:
                    *(esi_3 + 0x400) = ecx_15 + 1
                    *(esi_3 + (ecx_15 << 3)) = j
                    *(esi_3 + (ecx_15 << 3) + 4) = 1
                else
                    while (*(esi_3 + (eax_21 << 3)) != j)
                        eax_21 += 1
                        
                        if (eax_21 s>= ecx_15)
                            goto label_442abd
                    
                    *(esi_3 + (eax_21 << 3) + 4) += 1
            
            sub_445070(&data_5bcd7c, &i_1)
        
        if (arg1 == 0)
            sub_44e4d0(i, &data_5559b1, "id != DATAID_NULL", "c:\ax2017\engine\dataarray.h", 0x6c, 
                "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        uint32_t eax_23 = zx.d(arg1.w)
        void* ecx_17
        
        if (eax_23 u< data_5c99a4)
            ecx_17 = eax_23 * 0x1008 + data_5c99a0
        
        if (eax_23 u>= data_5c99a4 || *(ecx_17 + 0x1004) != arg1)
            sub_44e4d0(eax_23, &data_5559b1, "DataArrayTryToGet(id) != NULL", 
                "c:\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        sub_469800(eax_23, &data_5c36f0, ecx_17, 0x3f800000, data_5bccc0)
        int32_t eax_24
        
        if (data_5bb1e4.d != 0x1e)
            eax_24 = 0
            
            if (data_5bb1f0.d == 0x1e)
                eax_24 = data_5bb1f0:4
        else
            eax_24 = data_5bb1e4:4
        
        void* var_3c_7 = ecx_17
        int32_t var_40_3 = 0x2eb8
        result = sub_413820(eax_24, arg1, esi_3, "tblCards", 1, 0x2d50, eax_24, ecx_17)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
