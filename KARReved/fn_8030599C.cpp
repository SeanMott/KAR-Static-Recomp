//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8030599C(PPC::Runtime::GCContext* context)
{
/*8030599C 0030279C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDC0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803059A0 003027A0*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803059A4 003027A4*/ PPC::Runtime::ASM::beq(.L_803059C0);
/*803059A8 003027A8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDC10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803059AC 003027AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803059B0 003027B0*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDC10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803059B4 003027B4*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*803059B8 003027B8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDC10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803059BC 003027BC*/ PPC::Runtime::ASM::b(.L_803059C8);
RUNTIME_PPC_JUMP_LABEL(.L_803059C0, 0x803059C0) //this is a jump label
/*803059C0 003027C0*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDC10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803059C4 003027C4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDC0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_803059C8, 0x803059C8) //this is a jump label
/*803059C8 003027C8*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDC08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803059CC 003027CC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*803059D0 003027D0*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDC08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803059D4 003027D4*/ PPC::Runtime::ASM::blr();
}