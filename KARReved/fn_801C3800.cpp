//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A0044.hpp"
#include "fn_801C2268.hpp"
#include "fn_ground_Spin.hpp"
#include "fn_801C3F40.hpp"



void fn_801C3800(PPC::Runtime::GCContext* context)
{
/*801C3800 001C0600*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C3804 001C0604*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C3808 001C0608*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C380C 001C060C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3810 001C0610*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C3814 001C0614*/ PPC::Runtime::ASM::bl(fn_801A0044);
/*801C3818 001C0618*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C381C 001C061C*/ PPC::Runtime::ASM::bl(fn_801C2268);
/*801C3820 001C0620*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801C3824 001C0624*/ PPC::Runtime::ASM::bne(.L_801C383C);
/*801C3828 001C0628*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C382C 001C062C*/ PPC::Runtime::ASM::bl(fn_ground_Spin);
/*801C3830 001C0630*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801C3834 001C0634*/ PPC::Runtime::ASM::bl(fn_801C3F40);
/*801C3838 001C0638*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801C383C, 0x801C383C) //this is a jump label
/*801C383C 001C063C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C3840 001C0640*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C3844 001C0644*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C3848 001C0648*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C384C 001C064C*/ PPC::Runtime::ASM::blr();
}