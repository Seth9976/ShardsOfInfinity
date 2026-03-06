// 函数名称: sub_46e8f0
// 虚拟地址: 0x46e8f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_46e8f0(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t var_c = eax_1
    char const* const var_424
    int32_t var_420
    char const* const var_41c
    char* ecx
    
    if (arg3 != 0)
        eax_1 = zx.d(arg3.w)
        void* ecx_2
        
        if (eax_1 u< data_5c99a4)
            ecx_2 = eax_1 * 0x1008 + data_5c99a0
        
        if (eax_1 u>= data_5c99a4 || *(ecx_2 + 0x1004) != arg3)
            var_41c = "DataArray<struct UI2>::DataArrayGet"
            var_420 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_424 = "c:\ax2017\engine\dataarray.h"
        else
            int128_t var_410[0x40]
            eax_1 = sub_46d960(eax_1, &var_410, ecx_2, nullptr)
            
            if (arg2 s>= 0)
                if (arg2 s< eax_1)
                    *arg4 = var_410[arg2]
                    @__security_check_cookie@4(var_c ^ &__saved_ebp)
                    return arg4
                
                var_41c = "FieldGetPropDef"
                var_420 = 0x21c5
                var_424 = "c:\ax2017\engine\ui2.cpp"
                ecx = "propIndex < numDefs"
            else
                var_41c = "FieldGetPropDef"
                var_420 = 0x21c4
                var_424 = "c:\ax2017\engine\ui2.cpp"
                ecx = "propIndex >= 0"
    else
        var_41c = "DataArray<struct UI2>::DataArrayGet"
        var_420 = 0x6c
        ecx = "id != DATAID_NULL"
        var_424 = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(eax_1, &data_5559b1, ecx, var_424, var_420, var_41c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
