//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_8024EE58(PPC::Runtime::GCContext* context)
{
/*8024EE58 0024BC58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8024EE5C 0024BC5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8024EE60 0024BC60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024EE64 0024BC64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024EE68 0024BC68*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8024EE6C 0024BC6C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8024EE70 0024BC70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*8024EE74 0024BC74*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8024EE78 0024BC78*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8024EE7C 0024BC7C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8024EE80 0024BC80*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8024EE84 0024BC84*/ PPC::Runtime::ASM::bl(fn_JObj_LoadJoint);
/*8024EE88 0024BC88*/ PPC::Runtime::ASM::lbz(context->r4, SkipAddress_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8024EE8C 0024BC8C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8024EE90 0024BC90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8024EE94 0024BC94*/ PPC::Runtime::ASM::bl(fn_GObj_AddObject);
/*8024EE98 0024BC98*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8024EE9C 0024BC9C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8024EEA0 0024BCA0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8024EEA4 0024BCA4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8024EEA8 0024BCA8*/ PPC::Runtime::ASM::blr();
}