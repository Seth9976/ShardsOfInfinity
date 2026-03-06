// 函数名称: sub_469210
// 虚拟地址: 0x469210
// 源二进制: E:/torrent/Tools/Templetesgames/Shards.of.Infinity.Build.3805616.Win64.Public/steamapps/common/Shards of Infinity/Shards.exe.bndb

int32_t __fastcallsub_469210(char arg1)
{
    // 第一条实际指令: int32_t ebx
    int32_t ebx
    ebx.b = arg1
    int32_t* i_3 = nullptr
    char* ecx = sub_47b8c0(&data_5c99a0, &i_3)
    
    for (int32_t* i = i_3; i != 0xffffffff; i = i_3)
        i[0x195] = 2
        ecx = sub_47b8c0(&data_5c99a0, &i_3)
    
    if (ebx.b != 0)
        sub_4c68c0(ecx)
    
    int32_t i_1 = data_64f840
    int32_t* i_4
    
    if (i_1 != 0x80)
        i_4 = data_64f844
    else
        int32_t* esi_1 = data_5cfa58
        
        if ((esi_1[2].b & 1) == 0)
            esi_1[3]
            sub_48b5b0(*esi_1)
            *esi_1 = 0
        
        char** ecx_2 = esi_1[1]
        
        if (ecx_2 != 0)
            sub_491590(ecx_2)
            esi_1[1] = 0
        
        _aligned_free_base(esi_1)
        sub_51dd40(0x5cea40, 0x5cfa5c, 0x7fde4)
        i_1 = data_64f840 - 1
        i_4 = data_64f844 - 1
        data_64f840 = i_1
        data_64f844 = i_4
    
    int32_t var_24
    char const* const var_20_4
    char* ecx_8
    
    if (i_1 s< i_4)
        void* ebx_2 = &(&data_5cfa58)[i_1 * 0x407]
        
        do
            int32_t* esi_2 = *ebx_2
            
            if (esi_2[1] != 0)
                var_20_4 = "UI2CreateUndoCheckpoint"
                var_24 = 0x18dc
                ecx_8 = "gUI2Editor.undoStack[i].def->pParseTree == NULL"
                goto label_469417
            
            if ((esi_2[2].b & 1) == 0)
                esi_2[3]
                sub_48b5b0(*esi_2)
                char** ecx_4 = esi_2[1]
                *esi_2 = 0
                
                if (ecx_4 != 0)
                    sub_491590(ecx_4)
                    esi_2[1] = 0
            
            i_4 = _aligned_free_base(esi_2)
            i_1 += 1
            ebx_2 += 0x101c
        while (i_1 s< data_64f844)
        
        i_1 = data_64f840
    
    sub_51d5b0(i_1 * 0x101c + 0x5cea40, &data_5cda28, 0x1018)
    void* edi_1 = data_dff690
    int32_t* esi_3 = *data_5cd9f8
    int32_t* i_5 = sub_45cd70(0x10)
    i_3 = i_5
    *i_5 = zx.o(0)
    *i_5 = sub_48bb00(*esi_3, edi_1)
    i_5[3] = edi_1
    int32_t i_2 = 0
    *(i_1 * 0x101c + 0x5cfa58) = i_5
    int32_t* ebx_4 = *i_5
    
    if (ebx_4[1] s<= 0)
        i_4 = i_3
    else
        int32_t esi_4 = 0
        
        do
            sub_468e30(*ebx_4 + esi_4)
            i_2 += 1
            esi_4 += 0xc
        while (i_2 s< ebx_4[1])
        
        i_4 = *(i_1 * 0x101c + 0x5cfa58)
    
    if (i_4[1] == 0)
        int32_t result = data_64f840 + 1
        data_64f840 = result
        data_64f844 = result
        return result
    
    var_20_4 = "UI2SaveUndoState"
    var_24 = 0x1892
    ecx_8 = "s.def->pParseTree == NULL"
    label_469417:
    sub_44e4d0(i_4, &data_5559b1, ecx_8, "c:\ax2017\engine\ui2.cpp", var_24, var_20_4)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_44e680()
    noreturn
}
