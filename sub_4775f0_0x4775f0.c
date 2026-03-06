// 函数名称: sub_4775f0
// 虚拟地址: 0x4775f0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t (*sub_4775f0(char* arg1, uint32_t arg2))[0x4]
{
    // 第一条实际指令: int32_t* ecx = data_5cd9f8
    int32_t* ecx = data_5cd9f8
    char const* const var_28
    int32_t var_24
    char const* const var_20
    int128_t* eax
    char* ecx_1
    
    if (ecx[1] == 0x22)
        int32_t* eax_1 = sub_4459f0(ecx)
        void* eax_3 = sub_45d320(*(sub_469160(arg2) + 0x784))
        void* i_1 = nullptr
        *(eax_3 + 8) += 1
        sub_47b8c0(&data_5c99a0, &i_1)
        
        for (void* i = i_1; i != 0xffffffff; i = i_1)
            if (*(i + 0x6a4) == data_5cd9f8)
                int32_t eax_5 = *(i + 0x6a8)
                
                if (eax_5 s>= arg2)
                    *(i + 0x6a8) = eax_5 + 1
            
            sub_47b8c0(&data_5c99a0, &i_1)
        
        int32_t edx_1 = data_5cea2c
        int32_t eax_7 = 0
        
        if (edx_1 s> 0)
            do
                int32_t ecx_4 = (&data_5cda2c)[eax_7]
                
                if (ecx_4 s>= arg2)
                    (&data_5cda2c)[eax_7] = ecx_4 + 1
                    edx_1 = data_5cea2c
                
                eax_7 += 1
            while (eax_7 s< edx_1)
        
        int32_t* eax_8 = sub_48c3c0(data_e470e0, 0)
        sub_4d2c20(eax_8, eax_8, eax_1, arg2, 1)
        int32_t eax_9 = *eax_1
        int32_t* edi_1 = eax_9 + arg2 * 0xc
        eax = sub_4b8ac0(
            sub_4b8610(
                sub_4b8610(sub_4b8610(eax_9, edi_1, &data_5b1d6c, 0x64, "newGroup"), edi_1, 
                    &data_5b1d6c, 0x66, 6), 
                edi_1, &data_5b1d6c, 0x71, arg1), 
            edi_1, &data_5b1d6c, data_e4712c, 0x71)
        *eax = *arg1
        
        if (eax != 0)
            int32_t ecx_9 = data_5cd9fc
            
            if (ecx_9 != 0)
                uint32_t edx_7 = zx.d(ecx_9.w)
                
                if (edx_7 u< data_5c99a4)
                    int32_t edi_2 = data_5c99a0
                    eax = edx_7 * 0x1008
                    
                    if (*(eax + edi_2 + 0x1004) == ecx_9)
                        uint32_t esi_4 = edx_7 * 0x1008 + edi_2
                        uint32_t (* result)[0x4] = sub_45ec10(esi_4)
                        uint32_t ecx_11 = *(esi_4 + 0x6a4)
                        (*result)[0x1aa] = arg2
                        (*result)[0x1a9] = ecx_11
                        return result
                
                var_20 = "DataArray<struct UI2>::DataArrayGet"
                var_24 = 0x6d
                ecx_1 = "DataArrayTryToGet(id) != NULL"
            else
                var_20 = "DataArray<struct UI2>::DataArrayGet"
                var_24 = 0x6c
                ecx_1 = "id != DATAID_NULL"
            
            var_28 = "c:\ax2017\engine\dataarray.h"
        else
            var_20 = "AssignPropertyRect"
            var_24 = 0x1c5d
            var_28 = "c:\ax2017\engine\ui2.cpp"
            ecx_1 = "memcpy(val, &value, sizeof(value))"
    else
        var_20 = "UI2DefGet"
        var_24 = 0x623
        var_28 = "c:\ax2017\engine\ui2.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
    
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_28, var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
