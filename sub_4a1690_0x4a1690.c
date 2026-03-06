// 函数名称: sub_4a1690
// 虚拟地址: 0x4a1690
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char** __fastcallsub_4a1690(char** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_543b49
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_18 = arg1
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    sub_44f240(arg1, &data_5559b1)
    int32_t var_8_2 = 0
    int32_t i = 0
    int32_t var_14_1 = 1
    
    if (*(arg2 + 0x1c) s> 0)
        do
            int32_t eax_3 = *(arg2 + 0x18)
            
            if (*(eax_3 + (i << 2)) != 0)
                sub_44e4d0(eax_3, &data_5559b1, "Halt", "c:\ax2017\engine\materialfndef.cpp", 0x2d5, 
                    "EmitUVModifiers")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            sub_44f620(arg1, "\tuv = Spherize(uv);\n")
            i += 1
        while (i s< *(arg2 + 0x1c))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
