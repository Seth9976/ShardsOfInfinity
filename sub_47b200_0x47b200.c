// 函数名称: sub_47b200
// 虚拟地址: 0x47b200
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int128_t* __convention("regparm")sub_47b200(uint32_t arg1, char* arg2, int32_t arg3, char arg4)
{
    // 第一条实际指令: char const* const var_44
    char const* const var_44
    int32_t var_40
    char const* const var_3c_1
    char* ecx
    
    if (arg3 != 0)
        arg1 = zx.d(arg3.w)
        void* edi_2
        
        if (arg1 u< data_5c99a4)
            edi_2 = arg1 * 0x1008 + data_5c99a0
        
        if (arg1 u>= data_5c99a4 || *(edi_2 + 0x1004) != arg3)
            var_3c_1 = "DataArray<struct UI2>::DataArrayGet"
            var_40 = 0x6d
            ecx = "DataArrayTryToGet(id) != NULL"
            var_44 = "c:\ax2017\engine\dataarray.h"
        else
            void* eax = sub_4627e0(edi_2, 0)
            
            if (arg4 != 0)
                eax = edi_2
            
            int32_t* eax_1 = sub_45d320(eax)
            arg1 = sub_4b8ac0(eax_1, eax_1, &data_5b1d6c, data_dff668, 0x6a)
            uint32_t ebx_1 = arg1
            int32_t i = 0
            
            if (*(ebx_1 + 4) s> 0)
                int32_t edi_3 = 0
                
                do
                    arg1 = __stricmp(*(*ebx_1 + edi_3), arg2)
                    
                    if (arg1 == 0)
                        int32_t ebx_2 = *ebx_1
                        int32_t edi_4 = i * 3
                        int32_t xmm0 = *(ebx_2 + (edi_4 << 2) + 8)
                        
                        if (*(eax + 0x778) == 0)
                            *(eax + 0x770) = sub_45cff0(0x60)
                            *(eax + 0x774) = 0
                            *(eax + 0x778) = 4
                        
                        int32_t var_1c = *(ebx_2 + (edi_4 << 2))
                        int32_t var_14 = *(ebx_2 + (edi_4 << 2) + 4)
                        int32_t var_20 = 0
                        int32_t var_18 = 0
                        int32_t var_10 = xmm0
                        int32_t var_c = 0
                        return sub_47b790(eax + 0x770, &var_20)
                    
                    i += 1
                    edi_3 += 0xc
                while (i s< *(ebx_1 + 4))
            
            var_3c_1 = "StateEffectDefLookup"
            var_40 = 0x37a1
            var_44 = "c:\ax2017\engine\ui2.cpp"
            ecx = "Halt"
    else
        var_3c_1 = "DataArray<struct UI2>::DataArrayGet"
        var_40 = 0x6c
        ecx = "id != DATAID_NULL"
        var_44 = "c:\ax2017\engine\dataarray.h"
    
    sub_44e4d0(arg1, &data_5559b1, ecx, var_44, var_40, var_3c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
