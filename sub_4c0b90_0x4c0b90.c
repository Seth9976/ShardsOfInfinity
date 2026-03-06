// 函数名称: sub_4c0b90
// 虚拟地址: 0x4c0b90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_4c0b90(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = __ehhandler$??$raise_error@Vevaluation_error@math@boost@@O@detail@policies@math@boost@@YAXPBD0ABO@Z
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_a0 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg1 == 0)
        int32_t eax_3 = arg1[0x19]
        arg1[0x8b] = 0
        int128_t var_84 = zx.o(0)
        var_84.d = arg1
        var_84:4.d = eax_3
        var_84:8.d = eax_3
        int128_t var_94 = var_84
        sub_4c0560(&var_84:4, &var_94)
        int32_t var_8_1 = 0
        
        if (var_84:4.d != 3)
            arg1[0x1a] = 0
            *arg1 = 1
        else
            int32_t* edi_1 = var_84:8.d
            arg1[0x1a] = edi_1
            int32_t eax_7 = (edi_1 - arg1 - 0x6c) s/ 0x1c
            
            if (eax_7 s>= arg1[0x8b])
                sub_44e4d0(eax_7, &data_5559b1, "tree.root - tree.expressions < tree.numExpressions", 
                    "c:\ax2017\engine\ui2expr.cpp", 0x2ed, "UI2ExpressionParse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            if (eax_7 s< 0)
                sub_44e4d0(eax_7, &data_5559b1, "tree.root - tree.expressions >= 0", 
                    "c:\ax2017\engine\ui2expr.cpp", 0x2ee, "UI2ExpressionParse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            *arg1 = 2
            int32_t eax_9 = *edi_1 - 1
            
            if (eax_9 u<= 2)
                var_8_1.b = 1
                void var_74
                sub_460d80(&arg1[1], sub_45e500(eax_9, arg1, &var_74, 0, nullptr, 0))
                var_8_1.b = 2
                void var_64
                `eh vector vbase constructor iterator'(&var_64, 4, 4, sub_44f380)
                *arg1 = 3
        
        int32_t var_8_2 = 3
        
        if (data_cdf414 != 0)
            char* eax_11 = var_84:0xc.d
            
            if (eax_11 != 0 && *eax_11 != 0)
                char* eax_12 = sub_44f000(&var_84:0xc)
                int32_t temp0_1 = *(eax_12 + 4)
                *(eax_12 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_45d050(eax_12, *(eax_12 + 0xc) + 0x10)
    
    int32_t result = *arg1
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
