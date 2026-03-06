// 函数名称: sub_4c0e10
// 虚拟地址: 0x4c0e10
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_4c0e10(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    void* esi = data_cdf428
    char const* const var_20
    int32_t var_1c
    char const* const var_18
    int32_t eax
    char* ecx
    
    if (esi != 0)
        int32_t* esi_1 = *(esi + 0xc)
        eax = esi_1[4]
        
        if (eax u< esi_1[2])
            eax = esi_1[3]
            int32_t ebx_1 = esi_1[1]
            
            if (eax u<= ebx_1)
                int32_t ecx_1 = *esi_1
                int32_t eax_1
                
                if (eax != ebx_1)
                    ebx_1 = eax
                    eax_1 = *(eax * 0x94 + ecx_1 + 0x90)
                else
                    eax_1 = ebx_1 + 1
                    esi_1[1] = eax_1
                
                esi_1[3] = eax_1
                int32_t* result = ebx_1 * 0x94 + ecx_1
                _memset(result, 0, 0x90)
                result[0x24] = esi_1[5] << 0x10 | ebx_1
                esi_1[5] += 1
                
                if (esi_1[5] == 0x10000)
                    esi_1[5] = 1
                
                esi_1[4] += 1
                *result = arg1
                __builtin_memcpy(&result[8], 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                        3f", 
                    0x40)
                result[0x18] = data_5c77bc
                result[0x19] = data_5c77c0
                result[0x1e] = 0xffffffff
                sub_4c0d60(result)
                return result
            
            var_18 = "DataArray<struct Flanim>::DataArrayAlloc"
            var_1c = 0xf5
            ecx = "mFreeListHead <= mMaxUsedCount"
        else
            var_18 = "DataArray<struct Flanim>::DataArrayAlloc"
            var_1c = 0xf4
            ecx = "mUsedCount < mMaxSize"
        
        var_20 = "c:\ax2017\engine\dataarray.h"
    else
        var_18 = "GetGameData"
        var_1c = 0x45
        var_20 = "c:\ax2017\engine\game.h"
        ecx = "gpGameData"
    
    sub_44e4d0(eax, &data_5559b1, ecx, var_20, var_1c, var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
