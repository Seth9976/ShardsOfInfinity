// 函数名称: sub_452cb0
// 虚拟地址: 0x452cb0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __convention("regparm")sub_452cb0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t* ecx
    int32_t* ecx
    int32_t* var_8 = ecx
    int32_t result = arg4 - 1
    int32_t* var_8_1 = ecx
    int32_t esi = 0
    arg4 = result
    
    if (result s> 0)
        do
            if (esi s> arg3 - 1)
                sub_44e4d0(result, &data_5559b1, "min <= max", "c:\ax2017\engine\random.cpp", 0xd3, 
                    "RandomLCIntRange")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_44e680()
                noreturn
            
            uint32_t eax_1 = sub_452c60(ecx, arg3 - 1 - esi + 1)
            int32_t ecx_1 = *(arg2 + (esi << 2))
            int32_t edx_3 = esi + eax_1
            result = *(arg2 + (edx_3 << 2))
            *(arg2 + (esi << 2)) = result
            esi += 1
            *(arg2 + (edx_3 << 2)) = ecx_1
            ecx = var_8_1
        while (esi s< arg4)
    
    return result
}
