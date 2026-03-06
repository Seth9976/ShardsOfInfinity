// 函数名称: sub_47a7a0
// 虚拟地址: 0x47a7a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_47a7a0(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx_2 = data_5c99d8
    int32_t ecx_2 = data_5c99d8
    uint32_t eax
    
    if (ecx_2 != 0)
        eax = zx.d(ecx_2.w)
        
        if (eax u< data_5c99a4)
            int32_t esi_1 = data_5c99a0
            eax = eax * 0x1008 + esi_1
            
            if (*(eax + 0x1004) == ecx_2)
                int32_t var_10
                char* ecx
                
                if (ecx_2 == 0)
                    char const* const var_c = "DataArray<struct UI2>::DataArrayGet"
                    var_10 = 0x6c
                    ecx = "id != DATAID_NULL"
                label_47a839:
                    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_10, 
                        "DataArray<struct UI2>::DataArrayGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_44e680()
                    noreturn
                
                uint32_t edx = zx.d(ecx_2.w)
                
                if (edx u< data_5c99a4)
                    eax = edx * 0x1008
                
                if (edx u>= data_5c99a4 || *(eax + esi_1 + 0x1004) != ecx_2)
                    char const* const var_c_2 = "DataArray<struct UI2>::DataArrayGet"
                    var_10 = 0x6d
                    ecx = "DataArrayTryToGet(id) != NULL"
                    goto label_47a839
                
                eax = edx * 0x1008 + esi_1
                
                if (*(eax + 0x69c) == 3)
                    sub_44f510(arg2, eax + 0x798)
                    int32_t* eax_4
                    eax_4.b = 1
                    return eax_4
    
    eax.b = 0
    return eax
}
