//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DA3C0.hpp"
#include "fn_801F620C.hpp"



void fn_801F805C(PPC::Runtime::GCContext* context)
{
/*801F805C 001F4E5C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801F8060 001F4E60*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F8064 001F4E64*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F8068 001F4E68*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F806C 001F4E6C*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F8070 001F4E70*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F8074 001F4E74*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F8078 001F4E78*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801F807C 001F4E7C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78c, context->r3));
/*801F8080 001F4E80*/ PPC::Runtime::ASM::bl(fn_801DA3C0);
/*801F8084 001F4E84*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801F8088 001F4E88*/ PPC::Runtime::ASM::beq(.L_801F80A8);
/*801F808C 001F4E8C*/ PPC::Runtime::ASM::fctiwz(context->f0, context->f31);
/*801F8090 001F4E90*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x654, context->r31));
/*801F8094 001F4E94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*801F8098 001F4E98*/ PPC::Runtime::ASM::stfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801F809C 001F4E9C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x874, context->r31));
/*801F80A0 001F4EA0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F80A4 001F4EA4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x878, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801F80A8, 0x801F80A8) //this is a jump label
/*801F80A8 001F4EA8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801F80AC 001F4EAC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F80B0 001F4EB0*/ PPC::Runtime::ASM::bl(fn_801F620C);
/*801F80B4 001F4EB4*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*801F80B8 001F4EB8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801F80BC 001F4EBC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*801F80C0 001F4EC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801F80C4 001F4EC4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F80C8 001F4EC8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801F80CC 001F4ECC*/ PPC::Runtime::ASM::blr();
}