//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_80112044.hpp"
#include "fn_8011582C.hpp"



void fn_80124798(PPC::Runtime::GCContext* context)
{
/*80124798 00121598*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8012479C 0012159C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801247A0 001215A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801247A4 001215A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801247A8 001215A8*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801247AC 001215AC*/ PPC::Runtime::ASM::bl(fn_80112044);
/*801247B0 001215B0*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801247B4 001215B4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe40, context->r3));
/*801247B8 001215B8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801247BC 001215BC*/ PPC::Runtime::ASM::beq(.L_801247CC);
/*801247C0 001215C0*/ PPC::Runtime::ASM::bl(fn_8011582C);
/*801247C4 001215C4*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801247C8 001215C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe40, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801247CC, 0x801247CC) //this is a jump label
/*801247CC 001215CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801247D0 001215D0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801247D4 001215D4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801247D8 001215D8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801247DC 001215DC*/ PPC::Runtime::ASM::blr();
}