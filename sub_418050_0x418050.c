// 函数名称: sub_418050
// 虚拟地址: 0x418050
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_418050(int32_t arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* eax_2 = sub_42aaa0(*(data_65ac38 + 0xb24))
    int32_t var_1c = 0
    int32_t var_18 = arg1
    int32_t var_14 = *(eax_2 + (arg1 << 2) + 0x2a4)
    int32_t var_c = *(eax_2 + (arg1 << 2) + 0x2bc)
    void* result = data_65aabc
    int32_t var_10 = *(eax_2 + (arg1 << 2) + 0x2b0)
    
    if (result == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(result + 0x18) == 3)
        result = *(result + 0x14)
        void* ecx_4 = data_65acf4
        
        if (result != 0)
            uint32_t edx_1 = zx.d(result.w)
            
            if (edx_1 u< *(ecx_4 + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx_4
                
                if (*(esi_2 + 0x48) == result)
                    int32_t var_28_1 = 0xf42b5
                    sub_450c90(result, 0x14, esi_2 + 0x3c)
                    result = sub_450a70(&var_1c, 0x14, esi_2 + 0x3c, &var_1c)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
