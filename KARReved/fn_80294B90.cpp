//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80294B90(PPC::Runtime::GCContext* context)
{
/*80294B90 00291990*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294B94 00291994*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80294B98 00291998*/ PPC::Runtime::ASM::beq(.L_80294BB4);
/*80294B9C 0029199C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDA5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294BA0 002919A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80294BA4 002919A4*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDA5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294BA8 002919A8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80294BAC 002919AC*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294BB0 002919B0*/ PPC::Runtime::ASM::b(.L_80294BBC);
RUNTIME_PPC_JUMP_LABEL(.L_80294BB4, 0x80294BB4) //this is a jump label
/*80294BB4 002919B4*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294BB8 002919B8*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDA58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80294BBC, 0x80294BBC) //this is a jump label
/*80294BBC 002919BC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDA54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294BC0 002919C0*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80294BC4 002919C4*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDA54 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80294BC8 002919C8*/ PPC::Runtime::ASM::blr();
}