//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802949D4(PPC::Runtime::GCContext* context)
{
/*802949D4 002917D4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802949D8 002917D8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802949DC 002917DC*/ PPC::Runtime::ASM::beq(.L_802949F4);
/*802949E0 002917E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802949E4 002917E4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802949E8 002917E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802949EC 002917EC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802949F0 002917F0*/ PPC::Runtime::ASM::b(.L_802949FC);
RUNTIME_PPC_JUMP_LABEL(.L_802949F4, 0x802949F4) //this is a jump label
/*802949F4 002917F4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA50 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802949F8 002917F8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA4C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_802949FC, 0x802949FC) //this is a jump label
/*802949FC 002917FC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294A00 00291800*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80294A04 00291804*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA48 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294A08 00291808*/ PPC::Runtime::ASM::blr();
}