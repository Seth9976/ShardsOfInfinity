// 函数名称: sub_4259e0
// 虚拟地址: 0x4259e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4259e0(int32_t arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_472550(arg1, sub_4255d0)
    sub_44d2a0(&data_65aae0)
    int32_t eax_1 = sub_4249d0(&data_65aae0)
    
    switch (eax_1)
        case 2, 5
            int32_t var_18 = 0xffffffff
            sub_469930(arg1)
            int32_t var_1c = 0xffffffff
            int32_t eax_2
            int32_t ecx_4
            eax_2, ecx_4 = sub_469930(arg1)
            int32_t var_1c_1 = 0x36ba
            sub_413820(eax_2, arg1, data_65aadc, "tblCards", 0, 0x32c8, arg1, ecx_4)
            void* result = data_65aadc
            int32_t ebx = *(result + 0x618)
            
            if (ebx != 0xffffffff)
                void* result_1 = 2
                int32_t var_18_1 = 0xffffffff
                
                if (ebx s<= 0)
                    result_1 = nullptr
                
                int32_t eax_4 = *(result + 0x400) - 1
                sub_469930(arg1)
                result = result_1 & 2
                
                if (ebx s>= eax_4)
                    result = result_1
                
                if (result != 0)
                    int32_t var_18_2 = 0xffffffff
                    result = sub_469930(arg1)
                
                if (ebx s< eax_4)
                    int32_t var_18_3 = 0xffffffff
                    return sub_469930(arg1)
            
            return result
    
    sub_44e4d0(eax_1, &data_5559b1, "Halt", "c:\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 
        0x111f, "StoreItemUpdate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
