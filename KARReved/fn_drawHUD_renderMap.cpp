//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80114EEC.hpp"



void fn_drawHUD_renderMap(PPC::Runtime::GCContext* context)
{
/*801247E0 001215E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801247E4 001215E4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801247E8 001215E8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801247EC 001215EC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801247F0 001215F0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x334, context->r3));
/*801247F4 001215F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801247F8 001215F8*/ PPC::Runtime::ASM::beq(.L_80124800);
/*801247FC 001215FC*/ PPC::Runtime::ASM::bl(fn_80114EEC);
RUNTIME_PPC_JUMP_LABEL(.L_80124800, 0x80124800) //this is a jump label
/*80124800 00121600*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80124804 00121604*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80124808 00121608*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8012480C 0012160C*/ PPC::Runtime::ASM::blr();
}