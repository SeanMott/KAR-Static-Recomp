//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80295DF8(PPC::Runtime::GCContext* context)
{
/*80295DF8 00292BF8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDB0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295DFC 00292BFC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80295E00 00292C00*/ PPC::Runtime::ASM::beq(.L_80295E1C);
/*80295E04 00292C04*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDB10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295E08 00292C08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80295E0C 00292C0C*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDB10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295E10 00292C10*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r4));
/*80295E14 00292C14*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295E18 00292C18*/ PPC::Runtime::ASM::b(.L_80295E24);
RUNTIME_PPC_JUMP_LABEL(.L_80295E1C, 0x80295E1C) //this is a jump label
/*80295E1C 00292C1C*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295E20 00292C20*/ PPC::Runtime::ASM::stw(context->r3, STRUCT_BYTE4_COUNT_1805DDB0C @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80295E24, 0x80295E24) //this is a jump label
/*80295E24 00292C24*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDB08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295E28 00292C28*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1);
/*80295E2C 00292C2C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB08 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80295E30 00292C30*/ PPC::Runtime::ASM::blr();
}