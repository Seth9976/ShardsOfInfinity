// 函数名称: sub_41ac90
// 虚拟地址: 0x41ac90
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_41ac90(int32_t arg1)
{
    // 第一条实际指令: void* eax_5 = data_65aabc
    void* eax_5 = data_65aabc
    
    if (eax_5 == 0)
        sub_44e4d0(eax_5, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_44e680() __tailcall
        
        breakpoint
    
    for (int32_t* i = *(*(eax_5 + 0x628) + (((arg1 s>> 4 | arg1) & *(eax_5 + 0x62c)) << 2)); i != 0; 
            i = i[6])
        if (arg1 == *i)
            if (i == 0xfffffff8 || i[2] == 3)
                break
            
            int32_t ecx_4
            ecx_4.b = sub_41ac30(&i[2]) s> 0xea60
            return ecx_4 + 1
    
    return 3
}
