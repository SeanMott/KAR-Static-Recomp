//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801FD6B0.hpp"
#include "fn_80204198.hpp"
#include "fn_801FC398.hpp"
#include "fn_801FECD4.hpp"
#include "fn_801FECF8.hpp"



void fn_80212990(PPC::Runtime::GCContext* context)
{
/*80212990 0020F790*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80212994 0020F794*/ PPC::Runtime::ASM::mflr(context->r0);
/*80212998 0020F798*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8021299C 0020F79C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802129A0 0020F7A0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802129A4 0020F7A4*/ PPC::Runtime::ASM::bl(fn_801FD6B0);
/*802129A8 0020F7A8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*802129AC 0020F7AC*/ PPC::Runtime::ASM::bl(fn_80204198);
/*802129B0 0020F7B0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2578 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802129B4 0020F7B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802129B8 0020F7B8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E257C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802129BC 0020F7BC*/ PPC::Runtime::ASM::li(context->r4, 0x12);
/*802129C0 0020F7C0*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*802129C4 0020F7C4*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*802129C8 0020F7C8*/ PPC::Runtime::ASM::bl(fn_801FC398);
/*802129CC 0020F7CC*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*802129D0 0020F7D0*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r31));
/*802129D4 0020F7D4*/ PPC::Runtime::ASM::lha(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb4e, context->r31));
/*802129D8 0020F7D8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802129DC 0020F7DC*/ PPC::Runtime::ASM::bne(.L_802129F0);
/*802129E0 0020F7E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*802129E4 0020F7E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802129E8 0020F7E8*/ PPC::Runtime::ASM::bl(fn_801FECD4);
/*802129EC 0020F7EC*/ PPC::Runtime::ASM::b(.L_802129FC);
RUNTIME_PPC_JUMP_LABEL(.L_802129F0, 0x802129F0) //this is a jump label
/*802129F0 0020F7F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b4, context->r31));
/*802129F4 0020F7F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*802129F8 0020F7F8*/ PPC::Runtime::ASM::bl(fn_801FECF8);
RUNTIME_PPC_JUMP_LABEL(.L_802129FC, 0x802129FC) //this is a jump label
/*802129FC 0020F7FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80212A00 0020F800*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80212A04 0020F804*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80212A08 0020F808*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80212A0C 0020F80C*/ PPC::Runtime::ASM::blr();
}