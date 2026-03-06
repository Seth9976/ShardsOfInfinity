// 函数名称: sub_416be0
// 虚拟地址: 0x416be0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_416be0()
{
    // 第一条实际指令: void* result = sub_41ad20()
    void* result = sub_41ad20()
    void* result_1 = result
    int32_t edi = 0
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx_5
    
    if (*(result_1 + 0xec) s<= 0)
    label_416c89:
        var_10 = "GameSetLocalWho"
        var_14 = 0x43d
        var_18 = "c:\ax2017\jams\shared\tgggame\code\gameclient.cpp"
        ecx_5 = "Halt"
    else
        void* esi_1 = result_1 + 0x28
        
        while (true)
            result = *(esi_1 - 4)
            
            if (result != 0x3e8 && result != 0x3e9)
                if (result != 1)
                label_416c31:
                    edi += 1
                    esi_1 += 0x2c
                    
                    if (edi s>= *(result_1 + 0xec))
                        goto label_416c89
                    
                    continue
                else
                    result = sub_42aaa0(*(data_65ac38 + 0xb24))
                    
                    if (*esi_1 != *(result + 0x230))
                        goto label_416c31
            
            int32_t ecx_4 = *((edi + 1) * 0x2c + result_1)
            result = data_65aabc
            
            if (result == 0)
                var_10 = "GetClient"
                var_14 = 0x74
                var_18 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_5 = "gClient"
                break
            
            if (*(result + 0x648) != ecx_4)
                *(result + 0x648) = ecx_4
                result = sub_41adc0()
                
                if (result.b != 0)
                    data_5bb240 = 0x16
            
            return result
    
    sub_44e4d0(result, &data_5559b1, ecx_5, var_18, var_14, var_10)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
