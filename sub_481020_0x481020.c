// 函数名称: sub_481020
// 虚拟地址: 0x481020
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_481020(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: if (*arg1 != 0)
    if (*arg1 != 0)
        int32_t eax
        sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\controller.cpp", 0x1a2, 
            "ControllerCursorPosition")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    int32_t var_c
    char eax_1 = sub_44edc0(&var_c)
    
    if (eax_1 != 0)
        arg1[0x23b9] = var_c
        int32_t var_8
        arg1[0x23ba] = var_8
    
    *arg2 = arg1[0x23b9]
    arg2[1] = arg1[0x23ba]
    int32_t result
    result.b = eax_1
    return result
}
