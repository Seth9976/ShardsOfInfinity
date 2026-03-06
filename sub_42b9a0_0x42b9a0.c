// 函数名称: sub_42b9a0
// 虚拟地址: 0x42b9a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_42b9a0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_541be1
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_1ec = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg1 != 1)
        sub_44e4d0(arg1, &data_5559b1, "handle.gameType == GAME_LOCAL", 
            "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x2f3, "LocalGameLoad")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void var_d4
    sub_42a890(&var_d4, arg1[1])
    int32_t var_8_1 = 0
    char** edi = data_dfc558
    int32_t* i = sub_494ad0(edi, &var_d4)
    int32_t* i_1
    
    if (i == 0)
        int32_t var_8_4 = 1
    label_42be56:
        
        if (data_cdf414 != 0)
            i = i_1
            
            if (i != 0 && *i != 0)
                i = sub_44f000(&i_1)
                int32_t temp0_1 = i[1]
                i[1] -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(i, i[3] + 0x10)
        
        i.b = 0
    else
        void var_ac
        sub_492980(i, edi, &var_ac, i, 0)
        sub_491590(i)
        void var_1e0
        _memset(&var_1e0, 0, 0xe4)
        int32_t var_18
        int32_t var_e0_1 = var_18
        int32_t var_dc_1 = 0
        int32_t var_34
        int32_t var_fc_1 = var_34
        int32_t var_b8_1 = 0
        int128_t var_30
        int128_t var_f8_1 = var_30
        int64_t var_20
        int64_t var_e8_1 = var_20
        
        if (var_34 s> 0)
            void var_a0
            void* edi_1 = &var_a0
            void var_1d8
            void* esi_1 = &var_1d8
            int32_t eax_11
            
            do
                _strncpy(esi_1, *(edi_1 - 0xc), 0x10)
                int32_t eax_6 = *(edi_1 - 8)
                edi_1 += 0x18
                *(esi_1 + 0xf) = 0
                *(esi_1 + 0x10) = eax_6
                *(esi_1 + 0x18) = *(edi_1 - 0x18)
                *(esi_1 + 0x1c) = *(edi_1 - 0x14)
                *(esi_1 + 0x14) = *(edi_1 - 0x1c)
                esi_1 += 0x2c
                eax_11 = var_b8_1 + 1
                var_b8_1 = eax_11
            while (eax_11 s< var_34)
        
        __builtin_memcpy(&arg2[2], &var_1e0, 0x108)
        int32_t* var_c8
        sub_42a970(&var_c8, arg1[1])
        int32_t var_1f0_3 = 0
        var_8_1.b = 2
        int32_t* var_b4
        char* eax_12 = sub_48c610(&var_b4)
        
        if (eax_12.b == 0)
            sub_44e4d0(eax_12, &data_5559b1, "Halt", 
                "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x2ff, "LocalGameLoad")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t* esi_2 = var_b4
        _fseek(esi_2, 0, 2)
        int32_t* var_1fc_2 = esi_2
        void* eax_13 = sub_52b118()
        _fclose(esi_2)
        var_b4 = nullptr
        uint32_t (* esi_3)[0x4] = sub_45cd70(eax_13)
        _memset(esi_3, 0, eax_13)
        char* i_2
        char* i_5 = i_2
        var_b4 = var_c8
        char* i_4 = i_5
        
        if (i_5 != 0 && *i_5 != 0)
            char* eax_15 = sub_44f000(&i_4)
            *(eax_15 + 4) += 1
        
        void* eax_16 = data_dfc55c
        var_8_1.b = 3
        int32_t var_1f0_5 = 0
        int64_t var_bc = 0
        
        if (sub_48c610(&var_bc).b == 0)
            var_8_1.b = 4
        label_42bdcc:
            
            if (data_cdf414 != 0)
                i = i_4
                
                if (i != 0 && *i != 0)
                    i = sub_44f000(&i_4)
                    int32_t temp1_1 = i[1]
                    i[1] -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(i, i[3] + 0x10)
            
            var_8_1.b = 8
            
            if (data_cdf414 != 0)
                i = i_2
                
                if (i != 0 && *i != 0)
                    i = sub_44f000(&i_2)
                    int32_t temp2_1 = i[1]
                    i[1] -= 1
                    
                    if (temp2_1 == 1)
                        sub_45d050(i, i[3] + 0x10)
                        i_2 = &data_5559b1
            
            int32_t var_8_3 = 9
            goto label_42be56
        
        int32_t* edi_5 = var_bc.d
        _fseek(edi_5, 0, 2)
        int32_t* var_1fc_3 = edi_5
        int32_t eax_17 = sub_52b118()
        
        if (_fseek(edi_5, 0, 0) != 0)
        label_42bdc1:
            var_8_1.b = 5
            goto label_42bdcc
        
        i = _fread(esi_3, eax_17, 1, edi_5)
        
        if (i != 1)
            goto label_42bdc1
        
        if (sub_483940(i, esi_3, esi_3, eax_16, nullptr, eax_17).b == 0)
            var_8_1.b = 6
            goto label_42bdcc
        
        _fclose(edi_5)
        var_bc.d = 0
        var_8_1.b = 7
        
        if (data_cdf414 != 0)
            char* i_6 = i_4
            
            if (i_6 != 0 && *i_6 != 0)
                char* eax_18 = sub_44f000(&i_4)
                int32_t temp3_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_45d050(eax_18, *(eax_18 + 0xc) + 0x10)
                    i_4 = &data_5559b1
        
        i = arg2
        var_8_1.b = 2
        int32_t* i_3 = nullptr
        
        if (i[0x3b] s> 0)
            uint32_t* edi_6 = &(*esi_3)[2]
            void* esi_4 = &i[0x46]
            
            do
                if (*(esi_4 - 8) != 0)
                    sub_44e4d0(i, &data_5559b1, "save.logs.logs[i].logBytes == NULL", 
                        "c:\ax2017\jams\shared\tgggame\code\gamesettings.cpp", 0x30c, "LocalGameLoad")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                *(esi_4 + 4) = edi_6[1]
                uint32_t ecx_13 = *edi_6
                *esi_4 = ecx_13
                
                if (ecx_13 s< 0x1000)
                    ecx_13 = 0x1000
                
                *(esi_4 + 8) = 0
                *(esi_4 - 4) = ecx_13
                char* eax_20 = sub_45cd70(ecx_13)
                *(esi_4 - 8) = eax_20
                sub_51d5b0(eax_20, edi_6[-2], *edi_6)
                i = i_3 + 1
                esi_4 += 0x14
                i_3 = i
                edi_6 = &edi_6[5]
            while (i s< arg2[0x3b])
        
        if (esi_3 != 0)
            _aligned_free_base(esi_3)
        
        var_8_1.b = 0xa
        
        if (data_cdf414 != 0)
            i = i_2
            
            if (i != 0 && *i != 0)
                i = sub_44f000(&i_2)
                int32_t temp4_1 = i[1]
                i[1] -= 1
                
                if (temp4_1 == 1)
                    sub_45d050(i, i[3] + 0x10)
                    i_2 = &data_5559b1
        
        int32_t var_8_2 = 0xb
        
        if (data_cdf414 != 0)
            i = i_1
            
            if (i != 0 && *i != 0)
                i = sub_44f000(&i_1)
                int32_t temp5_1 = i[1]
                i[1] -= 1
                
                if (temp5_1 == 1)
                    sub_45d050(i, i[3] + 0x10)
        
        i.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return i
}
