//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80294D48(PPC::Runtime::GCContext* context)
{
/*80294D48 00291B48*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294D4C 00291B4C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80294D50 00291B50*/ PPC::Runtime::ASM::beq(.L_80294D6C);
/*80294D54 00291B54*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294D58 00291B58*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80294D5C 00291B5C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294D60 00291B60*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80294D64 00291B64*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294D68 00291B68*/ PPC::Runtime::ASM::b(.L_80294D74);
RUNTIME_PPC_JUMP_LABEL(.L_80294D6C, 0x80294D6C) //this is a jump label
/*80294D6C 00291B6C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA74 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294D70 00291B70*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA70 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80294D74, 0x80294D74) //this is a jump label
/*80294D74 00291B74*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294D78 00291B78*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80294D7C 00291B7C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294D80 00291B80*/ PPC::Runtime::ASM::blr();
}