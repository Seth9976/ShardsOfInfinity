// 函数名称: sub_47b0f0
// 虚拟地址: 0x47b0f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __fastcallsub_47b0f0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_34
    int32_t var_34
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        
        if (eax u< data_5c99a4)
            void* ecx_2 = eax * 0x1008 + data_5c99a0
            
            if (*(ecx_2 + 0x1004) == arg1)
                void* eax_1 = sub_4627e0(ecx_2, 0)
                int32_t eax_2 = *(eax_1 + 0x778)
                
                if (eax_2 == 0)
                    *(eax_1 + 0x770) = sub_45cff0(0xc0)
                    *(eax_1 + 0x774) = 0
                    *(eax_1 + 0x778) = 8
                    eax_2 = *(eax_1 + 0x778)
                
                if (*(eax_1 + 0x774) == eax_2)
                    int32_t var_30_1 = (**arg2)()
                    return sub_44e260("dropped state edge %s")
                
                int32_t var_c = 0
                int128_t var_1c = data_59dc10
                int32_t* var_8 = arg2
                return sub_47b790(eax_1 + 0x770, &var_1c)
        
        char const* const var_30_3 = "DataArray<struct UI2>::DataArrayGet"
        var_34 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const var_30 = "DataArray<struct UI2>::DataArrayGet"
        var_34 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_34, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
