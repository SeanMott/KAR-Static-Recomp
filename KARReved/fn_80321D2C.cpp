//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80321D2C(PPC::Runtime::GCContext* context)
{
/*80321D2C 0031EB2C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80321D30 0031EB30*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80321D34 0031EB34*/ PPC::Runtime::ASM::beq(.L_80321D50);
/*80321D38 0031EB38*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD9B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80321D3C 0031EB3C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80321D40 0031EB40*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DD9B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80321D44 0031EB44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80321D48 0031EB48*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80321D4C 0031EB4C*/ PPC::Runtime::ASM::b(.L_80321D58);
RUNTIME_PPC_JUMP_LABEL(.L_80321D50, 0x80321D50) //this is a jump label
/*80321D50 0031EB50*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9B4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80321D54 0031EB54*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DD9B0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80321D58, 0x80321D58) //this is a jump label
/*80321D58 0031EB58*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD9AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80321D5C 0031EB5C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80321D60 0031EB60*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD9AC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80321D64 0031EB64*/ PPC::Runtime::ASM::blr();
}