//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DDBB0.hpp"



void fn_802DDAE4(PPC::Runtime::GCContext* context)
{
/*802DDAE4 002DA8E4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*802DDAE8 002DA8E8*/ PPC::Runtime::ASM::mflr(context->r0);
/*802DDAEC 002DA8EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DDAF0 002DA8F0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802DDAF4 002DA8F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802DDAF8 002DA8F8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802DDAFC 002DA8FC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*802DDB00 002DA900*/ PPC::Runtime::ASM::li(context->r3, 0x818);
/*802DDB04 002DA904*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802DDB08 002DA908*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DDB0C 002DA90C*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/* 802DDB10 002DA910  7C 64 1B 79 */ mr. context->r4 , context->r3
/*802DDB14 002DA914*/ PPC::Runtime::ASM::beq(.L_802DDB20);
/*802DDB18 002DA918*/ PPC::Runtime::ASM::bl(fn_802DDBB0);
/*802DDB1C 002DA91C*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_802DDB20, 0x802DDB20) //this is a jump label
/*802DDB20 002DA920*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DDB24 002DA924*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802DDB28 002DA928*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802DDB2C 002DA92C*/ PPC::Runtime::ASM::cmplw(context->r3, context->r4);
/*802DDB30 002DA930*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802DDB34 002DA934*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802DDB38 002DA938*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802DDB3C 002DA93C*/ PPC::Runtime::ASM::beq(.L_802DDB58);
/*802DDB40 002DA940*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802DDB44 002DA944*/ PPC::Runtime::ASM::beq(.L_802DDB50);
/*802DDB48 002DA948*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD96C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DDB4C 002DA94C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802DDB50, 0x802DDB50) //this is a jump label
/*802DDB50 002DA950*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802DDB54 002DA954*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_802DDB58, 0x802DDB58) //this is a jump label
/*802DDB58 002DA958*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*802DDB5C 002DA95C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802DDB60 002DA960*/ PPC::Runtime::ASM::beq(.L_802DDB70);
/*802DDB64 002DA964*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802DDB68 002DA968*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD96C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DDB6C 002DA96C*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802DDB70, 0x802DDB70) //this is a jump label
/*802DDB70 002DA970*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DDB74 002DA974*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802DDB78 002DA978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802DDB7C 002DA97C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*802DDB80 002DA980*/ PPC::Runtime::ASM::b(.L_802DDB8C);
/*802DDB84 002DA984*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD96C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802DDB88 002DA988*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_802DDB8C, 0x802DDB8C) //this is a jump label
/*802DDB8C 002DA98C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xc);
/*802DDB90 002DA990*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802DDB94 002DA994*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802DDB98 002DA998*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*802DDB9C 002DA99C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802DDBA0 002DA9A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*802DDBA4 002DA9A4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802DDBA8 002DA9A8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*802DDBAC 002DA9AC*/ PPC::Runtime::ASM::blr();
}