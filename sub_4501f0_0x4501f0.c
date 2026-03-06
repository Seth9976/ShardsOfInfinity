// 函数名称: sub_4501f0
// 虚拟地址: 0x4501f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

void*sub_4501f0()
{
    // 第一条实际指令: int32_t* ecx_1 = data_65acf4
    int32_t* ecx_1 = data_65acf4
    char const* const var_10
    int32_t var_c
    char const* const var_8
    int32_t eax
    char* ecx
    
    if (ecx_1 != 0)
        eax = ecx_1[4]
        
        if (eax u< ecx_1[2])
            eax = ecx_1[3]
            int32_t esi_1 = ecx_1[1]
            
            if (eax u<= esi_1)
                void* edx = *ecx_1
                int32_t eax_1
                
                if (eax != esi_1)
                    esi_1 = eax
                    eax_1 = *(eax * 0x4c + edx + 0x48)
                else
                    eax_1 = esi_1 + 1
                    ecx_1[1] = eax_1
                
                ecx_1[3] = eax_1
                void* result = edx + esi_1 * 0x4c
                __builtin_memset(result, 0, 0x48)
                *(result + 0x34) = 0
                *(result + 0x38) = 0
                *(result + 0x40) = 0
                *(result + 0x44) = 0
                *(result + 0x48) = ecx_1[5] << 0x10 | esi_1
                ecx_1[5] += 1
                
                if (ecx_1[5] == 0x10000)
                    ecx_1[5] = 1
                
                ecx_1[4] += 1
                *(result + 0x10) = 0xffffffff
                return result
            
            var_8 = "DataArray<struct NetLoc>::DataArrayAlloc"
            var_c = 0xf5
            ecx = "mFreeListHead <= mMaxUsedCount"
        else
            var_8 = "DataArray<struct NetLoc>::DataArrayAlloc"
            var_c = 0xf4
            ecx = "mUsedCount < mMaxSize"
        
        var_10 = "c:\ax2017\engine\dataarray.h"
    else
        var_8 = "NetLocAlloc"
        var_c = 0x133
        var_10 = "c:\ax2017\engine\network.cpp"
        ecx = "gNetwork"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
