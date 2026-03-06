// 函数名称: sub_47b080
// 虚拟地址: 0x47b080
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_47b080(int32_t arg1)
{
    // 第一条实际指令: int32_t var_8
    int32_t var_8
    uint32_t eax
    char const* const ecx
    
    if (arg1 != 0)
        eax = zx.d(arg1.w)
        
        if (eax u< data_5c99a4)
            int32_t ecx_1 = eax * 0x1008
            eax = data_5c99a0
            void* ecx_2 = ecx_1 + eax
            
            if (*(ecx_2 + 0x1004) == arg1)
                void* i = *(ecx_2 + 0x784)
                void* esi = ecx_2 + 0x784
                
                for (; i != 0; i = *esi)
                    char* eax_2 = *(i + 0x698)
                    char* const ecx_3 = &data_5559b1
                    
                    if (eax_2 != 0)
                        ecx_3 = eax_2
                    
                    if (__stricmp(ecx_3, "tblGamesYours") == 0)
                        uint32_t eax_3
                        eax_3.b = 1
                        return eax_3
                    
                    esi = *esi + 0x784
                
                i.b = 0
                return i
        
        char const* const __saved_esi_1 = "DataArray<struct UI2>::DataArrayGet"
        var_8 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        char const* const __saved_esi = "DataArray<struct UI2>::DataArrayGet"
        var_8 = 0x6c
        ecx = "id != DATAID_NULL"
    
    sub_44e4d0(eax, &data_5559b1, ecx, "c:\ax2017\engine\dataarray.h", var_8, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_44e680() __tailcall
    
    breakpoint
}
