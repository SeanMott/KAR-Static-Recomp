//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_std_redBlackTree_balance_insert_shit.hpp"



void fn_802F0A40(PPC::Runtime::GCContext* context)
{
/*802F0A40 002ED840*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802F0A44 002ED844*/ PPC::Runtime::ASM::mflr(context->r0);
/*802F0A48 002ED848*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F0A4C 002ED84C*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802F0A50 002ED850*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*802F0A54 002ED854*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*802F0A58 002ED858*/ PPC::Runtime::ASM::li(context->r0, -0x2);
/*802F0A5C 002ED85C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802F0A60 002ED860*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*802F0A64 002ED864*/ PPC::Runtime::ASM::mr(context->r28, context->r5);
/*802F0A68 002ED868*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*802F0A6C 002ED86C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r0);
/*802F0A70 002ED870*/ PPC::Runtime::ASM::mr(context->r30, context->r7);
/*802F0A74 002ED874*/ PPC::Runtime::ASM::ble(.L_802F0A98);
/*802F0A78 002ED878*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802F0A7C 002ED87C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8CEC @ Get_MemoryOffset_HighBit);
/*802F0A80 002ED880*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802F0A84 002ED884*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8CEC @ Get_MemoryOffset_LowBit);
/*802F0A88 002ED888*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802F0A8C 002ED88C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802F0A90 002ED890*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802F0A94 002ED894*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802F0A98, 0x802F0A98) //this is a jump label
/*802F0A98 002ED898*/ PPC::Runtime::ASM::li(context->r3, 0x1c);
/*802F0A9C 002ED89C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802F0AA0 002ED8A0  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802F0AA4 002ED8A4*/ PPC::Runtime::ASM::bne(.L_802F0AC8);
/*802F0AA8 002ED8A8*/ PPC::Runtime::ASM::lis(context->r4, __files @ Get_MemoryOffset_HighBit);
/*802F0AAC 002ED8AC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804D8CD0 @ Get_MemoryOffset_HighBit);
/*802F0AB0 002ED8B0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, __files @ Get_MemoryOffset_LowBit);
/*802F0AB4 002ED8B4*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804D8CD0 @ Get_MemoryOffset_LowBit);
/*802F0AB8 002ED8B8*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa0);
/*802F0ABC 002ED8BC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*802F0AC0 002ED8C0*/ PPC::Runtime::ASM::bl(fn_fprintf);
/*802F0AC4 002ED8C4*/ PPC::Runtime::ASM::bl(fn_abort);
RUNTIME_PPC_JUMP_LABEL(.L_802F0AC8, 0x802F0AC8) //this is a jump label
/*802F0AC8 002ED8C8*/ PPC::Runtime::ASM::addic.(context->r4, context->r31, 0xc);
/*802F0ACC 002ED8CC*/ PPC::Runtime::ASM::beq(.L_802F0AF0);
/*802F0AD0 002ED8D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*802F0AD4 002ED8D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r30));
/*802F0AD8 002ED8D8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802F0ADC 002ED8DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*802F0AE0 002ED8E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802F0AE4 002ED8E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*802F0AE8 002ED8E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802F0AEC 002ED8EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_802F0AF0, 0x802F0AF0) //this is a jump label
/*802F0AF0 002ED8F0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/* 802F0AF4 002ED8F4  57 80 06 3F */ clrlwi. context->r0 , context->r28 , 24
/*802F0AF8 002ED8F8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802F0AFC 002ED8FC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802F0B00 002ED900*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802F0B04 002ED904*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 31);
/*802F0B08 002ED908*/ PPC::Runtime::ASM::or(context->r0, context->r27, context->r0);
/*802F0B0C 002ED90C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802F0B10 002ED910*/ PPC::Runtime::ASM::beq(.L_802F0B1C);
/*802F0B14 002ED914*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*802F0B18 002ED918*/ PPC::Runtime::ASM::b(.L_802F0B20);
RUNTIME_PPC_JUMP_LABEL(.L_802F0B1C, 0x802F0B1C) //this is a jump label
/*802F0B1C 002ED91C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
RUNTIME_PPC_JUMP_LABEL(.L_802F0B20, 0x802F0B20) //this is a jump label
/*802F0B20 002ED920*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*802F0B24 002ED924*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802F0B28 002ED928*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*802F0B2C 002ED92C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*802F0B30 002ED930*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*802F0B34 002ED934*/ PPC::Runtime::ASM::bl(fn_std_redBlackTree_balance_insert_shit);
/* 802F0B38 002ED938  57 A0 06 3F */ clrlwi. context->r0 , context->r29 , 24
/*802F0B3C 002ED93C*/ PPC::Runtime::ASM::beq(.L_802F0B44);
/*802F0B40 002ED940*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_802F0B44, 0x802F0B44) //this is a jump label
/*802F0B44 002ED944*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802F0B48 002ED948*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*802F0B4C 002ED94C*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*802F0B50 002ED950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802F0B54 002ED954*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802F0B58 002ED958*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802F0B5C 002ED95C*/ PPC::Runtime::ASM::blr();
}