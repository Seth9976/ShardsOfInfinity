// 函数名称: sub_438240
// 虚拟地址: 0x438240
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void* __fastcallsub_438240(void* arg1, char arg2)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg2
    void* edi = sub_443fc0()
    void* result
    
    if (edi != 0)
        int32_t ecx = *(edi + 0x18)
        
        if (ecx == 0x16 || ecx == 0x15)
            result.b = 0
            return result
        
        if (ecx != 0xd)
            if (ecx != 1)
                if (ecx == 0x13 && sub_432960(arg1, ecx + 3).b != 0)
                    result.b = 0
                    return result
            else if (*(arg1 + 0xc) != 7)
                result.b = 0
                return result
        else if (*(arg1 + 0xc) != 4)
            result.b = 0
            return result
        
        char eax
        
        if (*(edi + 0x18) == 0x13)
            eax = sub_432960(arg1, 6)
        
        if (*(edi + 0x18) == 0x13 && eax == 0 && *data_5c2e30 == 2)
            result.b = 0
            return result
        
        char eax_1
        
        if (*(edi + 0x18) == 0x14)
            eax_1 = sub_432960(arg1, 5)
        
        if (*(edi + 0x18) == 0x14 && eax_1 != 0 && *data_5c2e30 == 2 && *(arg1 + 0xc) != 9)
            result.b = 0
            return result
        
        result = *(edi + 0x18)
        void* edx_2
        bool cond:0_1
        
        if (result == 3)
            if (ebx.b == 0)
                result.b = 0
                return result
            
            if (*(arg1 + 0xc) != 4)
                result.b = 0
                return result
            
        label_43836d:
            
            if (result == 0x11)
                edx_2 = result - 0xa
            label_43833f:
                cond:0_1 = sub_432960(arg1, edx_2).b == 0
                goto label_438341
            
            if (result == 0x10 || result == 0xf)
                goto label_43838c
            
            goto label_438383
        
        if (result == 7)
            result.b = 0
            return result
        
        if (result == 6 || result == 8)
            if (ebx.b == 0)
                result.b = 0
                return result
            
        label_438383:
            
            if (sub_4381e0(arg1).b != 0)
                result.b = 0
                return result
            
        label_43838c:
            result = *(edi + 0x18)
            
            if (result == 0xf || result == 0x10)
                if (sub_4381e0(arg1).b == 0)
                    result.b = 0
                    return result
                
                if (*(edi + 0x18) == 0xf && ebx.b == 0)
                    result.b = 0
                    return result
        else
            void* edx_1
            
            if (result != 0x17)
                if (result == 0x18)
                    edx_1 = 8
                    goto label_438355
                
                if (result == 0xe)
                    edx_2 = result + 0x23
                    goto label_43833f
                
                if (result == 0x12)
                    edx_1 = 8
                    goto label_438355
                
                if (result != 2 || *(arg1 + 0xc) == 4)
                    goto label_43836d
                
                result.b = 0
                return result
            
            edx_1 = result - 0x10
        label_438355:
            
            if (sub_432960(arg1, edx_1).b == 0)
                result.b = 0
                return result
            
            cond:0_1 = ebx.b == 0
        label_438341:
            
            if (cond:0_1)
                result.b = 0
                return result
    
    result.b = 1
    return result
}
