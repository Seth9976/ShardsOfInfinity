// 函数名称: sub_5014a0
// 虚拟地址: 0x5014a0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t* __fastcallsub_5014a0(int32_t arg1)
{
    // 第一条实际指令: int32_t edi = arg1
    int32_t edi = arg1
    int32_t* ecx = data_d76c60
    char const* const var_28
    int32_t var_24
    char const* const var_20
    int32_t* result
    char* ecx_1
    
    if (ecx[1] == 0x1e)
        int32_t* result_2 = sub_4459f0(ecx)
        int32_t esi_1 = 0
        result = result_2[1]
        int32_t* result_4 = result
        int32_t* result_1 = result
        int32_t* result_3 = result
        int32_t* result_5 = result_4
        
        if (result_4 s> 0)
            int32_t edx_1 = data_d77c6c
            int32_t* ebx_1 = nullptr
            
            do
                int32_t eax = 0
                
                if (edx_1 s> 0)
                    do
                        if ((&data_d76c6c)[eax] == *(ebx_1 + *result_2))
                            void* result_6 = result_5 - 1
                            result_5 = result_6
                            sub_5013a0(esi_1, result_6)
                            edx_1 = data_d77c6c
                            int32_t eax_2 = edi - 1
                            
                            if (esi_1 s>= eax_2)
                                eax_2 = edi
                            
                            esi_1 -= 1
                            edi = eax_2
                            ebx_1 -= 0x118
                            break
                        
                        eax += 1
                    while (eax s< edx_1)
                
                esi_1 += 1
                ebx_1 = &ebx_1[0x46]
            while (esi_1 s< result_5)
            
            result = result_2
            result_4 = result_5
            result_3 = result[1]
        
        if (edi != 0xffffffff)
            void* esi_2 = result_3 - 1
            
            if (esi_2 s>= result_4)
                do
                    if (esi_2 != edi)
                        sub_5013a0(esi_2, edi)
                    
                    esi_2 -= 1
                    edi += 1
                while (esi_2 s>= result_4)
                
                result = result_2
                result_3 = result[1]
        
        if (result_1 == result_3)
            return result
        
        var_20 = "MoveSelectionToPosition"
        var_24 = 0x96b
        var_28 = "c:\ax2017\engine\editor\uieditor.cpp"
        ecx_1 = "numElements == layout.numElements"
    else
        var_20 = "UIDefGet"
        var_24 = 0x10d
        var_28 = "c:\ax2017\engine\uidef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    
    sub_44e4d0(result, &data_5559b1, ecx_1, var_28, var_24, var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
