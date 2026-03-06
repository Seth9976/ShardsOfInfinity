// 函数名称: sub_41aab0
// 虚拟地址: 0x41aab0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_41aab0(void* arg1)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    void* result = arg1
    void* ecx = data_65aabc
    
    if (ecx != 0)
        var_8 = *sub_41b1b0(ecx + 0x444, result)
        result = data_65aabc
        
        if (result != 0)
            if (*(result + 0x18) == 3)
                result = *(result + 0x14)
                void* ecx_2 = data_65acf4
                
                if (result != 0)
                    uint32_t edx_1 = zx.d(result.w)
                    
                    if (edx_1 u< *(ecx_2 + 4))
                        void* esi_2 = edx_1 * 0x4c + *ecx_2
                        
                        if (*(esi_2 + 0x48) == result)
                            int32_t var_10_1 = 0xf42ad
                            sub_450c90(result, 4, esi_2 + 0x3c)
                            return sub_450a70(&var_8, 4, esi_2 + 0x3c, &var_8)
            
            return result
    
    sub_44e4d0(result, &data_5559b1, "gClient", "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, 
        "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
