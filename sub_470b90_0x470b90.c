// 函数名称: sub_470b90
// 虚拟地址: 0x470b90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_470b90(char* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_542b5b
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_42c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* eax_3 = sub_46af30(arg1)
    char* var_418
    void* edi
    
    if (eax_3 == 0)
        if (sub_46ae50(arg1, &var_418) != 1)
            edi = sub_45d320(arg1)
        else
            sub_44f2d0(&var_418, var_418)
            int32_t var_8_1 = 0
            void* eax_5 = sub_46ad40(arg1, &var_418)
            int32_t var_8_2 = 1
            
            if (data_cdf414 != 0)
                char* ecx_3 = var_418
                
                if (ecx_3 != 0 && *ecx_3 != 0)
                    char* eax_6 = sub_44f000(&var_418)
                    int32_t temp1_1 = *(eax_6 + 4)
                    *(eax_6 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_45d050(eax_6, *(eax_6 + 0xc) + 0x10)
                        var_418 = &data_5559b1
            
            int32_t var_8_3 = 0xffffffff
            edi = eax_5 + 4
    else
        edi = eax_3 + 4
    
    *(arg1 + 0x648) = 0
    void var_414
    sub_46d960(&var_418, &var_414, arg1, &var_418)
    int32_t eax_9
    int32_t edx_5
    edx_5:eax_9 = muls.dp.d(0x66666667, arg2 - var_418)
    int32_t ebx_4 = (arg2 - var_418) s/ 5
    
    if ((arg2 - var_418) s/ 5 s< 0)
        sub_44e4d0(eax_9, &data_5559b1, "animIdx >= 0", "c:\ax2017\engine\ui2.cpp", 0x2646, 
            "UI2DeleteTransition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    void* eax_10 = sub_4b8ac0(eax_9, edi, &data_5b1d6c, data_dff698, 0x6c)
    
    if (eax_10 == 0)
        sub_44e4d0(eax_10, &data_5559b1, "transition", "c:\ax2017\engine\ui2.cpp", 0x2649, 
            "UI2DeleteTransition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(eax_10 + 8) s> ebx_4)
        int32_t* eax_11 = sub_48c3c0(data_dff698, 4)
        sub_4d2d50(eax_11, eax_11, eax_10, ebx_4, 0)
        int32_t result = sub_469210(1)
        fsbase->NtTib.ExceptionList = ExceptionList
        @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
        return result
    
    sub_44e4d0(eax_10, &data_5559b1, "transition->numItems > animIdx", "c:\ax2017\engine\ui2.cpp", 
        0x264a, "UI2DeleteTransition")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
