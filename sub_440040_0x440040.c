// 函数名称: sub_440040
// 虚拟地址: 0x440040
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_440040(void* arg1)
{
    // 第一条实际指令: int32_t ebx = *(arg1 + 0xec)
    int32_t ebx = *(arg1 + 0xec)
    int32_t edx = 0
    int32_t edi = 0
    int32_t result_1 = 0
    int32_t result
    
    if (ebx s> 0)
        void* ecx = arg1 + 0x28
        
        while (true)
            result = *(ecx - 4)
            
            if (result s<= 3)
                if (result != 3)
                    if (result u> 2)
                        goto label_4400b8
                    
                    goto label_44007f
                
                result = result_1 + 1
                
                if (*ecx != 0)
                    result = result_1
                
                result_1 = result
                goto label_44007f
            
            result -= 0x3e8
            
            if (result u> 1)
            label_4400b8:
                sub_44e4d0(result, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 
                    0x1d50, "IsEasyGame")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            edi += 1
        label_44007f:
            edx += 1
            ecx += 0x2c
            
            if (edx s>= ebx)
                if (edi != 1 || result_1 + 1 != ebx)
                    break
                
                result.b = 1
                return result
    
    result.b = 0
    return result
}
