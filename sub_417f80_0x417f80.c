// 函数名称: sub_417f80
// 虚拟地址: 0x417f80
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_417f80(int32_t arg1)
{
    // 第一条实际指令: void var_118
    void var_118
    int32_t eax_1 = __security_cookie ^ &var_118
    void* result = data_65aabc
    __builtin_memcpy(&var_118, arg1, 0x108)
    int32_t var_18 = 1
    
    if (result == 0)
        sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
            0x74, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_44e680()
        noreturn
    
    if (*(result + 0x18) == 3)
        result = *(result + 0x14)
        void* ecx = data_65acf4
        
        if (result != 0)
            uint32_t edx_1 = zx.d(result.w)
            
            if (edx_1 u< *(ecx + 4))
                void* esi_2 = edx_1 * 0x4c + *ecx
                
                if (*(esi_2 + 0x48) == result)
                    int32_t var_124_1 = 0xf42ac
                    sub_450c90(result, 0x108, esi_2 + 0x3c)
                    result = sub_450a70(&var_118, 0x108, esi_2 + 0x3c, &var_118)
    
    @__security_check_cookie@4(eax_1 ^ &var_118)
    return result
}
