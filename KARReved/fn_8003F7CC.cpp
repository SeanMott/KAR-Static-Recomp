//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003F7CC(PPC::Runtime::GCContext* context)
{
/*8003F7CC 0003C5CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003F7D0 0003C5D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003F7D4 0003C5D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003F7D8 0003C5D8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003F7DC 0003C5DC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8003F7E0 0003C5E0*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003F7E4 0003C5E4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x394);
/*8003F7E8 0003C5E8*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8003F7EC 0003C5EC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8003F7F0 0003C5F0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd3, context->r3));
/*8003F7F4 0003C5F4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003F7F8 0003C5F8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003F7FC 0003C5FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003F800 0003C600*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003F804 0003C604*/ PPC::Runtime::ASM::blr();
}