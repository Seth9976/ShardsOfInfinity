// 函数名称: sub_46a100
// 虚拟地址: 0x46a100
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

voidsub_46a100()
{
    // 第一条实际指令: int32_t edx = data_5cd9fc
    int32_t edx = data_5cd9fc
    int32_t ebx
    int32_t var_1c = ebx
    int32_t esi = 0
    data_5cd9f0 = 0
    data_5cd9f4 = 0
    char const* const var_30
    int32_t var_2c
    char const* const var_28
    uint32_t eax
    char* ecx_6
    
    if (edx == 0)
    label_46a1d0:
        ebx.b = 0
        int32_t var_c_1 = 0
        int32_t var_8_1 = 0xffffffff
        uint32_t var_10_2 = 0
        
        if (esi s<= 0)
            return 
        
        void* edi_3 = &data_5c99fc
        
        while (true)
            int32_t edx_2 = *(edi_3 - 8)
            char ecx_4 = 0
            void* esi_2 = *(edi_3 - 0xc)
            
            if (edx_2 != var_8_1)
                ecx_4 = ebx.b
            
            ebx.b = ecx_4
            *edi_3 = 0
            *(edi_3 - 4) = 0xffffffff
            eax.b = ebx.b
            
            if (ebx.b == 0 || edx_2 s<= var_8_1)
                if (eax.b == 1)
                    ebx.b = 0
                    var_8_1 = 0xffffffff
                
                if (ebx.b == 0 && *(esi_2 + 0xc) != ebx.b)
                    ebx.b = 1
                    var_8_1 = edx_2
                    *edi_3 = 1
                
                *(edi_3 - 4) = var_c_1
                data_5cd9f4 += 1
                var_c_1 += 1
                eax = *edi_3
            else
                if (var_8_1 == 0xffffffff)
                    var_28 = "UI2EditorSyncDisplayTree"
                    var_2c = 0x1a7d
                    ecx_6 = "miminizedIndent != -1"
                    break
                
                *edi_3 = 2
                eax = 2
            
            if (eax != 1)
                if (eax == 0 && *(esi_2 + 0xc) != eax.b)
                    var_28 = "UI2EditorSyncDisplayTree"
                    var_2c = 0x1aa0
                    ecx_6 = "!ui.minimized"
                    break
            else if (*(esi_2 + 0xc) == 0)
                var_28 = "UI2EditorSyncDisplayTree"
                var_2c = 0x1a9b
                ecx_6 = "ui.minimized"
                break
            
            int32_t* eax_4 = sub_45d320(esi_2)
            int32_t ecx_8 = 0
            int32_t edx_3 = *eax_4
            
            if (edx_3 s> 0)
                void* esi_3 = eax_4[1]
                
                while (*esi_3 != 0x6b)
                    ecx_8 += 1
                    esi_3 += 8
                    
                    if (ecx_8 s>= edx_3)
                        goto label_46a305
                
                eax = sub_4b8c10(&data_5b1d6c, 0x6b)
                
                if (*(eax + 0x10) != 8)
                    var_28 = "AttribAsString"
                    var_2c = 0x677
                    ecx_6 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING"
                    break
                
                sub_469e00(esi_2, *(esi_3 + 4))
            
        label_46a305:
            edi_3 += 0x10
            eax = var_10_2 + 1
            var_10_2 = eax
            
            if (eax s>= data_5cd9f0)
                return 
        
        var_30 = "c:\ax2017\engine\ui2.cpp"
    else
        int32_t ecx_1 = data_5c99a4
        uint32_t edi_1 = zx.d(edx.w)
        
        if (edi_1 u< ecx_1)
            ebx = data_5c99a0
            eax = edi_1 * 0x1008
        
        if (edi_1 u>= ecx_1 || *(eax + ebx + 0x1004) != edx)
        label_46a23a:
            var_28 = "DataArray<struct UI2>::DataArrayGet"
            var_2c = 0x6d
            var_30 = "c:\ax2017\engine\dataarray.h"
            ecx_6 = "DataArrayTryToGet(id) != NULL"
        else
            int32_t edi_2 = 0
            eax = edi_1 * 0x1008 + ebx
            uint32_t var_10_1 = eax
            
            if (*(eax + 0x7f4) s<= 0)
                goto label_46a1d0
            
            void* esi_1 = eax + 0x7f8
            
            while (true)
                int32_t edx_1 = *esi_1
                
                if (edx_1 == 0)
                    var_28 = "DataArray<struct UI2>::DataArrayGet"
                    var_2c = 0x6c
                    var_30 = "c:\ax2017\engine\dataarray.h"
                    ecx_6 = "id != DATAID_NULL"
                    break
                
                eax = zx.d(edx_1.w)
                
                if (eax u>= ecx_1)
                    goto label_46a23a
                
                void* ecx_3 = eax * 0x1008 + ebx
                
                if (*(ecx_3 + 0x1004) != edx_1)
                    goto label_46a23a
                
                sub_469730(eax, &data_5c99f0, ecx_3, &data_5cd9f0, nullptr)
                eax = var_10_1
                edi_2 += 1
                esi_1 += 4
                
                if (edi_2 s>= *(eax + 0x7f4))
                    esi = data_5cd9f0
                    goto label_46a1d0
                
                ecx_1 = data_5c99a4
                ebx = data_5c99a0
    
    sub_44e4d0(eax, &data_5559b1, ecx_6, var_30, var_2c, var_28)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
