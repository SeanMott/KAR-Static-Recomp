//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80191680.hpp"
#include "fn_801C7668.hpp"



void fn_80191BB0(PPC::Runtime::GCContext* context)
{
/*80191BB0 0018E9B0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80191BB4 0018E9B4*/ PPC::Runtime::ASM::mflr(context->r0);
/*80191BB8 0018E9B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191BBC 0018E9BC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80191BC0 0018E9C0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80191BC4 0018E9C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80191BC8 0018E9C8*/ PPC::Runtime::ASM::bl(fn_80191680);
/*80191BCC 0018E9CC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80191BD0 0018E9D0*/ PPC::Runtime::ASM::beq(.L_80191BE0);
/*80191BD4 0018E9D4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3f4, context->r31));
/*80191BD8 0018E9D8*/ PPC::Runtime::ASM::bl(fn_801C7668);
/*80191BDC 0018E9DC*/ PPC::Runtime::ASM::b(.L_80191BE4);
RUNTIME_PPC_JUMP_LABEL(.L_80191BE0, 0x80191BE0) //this is a jump label
/*80191BE0 0018E9E0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E10A0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_80191BE4, 0x80191BE4) //this is a jump label
/*80191BE4 0018E9E4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80191BE8 0018E9E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80191BEC 0018E9EC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80191BF0 0018E9F0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80191BF4 0018E9F4*/ PPC::Runtime::ASM::blr();
}