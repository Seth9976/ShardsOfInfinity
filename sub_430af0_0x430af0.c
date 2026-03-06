// 函数名称: sub_430af0
// 虚拟地址: 0x430af0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_430af0(int32_t arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541690
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_30 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* var_14 = nullptr
    char* const result_1
    
    for (int32_t i = 0; i s< 0x14; )
        int32_t i_2 = i
        sub_44f980(&result_1, "Clock %d")
        int32_t var_8_1 = 0
        char* result_2 = result_1
        char* const result_4 = &data_5559b1
        
        if (result_2 != 0)
            result_4 = result_2
        
        char* const result_5 = result_4
        sub_42fec0(result_2, &var_14, result_4, 0xffffffff)
        int32_t var_8_2 = 1
        
        if (data_cdf414 != 0)
            char* result_3 = result_1
            
            if (result_3 != 0 && *result_3 != 0)
                char* eax_3 = sub_44f000(&result_1)
                int32_t temp2_1 = *(eax_3 + 4)
                *(eax_3 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_45d050(eax_3, *(eax_3 + 0xc) + 0x10)
                    result_1 = &data_5559b1
        
        i += 1
        int32_t var_8_3 = 0xffffffff
    
    void* ecx_2 = *(arg2 + 0x1904)
    void* edi_1 = ecx_2 - *(arg2 + 0x2164) * 0xa
    char* eax_8 = var_14 + edi_1
    
    if (eax_8 s>= 0x1000)
        sub_44e4d0(eax_8, &data_5559b1, "curInput + end < MAX_INPUTS", 
            "c:\ax2017\jams\shards\code\shardsai.cpp", 0xf8e, "AddInputRangeCards")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t esi = 5
    
    if (edi_1 s> 5)
        do
            char const* const eax_9
            
            if (esi != 0)
                uint32_t eax_10 = zx.d(esi.w)
                
                if (eax_10 u>= 0xc8)
                    sub_44e4d0(eax_10, &data_5559b1, "idNoMimic < MAX_CARDS", 
                        "c:\ax2017\jams\shards\code\shardsgame.cpp", 0x87, "CardGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                eax_9 = *(*((eax_10 << 5) + arg2 + 0x14) + 0x24)
            else
                eax_9 = "none"
            
            char const* const var_34_1 = eax_9
            int32_t var_38_1 = esi
            char* const var_1c
            sub_44f980(&var_1c, "Global Card Center %d %s")
            int32_t var_8_4 = 2
            char* eax_13 = var_1c
            char* const ecx_3 = &data_5559b1
            
            if (eax_13 != 0)
                ecx_3 = eax_13
            
            char* const var_44_1 = ecx_3
            eax_8 = sub_42fec0(eax_13, &var_14, ecx_3, 0xffffffff)
            int32_t var_8_5 = 3
            
            if (data_cdf414 != 0)
                eax_8 = var_1c
                
                if (eax_8 != 0 && *eax_8 != 0)
                    eax_8 = sub_44f000(&var_1c)
                    int32_t temp4_1 = *(eax_8 + 4)
                    *(eax_8 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        eax_8 = sub_45d050(eax_8, *(eax_8 + 0xc) + 0x10)
                        var_1c = &data_5559b1
            
            esi += 1
            int32_t var_8_6 = 0xffffffff
        while (esi s< edi_1)
        
        ecx_2 = *(arg2 + 0x1904)
    
    void* var_3c_2 = ecx_2
    void* var_40_2 = ecx_2
    char const* const var_44_2 = "Local Card In Hand %d %s"
    void* var_48 = ecx_2
    int32_t eax_14
    void* ecx_6
    eax_14, ecx_6 = sub_431d80(eax_8, &var_14, ecx_2, arg2)
    int32_t var_3c_3 = *(arg2 + 0x1904)
    void* var_40_3 = ecx_6
    char const* const var_44_3 = "Local Card In Deck %d %s"
    void* var_48_1 = ecx_6
    sub_431d80(eax_14, &var_14, ecx_6, arg2)
    int32_t edi_2 = *(arg2 + 0x2164)
    char* ecx_7 = *(arg2 + 0x1e60)
    
    if (edi_2 s> 1)
        void* edx_8 = &arg2[0x1efc]
        int32_t i_3 = edi_2 - 1
        int32_t i_1
        
        do
            char* eax_15 = ecx_7
            edx_8 += 0x9c
            ecx_7 = *(edx_8 - 0x9c)
            
            if (eax_15 s> ecx_7)
                ecx_7 = eax_15
            
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    void* result = nullptr
    result_1 = nullptr
    
    if (edi_2 s> 0)
        do
            int32_t eax_16
            int32_t edx_9
            edx_9:eax_16 = sx.q(result)
            int32_t temp1_1 = mods.dp.d(edx_9:eax_16, edi_2)
            int32_t esi_1 = *(arg2 + 0x1904)
            int32_t var_3c_4 = 0x32
            int32_t var_40_4 = 1
            char const* const var_44_4 = "%s Health %d"
            char* eax_18
            char* ecx_8
            eax_18, ecx_8 = sub_432070(divs.dp.d(edx_9:eax_16, edi_2), &var_14, ecx_7, ecx_7, temp1_1)
            int32_t var_3c_5 = 0x1e
            int32_t var_40_5 = 0
            char const* const var_44_5 = "%s Mastery %d"
            char* eax_19
            int32_t ecx_9
            eax_19, ecx_9 = sub_432070(eax_18, &var_14, ecx_8, ecx_8, temp1_1)
            void* (* var_34_2)(void* arg1, int32_t arg2, int32_t arg3) = sub_430010
            int32_t var_38_2 = ecx_9
            int32_t var_3c_6 = esi_1
            char* eax_20
            int32_t ecx_10
            eax_20, ecx_10 =
                sub_4321e0(eax_19, &var_14, ecx_9, arg2, temp1_1, "%s Card owned %d %s", ecx_9)
            void* (* var_34_3)(void* arg1, int32_t arg2, int32_t arg3) = sub_430010
            int32_t var_38_3 = ecx_10
            int32_t var_3c_7 = esi_1
            char* eax_21
            int32_t ecx_11
            eax_21, ecx_11 =
                sub_4321e0(eax_20, &var_14, ecx_10, arg2, temp1_1, "%s Card discard %d %s", ecx_10)
            void* (* var_34_4)(int32_t arg1, int32_t arg2) = sub_42ff90
            int32_t var_38_4 = ecx_11
            int32_t var_3c_8 = esi_1
            ecx_7 =
                sub_4321e0(eax_21, &var_14, ecx_11, arg2, temp1_1, "%s Card constructs %d %s", ecx_11)
            edi_2 = *(arg2 + 0x2164)
            result = &result_1[1]
            result_1 = result
        while (result s< edi_2)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
