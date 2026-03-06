// 函数名称: sub_479260
// 虚拟地址: 0x479260
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void __fastcallsub_479260(void* arg1)
{
    // 第一条实际指令: if (*(arg1 + 0x7f4) == 0)
    if (*(arg1 + 0x7f4) == 0)
        *(arg1 + 0x664) = 0
        *(arg1 + 0x668) = 0
        return 
    
    int32_t esi = *(*(arg1 + 0x63c) * 0x208 + arg1 + 0x1a0)
    
    if (esi == 0)
        return 
    
    int32_t var_18
    int32_t* edx
    int32_t* eax = sub_478d90(&var_18, edx, arg1, &var_18)
    
    if (eax.b == 0)
        return 
    
    if (esi != 1)
        if (esi == 2)
            int32_t var_10
            *(arg1 + 0x664) = sub_414bc0(*(arg1 + 0x664), var_18, var_10)
            return 
        
        if (esi != 3)
            sub_44e4d0(eax, &data_5559b1, "Halt", "c:\ax2017\engine\ui2.cpp", 0x33ff, 
                "UI2ClampScrollDelta")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_44e680()
            noreturn
    
    int32_t var_14
    int32_t var_c
    *(arg1 + 0x668) = sub_414bc0(*(arg1 + 0x668), var_14, var_c)
}
