//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"



void fn_8003F740(PPC::Runtime::GCContext* context)
{
/*8003F740 0003C540*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8003F744 0003C544*/ PPC::Runtime::ASM::mflr(context->r0);
/*8003F748 0003C548*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003F74C 0003C54C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003F750 0003C550*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8003F754 0003C554*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8003F758 0003C558*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x394);
/*8003F75C 0003C55C*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*8003F760 0003C560*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*8003F764 0003C564*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xcf, context->r3));
/*8003F768 0003C568*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8003F76C 0003C56C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8003F770 0003C570*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8003F774 0003C574*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8003F778 0003C578*/ PPC::Runtime::ASM::blr();
}