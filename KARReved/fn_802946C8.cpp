//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802946C8(PPC::Runtime::GCContext* context)
{
/*802946C8 002914C8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802946CC 002914CC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802946D0 002914D0*/ PPC::Runtime::ASM::beq(.L_802946EC);
/*802946D4 002914D4*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802946D8 002914D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*802946DC 002914DC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802946E0 002914E0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*802946E4 002914E4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802946E8 002914E8*/ PPC::Runtime::ASM::b(.L_802946F4);
RUNTIME_PPC_JUMP_LABEL(.L_802946EC, 0x802946EC) //this is a jump label
/*802946EC 002914EC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA38 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802946F0 002914F0*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA34 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_802946F4, 0x802946F4) //this is a jump label
/*802946F4 002914F4*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802946F8 002914F8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*802946FC 002914FC*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294700 00291500*/ PPC::Runtime::ASM::blr();
}