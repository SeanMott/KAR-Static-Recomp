//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_80487C84(PPC::Runtime::GCContext* context)
{
/*80487C84 00484A84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80487C88 00484A88*/ PPC::Runtime::ASM::mflr(context->r0);
/*80487C8C 00484A8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80487C90 00484A90*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80487C94 00484A94*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*80487C98 00484A98*/ PPC::Runtime::ASM::lis(context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_HighBit);
/*80487C9C 00484A9C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, SKIP_ADDRESS_1 @ Get_MemoryOffset_LowBit);
/*80487CA0 00484AA0*/ PPC::Runtime::ASM::lbz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4d, context->r4));
/*80487CA4 00484AA4*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*80487CA8 00484AA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80487CAC 00484AAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80487CB0 00484AB0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80487CB4 00484AB4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80487CB8 00484AB8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80487CBC 00484ABC*/ PPC::Runtime::ASM::blr();
}