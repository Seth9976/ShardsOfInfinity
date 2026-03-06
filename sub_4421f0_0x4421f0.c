// 函数名称: sub_4421f0
// 虚拟地址: 0x4421f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4421f0(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x14)
    void* result = *(arg1 + 0x14)
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx_4
    
    if (result s> 3)
        result -= 0x3e8
        
        if (result u<= 1)
            result.b = 0
            return result
        
    label_442275:
        var_c = "CanAddFriend"
        var_10 = 0x2437
        var_14 = "c:\ax2017\jams\shards\code\shardsclient.cpp"
        ecx_4 = "Halt"
    else
        if (result s>= 2)
            result.b = 0
            return result
        
        if (result == 0)
            result.b = 0
            return result
        
        void* result_1 = result
        result -= 1
        
        if (result_1 != 1)
            goto label_442275
        
        if (*(sub_42aaa0(*(data_65ac38 + 0xb24)) + 0x230) == *(arg1 + 0x18))
            result.b = 0
            return result
        
        void* ecx_2 = data_65aabc
        result = nullptr
        
        if (ecx_2 != 0)
            void* ecx_3 = ecx_2 + 0x28
            
            while (true)
                if (result s>= *(ecx_2 + 0x424))
                    result.b = 1
                    return result
                
                if (*ecx_3 == *(arg1 + 0x18))
                    break
                
                result += 1
                ecx_3 += 0x10
            
            result.b = 0
            return result
        
        var_c = "GetClient"
        var_10 = 0x74
        var_14 = "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_4 = "gClient"
    
    sub_44e4d0(result, &data_5559b1, ecx_4, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
