//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80391B1C.hpp"
#include "fn_80391C1C.hpp"



void fn_8039A30C(PPC::Runtime::GCContext* context)
{
/*8039A30C 0039710C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8039A310 00397110*/ PPC::Runtime::ASM::mflr(context->r0);
/*8039A314 00397114*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A318 00397118*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A31C 0039711C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A320 00397120*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8039A324 00397124*/ PPC::Runtime::ASM::bl(fn_GXInvalidateTexAll);
/*8039A328 00397128*/ PPC::Runtime::ASM::bl(fn_80391B1C);
/*8039A32C 0039712C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A330 00397130*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A334 00397134*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r12));
/*8039A338 00397138*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A33C 0039713C*/ PPC::Runtime::ASM::bctrl();
/*8039A340 00397140*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8039A344 00397144*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039A348 00397148*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039A34C 0039714C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r12));
/*8039A350 00397150*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039A354 00397154*/ PPC::Runtime::ASM::bctrl();
/*8039A358 00397158*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8039A35C 0039715C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8039A360 00397160*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*8039A364 00397164*/ PPC::Runtime::ASM::bl(fn_80391C1C);
/*8039A368 00397168*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039A36C 0039716C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8039A370 00397170*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8039A374 00397174*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8039A378 00397178*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8039A37C 0039717C*/ PPC::Runtime::ASM::blr();
}