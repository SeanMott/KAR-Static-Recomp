//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018C4E8.hpp"



void fn_800F53A8(PPC::Runtime::GCContext* context)
{
/*800F53A8 000F21A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F53AC 000F21AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F53B0 000F21B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F53B4 000F21B4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F53B8 000F21B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F53BC 000F21BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r31));
/*800F53C0 000F21C0*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*800F53C4 000F21C4*/ PPC::Runtime::ASM::beq(.L_800F53D0);
/*800F53C8 000F21C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*800F53CC 000F21CC*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_800F53D0, 0x800F53D0) //this is a jump label
/*800F53D0 000F21D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800F53D4 000F21D4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*800F53D8 000F21D8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r31));
/*800F53DC 000F21DC*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*800F53E0 000F21E0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*800F53E4 000F21E4*/ PPC::Runtime::ASM::bl(fn_8018C4E8);
/*800F53E8 000F21E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F53EC 000F21EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F53F0 000F21F0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F53F4 000F21F4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F53F8 000F21F8*/ PPC::Runtime::ASM::blr();
}