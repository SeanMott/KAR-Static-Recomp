//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802951E0(PPC::Runtime::GCContext* context)
{
/*802951E0 00291FE0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802951E4 00291FE4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*802951E8 00291FE8*/ PPC::Runtime::ASM::beq(.L_80295200);
/*802951EC 00291FEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802951F0 00291FF0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802951F4 00291FF4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*802951F8 00291FF8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802951FC 00291FFC*/ PPC::Runtime::ASM::b(.L_80295208);
RUNTIME_PPC_JUMP_LABEL(.L_80295200, 0x80295200) //this is a jump label
/*80295200 00292000*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA98 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295204 00292004*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA94 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80295208, 0x80295208) //this is a jump label
/*80295208 00292008*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8029520C 0029200C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80295210 00292010*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA90 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295214 00292014*/ PPC::Runtime::ASM::blr();
}