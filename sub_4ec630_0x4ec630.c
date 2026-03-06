// 函数名称: sub_4ec630
// 虚拟地址: 0x4ec630
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_4ec630(char* arg1, char* arg2)
{
    // 第一条实际指令: char* var_8 = arg1
    char* var_8 = arg1
    char* edi = arg1
    char* var_8_1 = arg1
    char* esi = arg2
    int32_t ebx
    ebx.b = *edi
    uint32_t result
    result.b = *esi
    
    while (ebx.b != 0)
        if (ebx.b == 0x2a)
            if (edi[1] == 0)
                goto label_4ec69d
            
            if (sub_4ec630().b != 0)
                goto label_4ec69d
            
            while (true)
                esi = &esi[1]
                
                if (*esi == 0)
                    break
                
                if (sub_4ec630().b != 0)
                    result.b = 1
                    return result
            
            goto label_4ec6d7
        
        if (result.b == 0)
            goto label_4ec6d7
        
        if (ebx.b != 0x3f)
            bool cond:0_1
            
            if (ebx.b != 0x5c)
                if (ebx.b == 0x2f)
                    cond:0_1 = result.b == 0x5c
                    goto label_4ec668
                
            label_4ec66e:
                uint32_t eax_1 = _tolower(sx.d(result.b))
                
                if (_tolower(sx.d(ebx.b)) != eax_1)
                    goto label_4ec6d7
                
                edi = var_8_1
            else
                cond:0_1 = result.b == 0x2f
            label_4ec668:
                
                if (not(cond:0_1))
                    goto label_4ec66e
        
        ebx.b = edi[1]
        edi = &edi[1]
        result.b = esi[1]
        esi = &esi[1]
        var_8_1 = edi
    
    if (result.b != 0)
    label_4ec6d7:
        result.b = 0
        return result
    
    label_4ec69d:
    result.b = 1
    return result
}
