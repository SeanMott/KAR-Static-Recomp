//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8022438C.hpp"



void fn_802244CC(PPC::Runtime::GCContext* context)
{
/*802244CC 002212CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802244D0 002212D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*802244D4 002212D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802244D8 002212D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802244DC 002212DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802244E0 002212E0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r3));
/*802244E4 002212E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*802244E8 002212E8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0xc);
/*802244EC 002212EC*/ PPC::Runtime::ASM::bl(fn_8022438C);
/*802244F0 002212F0*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13c, context->r31));
/*802244F4 002212F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802244F8 002212F8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802244FC 002212FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80224500 00221300*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80224504 00221304*/ PPC::Runtime::ASM::blr();
}