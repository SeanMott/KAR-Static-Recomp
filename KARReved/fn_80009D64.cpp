//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_80009D64(PPC::Runtime::GCContext* context)
{
/*80009D64 00006B64*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80009D68 00006B68*/ PPC::Runtime::ASM::mflr(context->r0);
/*80009D6C 00006B6C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80009D70 00006B70*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80009D74 00006B74*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80009D78 00006B78*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80009D7C 00006B7C*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80009D80 00006B80*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80009D84 00006B84*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80009D88 00006B88*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80009D8C 00006B8C*/ PPC::Runtime::ASM::mulli(context->r0, context->r29, 0x3);
/*80009D90 00006B90*/ PPC::Runtime::ASM::add(context->r0, context->r3, context->r0);
/*80009D94 00006B94*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r30);
/*80009D98 00006B98*/ PPC::Runtime::ASM::stb(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x958, context->r3));
/*80009D9C 00006B9C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80009DA0 00006BA0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80009DA4 00006BA4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80009DA8 00006BA8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80009DAC 00006BAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80009DB0 00006BB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80009DB4 00006BB4*/ PPC::Runtime::ASM::blr();
}