// 函数名称: sub_4fe850
// 虚拟地址: 0x4fe850
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_tsub_4fe850()
{
    // 第一条实际指令: int32_t var_a0
    int32_t var_a0
    int32_t eax_1 = __security_cookie ^ &var_a0
    float xmm0 = data_df847c
    float var_7c = (data_df8484 ^ (data_59e5c0.o).d) * xmm0
    int32_t var_78 = 0x3f800000
    float var_74 = xmm0
    int32_t ecx
    int32_t var_b0 = ecx
    data_d76c64
    float var_80
    var_80.o = ((data_df8480 ^ (data_59e5c0.o).d) * xmm0).o
    int128_t var_70 = zx.o(0)
    int128_t var_60 = data_59e550
    int128_t var_50 = data_571cf8
    int128_t var_40 = data_59e550
    int32_t var_30 = 0
    void var_98
    int32_t esi
    sub_487dc0(esi, &var_98, &data_571d90, 0, data_5b0f3c, nullptr, nullptr, nullptr)
    sub_4fce40()
    int32_t var_a8_2
    int32_t eax_2
    int32_t var_9c
    int32_t* ecx_2
    
    if (data_d77c70.b != 0 || data_d77c72 != 0)
        sub_44edc0(&var_a0)
        eax_2 = sub_4fdd90(var_a0, var_9c)
        PSTR lpCursorName
        char result
        
        if (eax_2 == 0xffffffff)
        label_4fea0a:
            ecx_2 = &var_a0
        label_4fea0d:
            result = sub_44edc0(ecx_2)
            
            if (result == 0)
                @__security_check_cookie@4(eax_1 ^ &var_a0)
                return result
            
            lpCursorName = 0x7f00
        label_4fea24:
            result = SetCursor(LoadCursorA(nullptr, lpCursorName))
            @__security_check_cookie@4(eax_1 ^ &var_a0)
            return result
        
        if (eax_2 u> 7)
            char const* const var_a4_5 = "UIEditorUpdate"
            var_a8_2 = 0x45e
        else
            switch (eax_2)
                case 0, 7
                label_4fe981:
                    result = sub_44edc0(&var_a0)
                    
                    if (result == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_a0)
                        return result
                    
                    lpCursorName = 0x7f82
                    goto label_4fea24
                case 1, 6
                label_4fe9fa:
                    result = sub_44edc0(&var_a0)
                    
                    if (result == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_a0)
                        return result
                    
                    lpCursorName = 0x7f84
                    goto label_4fea24
                case 2, 5
                label_4fe99b:
                    result = sub_44edc0(&var_a0)
                    
                    if (result == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_a0)
                        return result
                    
                    lpCursorName = 0x7f83
                    goto label_4fea24
                case 3, 4
                label_4fe9b2:
                    result = sub_44edc0(&var_a0)
                    
                    if (result == 0)
                        @__security_check_cookie@4(eax_1 ^ &var_a0)
                        return result
                    
                    lpCursorName = 0x7f85
                    goto label_4fea24
    else
        ecx_2 = &var_a0
        
        if (data_d77c70:1.b == 0)
            goto label_4fea0d
        
        sub_44edc0(ecx_2)
        eax_2 = sub_4fe3a0(var_a0, var_9c)
        
        if (eax_2 == 0xffffffff)
            goto label_4fea0a
        
        if (eax_2 u> 7)
            char const* const var_a4_2 = "UIEditorUpdate"
            var_a8_2 = 0x484
        else
            switch (eax_2)
                case 0, 7
                    goto label_4fe981
                case 1, 6
                    goto label_4fe9fa
                case 2, 5
                    goto label_4fe99b
                case 3, 4
                    goto label_4fe9b2
    sub_44e4d0(eax_2, &data_5559b1, "Halt", "c:\ax2017\engine\editor\uieditor.cpp", var_a8_2, 
        "UIEditorUpdate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
