// 函数名称: sub_46a6c0
// 虚拟地址: 0x46a6c0
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

uint32_t __fastcallsub_46a6c0(void* arg1, char arg2)
{
    // 第一条实际指令: uint32_t ebx
    uint32_t ebx
    ebx.b = arg2
    int32_t* ecx = data_5cd9f8
    char var_5 = ebx.b
    char const* const var_30_3
    int32_t var_2c_1
    char const* const var_28_1
    void* eax
    char* ecx_1
    
    if (ecx[1] == 0x22)
        eax = sub_4459f0(ecx)
        void* ecx_2 = *(arg1 + 0x784)
        void* var_14_1 = eax
        
        if (ecx_2 != 0)
            eax = *(ecx_2 + 0x7f4)
            int32_t edx = 0
            void* var_c_1 = eax
            
            if (eax s> 0)
                void* edi_1 = ecx_2 + 0x7f8
                
                while (true)
                    int32_t ecx_3 = *edi_1
                    
                    if (ecx_3 == 0)
                    label_46a774:
                        edx += 1
                        edi_1 += 4
                        
                        if (edx s< eax)
                            continue
                    else
                        ebx = zx.d(ecx_3.w)
                        
                        if (ebx u>= data_5c99a4)
                            goto label_46a874
                        
                        eax = ebx * 0x1008 + data_5c99a0
                        
                        if (*(eax + 0x1004) != ecx_3)
                            goto label_46a874
                        
                        eax = var_c_1
                        
                        if (ebx * 0x1008 + data_5c99a0 != arg1)
                            goto label_46a774
                        
                        sub_51dd40(edi_1, *(arg1 + 0x784) + (edx << 2) + 0x7fc, 
                            ((eax - edx) << 2) + 0xfffffffc)
                        void* eax_11 = *(arg1 + 0x784)
                        *(eax_11 + 0x7f4) -= 1
                        void* eax_12 = *(arg1 + 0x784)
                        *(eax_12 + 0xff8) -= 1
                    
                    ebx.b = var_5
                    break
            
            eax = sub_462780(arg1)
            int32_t var_c_2 = 0
            
            if (*(arg1 + 0x7f4) s<= 0)
            label_46a8b5:
                *(arg1 + 0x7f4) = 0
                
                if (ebx.b != 0 || *(arg1 + 0x788) != ebx.b)
                label_46a997:
                    sub_47ba20(arg1)
                    uint32_t result = zx.d(*(arg1 + 0x1004))
                    int32_t ecx_16 = data_5c99ac
                    data_5c99ac = result
                    *(arg1 + 0x1004) = ecx_16
                    data_5c99b0 -= 1
                    return result
                
                int32_t edi_4 = *(arg1 + 0x6a8)
                
                if (edi_4 s>= 0)
                    void* eax_14 = sub_46a5b0(var_14_1, edi_4)
                    
                    if (eax_14 != 0)
                        *(eax_14 + 8) -= 1
                    
                    int32_t* eax_15 = sub_48c3c0(data_e470e0, 0)
                    sub_4d2d50(eax_15, eax_15, var_14_1, edi_4, &data_5b1d6c)
                    eax = nullptr
                    
                    while (true)
                        void* edx_6 = data_5c99a0
                        int32_t ecx_18
                        
                        while (true)
                            if (eax != 0)
                                eax += 0x1008
                            else
                                eax = edx_6
                            
                            void* ecx_14 = data_5c99a4 * 0x1008 + edx_6
                            
                            if (eax u>= ecx_14)
                                goto label_46a997
                            
                            while ((*(eax + 0x1004) & 0xffff0000) == 0)
                                eax += 0x1008
                                
                                if (eax u>= ecx_14)
                                    goto label_46a997
                            
                            if (*(eax + 0x6a4) == *(arg1 + 0x6a4))
                                ecx_18 = *(eax + 0x6a8)
                                
                                if (ecx_18 s> *(arg1 + 0x6a8))
                                    break
                        
                        if (ecx_18 s<= 0)
                            break
                        
                        *(eax + 0x6a8) = ecx_18 - 1
                    
                    var_28_1 = "UI2DeleteElement"
                    var_2c_1 = 0x1b8b
                    ecx_1 = "ui->attribItemIndex > 0"
                else
                    var_28_1 = "UI2DeleteElement"
                    var_2c_1 = 0x1b84
                    ecx_1 = "el.attribItemIndex >= 0"
                
                var_30_3 = "c:\ax2017\engine\ui2.cpp"
            else
                eax = arg1 + 0x7f8
                void* var_10_1 = eax
                
                while (true)
                    ebx = *eax
                    
                    if (ebx == 0)
                        var_28_1 = "DataArray<struct UI2>::DataArrayGet"
                        var_2c_1 = 0x6c
                        var_30_3 = "c:\ax2017\engine\dataarray.h"
                        ecx_1 = "id != DATAID_NULL"
                        goto label_46aa06
                    
                    uint32_t ecx_5 = zx.d(ebx.w)
                    
                    if (ecx_5 u>= data_5c99a4)
                        break
                    
                    int32_t edx_1 = data_5c99a0
                    eax = ecx_5 * 0x1008
                    
                    if (*(eax + edx_1 + 0x1004) != ebx)
                        break
                    
                    void* edi_3 = ecx_5 * 0x1008 + edx_1
                    char* const edx_2 = &data_5559b1
                    
                    if (*(edi_3 + 0x784) != arg1)
                        var_28_1 = "UI2DeleteElement"
                        var_2c_1 = 0x1b7a
                        var_30_3 = "c:\ax2017\engine\ui2.cpp"
                        ecx_1 = "child.parent == &el"
                        goto label_46aa06
                    
                    char* eax_4 = *(arg1 + 0x698)
                    char* const ecx_6 = &data_5559b1
                    int32_t var_28_2 = var_c_2
                    
                    if (eax_4 != 0)
                        edx_2 = eax_4
                    
                    char* eax_5 = *(edi_3 + 0x698)
                    char* const var_2c_2 = edx_2
                    uint32_t var_30_1 = ebx
                    int32_t var_34_1 = *(edi_3 + 0x6a8)
                    
                    if (eax_5 != 0)
                        ecx_6 = eax_5
                    
                    char* const var_38_1 = ecx_6
                    sub_44e260("deleting %s %d %x (parent %s %d)")
                    ebx.b = var_5
                    int32_t edx_3
                    
                    if (ebx.b != 0 || *(arg1 + 0x788) != ebx.b)
                        edx_3.b = 1
                    else
                        edx_3.b = 0
                    sub_46a6c0()
                    int32_t ecx_9 = var_c_2 + 1
                    var_c_2 = ecx_9
                    *var_10_1 = 0
                    eax = var_10_1 + 4
                    var_10_1 = eax
                    
                    if (ecx_9 s>= *(arg1 + 0x7f4))
                        goto label_46a8b5
                
            label_46a874:
                var_28_1 = "DataArray<struct UI2>::DataArrayGet"
                var_2c_1 = 0x6d
                var_30_3 = "c:\ax2017\engine\dataarray.h"
                ecx_1 = "DataArrayTryToGet(id) != NULL"
        else
            var_28_1 = "UI2DeleteElement"
            var_2c_1 = 0x1b5e
            ecx_1 = "el.parent"
            var_30_3 = "c:\ax2017\engine\ui2.cpp"
    else
        var_28_1 = "UI2DefGet"
        var_2c_1 = 0x623
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"
        var_30_3 = "c:\ax2017\engine\ui2.cpp"
    
    label_46aa06:
    sub_44e4d0(eax, &data_5559b1, ecx_1, var_30_3, var_2c_1, var_28_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
