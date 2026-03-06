// 函数名称: sub_4387e0
// 虚拟地址: 0x4387e0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4387e0(int32_t arg1)
{
    // 第一条实际指令: int32_t* edi = data_5c2e30
    int32_t* edi = data_5c2e30
    int32_t eax = *edi
    int32_t* result
    
    if (eax == 1)
        int32_t esi_1 = edi[0xcd]
        int32_t ecx_1 = 0
        
        if (esi_1 s> 0)
            result = edi[0xcc]
            
            while (*result != arg1)
                ecx_1 += 1
                result = &result[1]
                
                if (ecx_1 s>= esi_1)
                    result.b = 0
                    return result
            
            result.b = 1
            return result
    else
        if (eax != 2)
            sub_44e4d0(eax - 2, &data_5559b1, "Halt", "c:\ax2017\jams\shards\code\shardsclient.cpp", 
                0xfbb, "IsCardInHand")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
        
        int32_t esi = edi[0xcd]
        int32_t ecx = 0
        
        if (esi s> 0)
            result = edi[0xcc]
            
            while (*result != arg1)
                ecx += 1
                result = &result[1]
                
                if (ecx s>= esi)
                    goto label_438814
            
            result.b = 1
            return result
    
    label_438814:
    result.b = 0
    return result
}
