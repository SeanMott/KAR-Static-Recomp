//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8028FF84(PPC::Runtime::GCContext* context)
{
/*8028FF84 0028CD84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028FF88 0028CD88*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028FF8C 0028CD8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028FF90 0028CD90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 8028FF94 0028CD94  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*8028FF98 0028CD98*/ PPC::Runtime::ASM::beq(.L_8028FFD0);
/*8028FF9C 0028CD9C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD1E8 @ Get_MemoryOffset_HighBit);
/*8028FFA0 0028CDA0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, lbl_804BD1E8 @ Get_MemoryOffset_LowBit);
/*8028FFA4 0028CDA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8028FFA8 0028CDA8*/ PPC::Runtime::ASM::beq(.L_8028FFC0);
/*8028FFAC 0028CDAC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD1B8 @ Get_MemoryOffset_HighBit);
/*8028FFB0 0028CDB0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028FFB4 0028CDB4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BD1B8 @ Get_MemoryOffset_LowBit);
/*8028FFB8 0028CDB8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8028FFBC 0028CDBC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDBA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028FFC0, 0x8028FFC0) //this is a jump label
/*8028FFC0 0028CDC0*/ PPC::Runtime::ASM::extsh.(context->r0, context->r4);
/*8028FFC4 0028CDC4*/ PPC::Runtime::ASM::ble(.L_8028FFD0);
/*8028FFC8 0028CDC8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028FFCC 0028CDCC*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028FFD0, 0x8028FFD0) //this is a jump label
/*8028FFD0 0028CDD0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028FFD4 0028CDD4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8028FFD8 0028CDD8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028FFDC 0028CDDC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028FFE0 0028CDE0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028FFE4 0028CDE4*/ PPC::Runtime::ASM::blr();
}