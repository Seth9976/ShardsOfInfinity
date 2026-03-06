// 函数名称: sub_44f740
// 虚拟地址: 0x44f740
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

char* __thiscallsub_44f740(int32_t* arg1, char* arg2, char arg3)
{
    // 第一条实际指令: int32_t eax
    int32_t eax
    
    if (arg2 s>= 0)
        char* eax_1 = *arg1
        
        if (eax_1 == 0 || *eax_1 == 0)
            eax = 0
        else
            eax = *(sub_44f000(arg1) + 8)
        
        if (arg2 s< eax)
            char* eax_3
            
            if (*(sub_44f000(arg1) + 4) s> 1)
                char* eax_4 = *arg1
                int32_t edx_1
                
                if (eax_4 == 0 || *eax_4 == 0)
                    edx_1 = 0
                else
                    eax_4 = sub_44f000(arg1)
                    edx_1 = *(eax_4 + 8)
                
                sub_44f100(eax_4, edx_1, arg1, 1)
                eax_3 = *arg1
                
                if (eax_3 != 0 && *eax_3 != 0)
                    (*arg1)[*(sub_44f000(arg1) + 8)] = 0
                    char* eax_6
                    eax_6.b = arg3
                    arg2[*arg1] = eax_6.b
                    return eax_6
                
                *eax_3 = 0
            
            eax_3.b = arg3
            arg2[*arg1] = eax_3.b
            return eax_3
    
    sub_44e4d0(eax, &data_5559b1, "index >= 0 && index < Length()", "c:\ax2017\engine\xstring.cpp", 
        0x12b, "XString::SetAsciiChar")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
