//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018DBA0.hpp"



void fn_800F8344(PPC::Runtime::GCContext* context)
{
/*800F8344 000F5144*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F8348 000F5148*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F834C 000F514C*/ PPC::Runtime::ASM::fmr(context->f1, context->f2);
/*800F8350 000F5150*/ PPC::Runtime::ASM::mr(context->r9, context->r4);
/*800F8354 000F5154*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F8358 000F5158*/ PPC::Runtime::ASM::mr(context->r0, context->r5);
/*800F835C 000F515C*/ PPC::Runtime::ASM::mr(context->r7, context->r6);
/*800F8360 000F5160*/ PPC::Runtime::ASM::mr(context->r5, context->r9);
/*800F8364 000F5164*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F8368 000F5168*/ PPC::Runtime::ASM::mr(context->r6, context->r0);
/*800F836C 000F516C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r8));
/*800F8370 000F5170*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r8));
/*800F8374 000F5174*/ PPC::Runtime::ASM::bl(fn_8018DBA0);
/*800F8378 000F5178*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F837C 000F517C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F8380 000F5180*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F8384 000F5184*/ PPC::Runtime::ASM::blr();
}