//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_killWhispy.hpp"



void fn_800FA6C0(PPC::Runtime::GCContext* context)
{
/*800FA6C0 000F74C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FA6C4 000F74C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FA6C8 000F74C8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DF8C0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*800FA6CC 000F74CC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800FA6D0 000F74D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FA6D4 000F74D4*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*800FA6D8 000F74D8*/ PPC::Runtime::ASM::fmr(context->f2, context->f1);
/*800FA6DC 000F74DC*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*800FA6E0 000F74E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800FA6E4 000F74E4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*800FA6E8 000F74E8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*800FA6EC 000F74EC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800FA6F0 000F74F0*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*800FA6F4 000F74F4*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*800FA6F8 000F74F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FA6FC 000F74FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FA700 000F7500*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FA704 000F7504*/ PPC::Runtime::ASM::blr();
}