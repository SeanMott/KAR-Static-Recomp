//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802950C8(PPC::Runtime::GCContext* context)
{
/*802950C8 00291EC8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802950CC 00291ECC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802950D0 00291ED0*/ PPC::Runtime::ASM::bne(.L_802950F0);
/*802950D4 00291ED4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802950D8 00291ED8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*802950DC 00291EDC*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDA88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802950E0 00291EE0*/ PPC::Runtime::ASM::beq(.L_802950F8);
/*802950E4 00291EE4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*802950E8 00291EE8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802950EC 00291EEC*/ PPC::Runtime::ASM::b(.L_802950F8);
RUNTIME_PPC_JUMP_LABEL(.L_802950F0, 0x802950F0) //this is a jump label
/*802950F0 00291EF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802950F4 00291EF4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_802950F8, 0x802950F8) //this is a jump label
/*802950F8 00291EF8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802950FC 00291EFC*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80295100 00291F00*/ PPC::Runtime::ASM::bne(.L_80295120);
/*80295104 00291F04*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295108 00291F08*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8029510C 00291F0C*/ PPC::Runtime::ASM::stw(context->r4, STRUCT_BYTE4_COUNT_1805DDA8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295110 00291F10*/ PPC::Runtime::ASM::beq(.L_80295128);
/*80295114 00291F14*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80295118 00291F18*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8029511C 00291F1C*/ PPC::Runtime::ASM::b(.L_80295128);
RUNTIME_PPC_JUMP_LABEL(.L_80295120, 0x80295120) //this is a jump label
/*80295120 00291F20*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295124 00291F24*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
RUNTIME_PPC_JUMP_LABEL(.L_80295128, 0x80295128) //this is a jump label
/*80295128 00291F28*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8029512C 00291F2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80295130 00291F30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295134 00291F34*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295138 00291F38*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*8029513C 00291F3C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295140 00291F40*/ PPC::Runtime::ASM::blr();
}