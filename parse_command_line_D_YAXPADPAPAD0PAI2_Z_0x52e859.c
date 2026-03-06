// 函数名称: ??$parse_command_line@D@@YAXPADPAPAD0PAI2@Z
// 虚拟地址: 0x52e859
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t*??$parse_command_line@D@@YAXPADPAPAD0PAI2@Z(char* arg1, int32_t* arg2, void* arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* esi = arg3
    int32_t edi
    int32_t var_14 = edi
    *arg5 = 0
    char* edi_1 = arg1
    *arg4 = 1
    
    if (arg2 != 0)
        *arg2 = esi
        arg2 = &arg2[1]
    
    ecx.b = 0
    var_8:3.b = 0
    int32_t* i
    
    while (true)
        if (*edi_1 != 0x22)
            *arg5 += 1
            
            if (esi != 0)
                i.b = *edi_1
                *esi = i.b
                esi += 1
            
            i.b = *edi_1
            edi_1 = &edi_1[1]
            var_8:2.b = i.b
            
            if (__ismbblead(i.b) != 0)
                *arg5 += 1
                
                if (esi != 0)
                    i.b = *edi_1
                    *esi = i.b
                    esi += 1
                
                edi_1 = &edi_1[1]
            
            i.b = var_8:2.b
            
            if (i.b == 0)
                edi_1 -= 1
                break
            
            ecx.b = var_8:3.b
        else
            i.b = 0x22
            ecx.b = ecx.b == 0
            edi_1 = &edi_1[1]
            var_8:3.b = ecx.b
        
        if (ecx.b == 0)
            if (i.b != 0x20 && i.b != 9)
                continue
            
            if (esi == 0)
                break
            
            *(esi - 1) = 0
            break
    
    var_8:3.b = 0
    
    while (true)
        i.b = *edi_1
        
        if (i.b == 0)
            break
        
        while (i.b == 0x20 || i.b == 9)
            edi_1 = &edi_1[1]
            i.b = *edi_1
        
        if (i.b == 0)
            break
        
        if (arg2 != 0)
            *arg2 = esi
            arg2 = &arg2[1]
        
        *arg4 += 1
        
        while (true)
            int32_t edx_1 = 1
            i = nullptr
            int32_t* ecx_1
            
            while (true)
                ecx_1.b = *edi_1
                
                if (ecx_1.b != 0x5c)
                    break
                
                edi_1 = &edi_1[1]
                i += 1
            
            if (ecx_1.b == 0x22)
                if ((i.b & 1) == 0)
                    ecx_1.b = var_8:3.b
                    
                    if (ecx_1.b == 0)
                        edx_1 = 0
                        var_8:3.b = ecx_1.b == 0
                    else if (edi_1[1] != 0x22)
                        ecx_1.b = var_8:3.b
                        edx_1 = 0
                        var_8:3.b = ecx_1.b == 0
                    else
                        edi_1 = &edi_1[1]
                
                i u>>= 1
            
            while (i != 0)
                i -= 1
                
                if (esi != 0)
                    *esi = 0x5c
                    esi += 1
                
                *arg5 += 1
            
            i.b = *edi_1
            
            if (i.b == 0)
                break
            
            if (var_8:3.b == 0)
                if (i.b == 0x20)
                    break
                
                if (i.b == 9)
                    break
            
            if (edx_1 != 0)
                if (esi != 0)
                    *esi = i.b
                    esi += 1
                    i.b = *edi_1
                
                if (__ismbblead(i.b) != 0)
                    edi_1 = &edi_1[1]
                    *arg5 += 1
                    
                    if (esi != 0)
                        int32_t eax_4
                        eax_4.b = *edi_1
                        *esi = eax_4.b
                        esi += 1
                
                *arg5 += 1
            
            edi_1 = &edi_1[1]
        
        if (esi != 0)
            *esi = 0
            esi += 1
        
        *arg5 += 1
    
    if (arg2 != 0)
        *arg2 = 0
    
    *arg4 += 1
    return arg4
}
