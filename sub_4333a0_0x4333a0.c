// 函数名称: sub_4333a0
// 虚拟地址: 0x4333a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_4333a0(int32_t* arg1)
{
    // 第一条实际指令: void* result
    void* result
    
    if (*arg1 == 0)
        result = data_5bcaec
        
        if (result != arg1[0x159])
            if (arg1[0x13c] == 0)
                result = arg1[3]
                
                if (result != 1)
                    void* ecx_1
                    
                    if (result == 0xa)
                        ecx_1 = data_65aabc
                        
                        if (ecx_1 == 0)
                            goto label_433489
                        
                        int32_t eax = arg1[2]
                        
                        if (eax == *(ecx_1 + 0x648))
                            goto label_433418
                        
                        if (sub_432d00(eax).b != 0)
                            goto label_433412
                        
                        result.b = 0
                        return result
                    
                label_433412:
                    ecx_1 = data_65aabc
                label_433418:
                    result = arg1[3]
                    
                    if (result == 9)
                        if (sub_432d60(arg1[2]).b != 0)
                            result.b = 1
                            return result
                        
                        result.b = 0
                        return result
                    
                    if (result != 0xa && result != 6 && result != 5)
                        if (result == 2 || result == 3 || result == 8 || result == 0xb)
                            result.b = 0
                            return result
                        
                        if (ecx_1 == 0)
                            goto label_433489
                        
                        result = arg1[2]
                        
                        if (result != *(ecx_1 + 0x648) && result != 0xffffffff)
                            result.b = 0
                            return result
            else
                void* ecx = data_65aabc
                
                if (ecx == 0)
                label_433489:
                    sub_44e4d0(result, &data_5559b1, "gClient", 
                        "c:\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x74, "GetClient")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                if (arg1[2] != *(ecx + 0x648) && arg1[3] == 7)
                    result.b = 0
                    return result
    
    result.b = 1
    return result
}
