//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_800FF544.hpp"



void fn_800FF50C(PPC::Runtime::GCContext* context)
{
/*800FF50C 000FC30C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FF510 000FC310*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FF514 000FC314*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FF518 000FC318*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FF51C 000FC31C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800FF520 000FC320*/ PPC::Runtime::ASM::li(context->r3, 0x31);
/*800FF524 000FC324*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*800FF528 000FC328*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800FF52C 000FC32C*/ PPC::Runtime::ASM::bl(fn_800FF544);
/*800FF530 000FC330*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FF534 000FC334*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FF538 000FC338*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FF53C 000FC33C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FF540 000FC340*/ PPC::Runtime::ASM::blr();
}