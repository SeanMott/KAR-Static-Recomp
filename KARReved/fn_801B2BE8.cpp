//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_zz_pointerToMemoryAddress_82348324_.hpp"
#include "fn_801B28F8.hpp"



void fn_801B2BE8(PPC::Runtime::GCContext* context)
{
/*801B2BE8 001AF9E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801B2BEC 001AF9EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B2BF0 001AF9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2BF4 001AF9F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B2BF8 001AF9F8*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*801B2BFC 001AF9FC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B2C00 001AFA00*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*801B2C04 001AFA04*/ PPC::Runtime::ASM::bl(fn_zz_pointerToMemoryAddress_82348324_);
/*801B2C08 001AFA08*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*801B2C0C 001AFA0C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801B2C10 001AFA10*/ PPC::Runtime::ASM::bl(fn_801B28F8);
/*801B2C14 001AFA14*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801B2C18 001AFA18*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B2C1C 001AFA1C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B2C20 001AFA20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B2C24 001AFA24*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801B2C28 001AFA28*/ PPC::Runtime::ASM::blr();
}