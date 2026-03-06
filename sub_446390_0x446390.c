// 函数名称: sub_446390
// 虚拟地址: 0x446390
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_446390(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ebx = arg2
    int32_t ebx = arg2
    uint32_t eax = 0
    int32_t var_8 = ebx
    int32_t result = 0
    int32_t edi = *(arg3 + 0x1904)
    
    if (edi s<= 0)
    label_4463d6:
        int32_t ebx_2 = *(arg3 + 0x19d0)
        int32_t ecx_2 = 0
        
        if (ebx_2 s<= 0)
            return result
        
        while (true)
            if (*(arg3 + ecx_2 + 0x1908) != 0)
                eax = zx.d(edi.w + ecx_2.w)
                
                if (eax u>= 0xc8)
                    break
                
                uint32_t eax_2 = eax << 5
                edi = *(arg3 + 0x1904)
                
                if (*(eax_2 + arg3 + 4) == var_8)
                    ebx_2 = *(arg3 + 0x19d0)
                    
                    if (*(eax_2 + arg3 + 8) == arg4)
                        result += 1
            
            ecx_2 += 1
            
            if (ecx_2 s>= ebx_2)
                return result
    else
        while (true)
            uint32_t ecx = zx.d(eax.w)
            
            if (ecx u>= 0xc8)
                break
            
            uint32_t ecx_1 = ecx << 5
            
            if (*(ecx_1 + arg3 + 4) == ebx)
                ebx = var_8
                
                if (*(ecx_1 + arg3 + 8) == arg4)
                    result += 1
            
            eax += 1
            
            if (eax s>= edi)
                goto label_4463d6
    
    sub_44e4d0(eax, &data_5559b1, "idNoMimic < MAX_CARDS", "c:\ax2017\jams\shards\code\shardsgame.cpp", 
        0x87, "CardGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
