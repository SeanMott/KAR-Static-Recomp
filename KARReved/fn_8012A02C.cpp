//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_8012A02C(PPC::Runtime::GCContext* context)
{
/*8012A02C 00126E2C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012A030 00126E30*/ PPC::Runtime::ASM::mflr(context->r0);
/*8012A034 00126E34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012A038 00126E38*/ PPC::Runtime::ASM::bl(fn_80112044);
/*8012A03C 00126E3C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd60, context->r3));
/*8012A040 00126E40*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8012A044 00126E44*/ PPC::Runtime::ASM::beq(.L_8012A04C);
/*8012A048 00126E48*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_8012A04C, 0x8012A04C) //this is a jump label
/*8012A04C 00126E4C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8012A050 00126E50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8012A054 00126E54*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012A058 00126E58*/ PPC::Runtime::ASM::blr();
}