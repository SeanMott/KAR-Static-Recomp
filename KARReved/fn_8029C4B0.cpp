//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8029C4B0(PPC::Runtime::GCContext* context)
{
/*8029C4B0 002992B0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029C4B4 002992B4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8029C4B8 002992B8*/ PPC::Runtime::ASM::beq(.L_8029C4D4);
/*8029C4BC 002992BC*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029C4C0 002992C0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8029C4C4 002992C4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029C4C8 002992C8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*8029C4CC 002992CC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029C4D0 002992D0*/ PPC::Runtime::ASM::b(.L_8029C4DC);
RUNTIME_PPC_JUMP_LABEL(.L_8029C4D4, 0x8029C4D4) //this is a jump label
/*8029C4D4 002992D4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029C4D8 002992D8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA64 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8029C4DC, 0x8029C4DC) //this is a jump label
/*8029C4DC 002992DC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029C4E0 002992E0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*8029C4E4 002992E4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029C4E8 002992E8*/ PPC::Runtime::ASM::blr();
}