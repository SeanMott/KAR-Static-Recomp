//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_800F446C.hpp"
#include "fn_800FB618.hpp"



void fn_800FB5D0(PPC::Runtime::GCContext* context)
{
/*800FB5D0 000F83D0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800FB5D4 000F83D4*/ PPC::Runtime::ASM::mflr(context->r0);
/*800FB5D8 000F83D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FB5DC 000F83DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FB5E0 000F83E0*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*800FB5E4 000F83E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FB5E8 000F83E8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*800FB5EC 000F83EC*/ PPC::Runtime::ASM::li(context->r3, 0x29);
/*800FB5F0 000F83F0*/ PPC::Runtime::ASM::bl(fn_800F446C);
/*800FB5F4 000F83F4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*800FB5F8 000F83F8*/ PPC::Runtime::ASM::mr(context->r5, context->r31);
/*800FB5FC 000F83FC*/ PPC::Runtime::ASM::bl(fn_800FB618);
/*800FB600 000F8400*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800FB604 000F8404*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800FB608 000F8408*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*800FB60C 000F840C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800FB610 000F8410*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800FB614 000F8414*/ PPC::Runtime::ASM::blr();
}